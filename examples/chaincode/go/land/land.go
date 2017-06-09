/*
Copyright L Corp. 2017 All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

		 http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

package main

import (
	"fmt"

	"github.com/hyperledger/fabric/core/chaincode/shim"
	pb "github.com/hyperledger/fabric/protos/peer"
	"strconv"
	"encoding/json"
	"bytes"
	"time"
)

type LandChaincode struct {
}

type land struct {
	LandCode string `json:"landCode`
	Location string `json:"location"`
	Name       string `json:"name"`
	Size       int    `json:"size"`
	Purpose      string `json:"purpose"`
	UseCondition string `json:"useCondition`
	Grade      int    `json:"grade`
	Price      int    `json:"price`
	Owner      string `json:"owner`
}

func (t *LandChaincode) Init(stub shim.ChaincodeStubInterface) pb.Response {
	fmt.Println("Land cc Init")
	return shim.Success(nil)
}

func (t *LandChaincode) Invoke(stub shim.ChaincodeStubInterface) pb.Response {
	fmt.Println("Land cc Invoke")

	function, args := stub.GetFunctionAndParameters()
	if function == "invoke" {
		// Make payment of X units from A to B
		return t.invoke(stub, args)
	} else if function == "create" {
		// Deletes an entity from its state
		return t.create(stub, args)
	} else if function == "query" {
		// the old "Query" is now implemtned in invoke
		return t.query(stub, args)
	} else if function == "getHistoryForLand" {
		// the old "Query" is now implemtned in invoke
		return t .getHistoryForLand(stub, args)
	}

	return shim.Error("Invalid invoke function name. Expecting \"invoke\" \"create\" \"query\"")
}

func (t *LandChaincode) invoke(stub shim.ChaincodeStubInterface, args []string) pb.Response {
	fmt.Println("Land cc invoke")
	return shim.Success(nil)
}

func (t *LandChaincode) create(stub shim.ChaincodeStubInterface, args []string) pb.Response {
	fmt.Println("Land cc create")

	var err error

	signedProposal, err := stub.GetSignedProposal()
	if err != nil {
		return shim.Error(err.Error())
	}

	fmt.Printf("The signedProposal is %s\n", signedProposal.Signature)

	//   0       1       2     3      4     5     6    7
	//
	if len(args) != 9 {
		return shim.Error("Incorrect number of arguments. Expecting 4")
	}

	// ==== Input sanitation ====
	fmt.Println("- start create land")
	if len(args[0]) <= 0 {
		return shim.Error("1st argument must be a non-empty string")
	}
	if len(args[1]) <= 0 {
		return shim.Error("2nd argument must be a non-empty string")
	}
	if len(args[2]) <= 0 {
		return shim.Error("3rd argument must be a non-empty string")
	}
	if len(args[3]) <= 0 {
		return shim.Error("4th argument must be a non-empty string")
	}
	if len(args[4]) <= 0 {
		return shim.Error("1st argument must be a non-empty string")
	}
	if len(args[5]) <= 0 {
		return shim.Error("2nd argument must be a non-empty string")
	}
	if len(args[6]) <= 0 {
		return shim.Error("3rd argument must be a non-empty string")
	}
	if len(args[7]) <= 0 {
		return shim.Error("3rd argument must be a non-empty string")
	}
	if len(args[8]) <= 0 {
		return shim.Error("3rd argument must be a non-empty string")
	}

	landCode := args[0]
	location := args[1]
	name := args[2]
	size, _ := strconv.Atoi(args[3])
	purpose := args[4]
	useCondition := args[5]
	grade, _ := strconv.Atoi(args[6])
	price, _ := strconv.Atoi(args[7])
	owner := args[8]

	land := &land{landCode, location, name, size, purpose, useCondition, grade, price, owner}

	landJSONasBytes, err := json.Marshal(land)
	if err != nil {
		return shim.Error(err.Error())
	}

	err = stub.PutState(landCode, landJSONasBytes)
	if err != nil {
		return shim.Error(err.Error())
	}

	fmt.Println("- end create land")
	return shim.Success(nil)
}


func (t *LandChaincode) query(stub shim.ChaincodeStubInterface, args []string) pb.Response {

	var landCode, jsonResp string
	var err error

	if len(args) != 1 {
		return shim.Error("Incorrect number of arguments. Expecting landcode of the land to query")
	}

	landCode = args[0]
	valAsbytes, err := stub.GetState(landCode) //get the marble from chaincode state
	if err != nil {
		jsonResp = "{\"Error\":\"Failed to get state for " + landCode + "\"}"
		return shim.Error(jsonResp)
	} else if valAsbytes == nil {
		jsonResp = "{\"Error\":\"Marble does not exist: " + landCode + "\"}"
		return shim.Error(jsonResp)
	}

	return shim.Success(valAsbytes)
}

func (t *LandChaincode) getHistoryForLand(stub shim.ChaincodeStubInterface, args []string) pb.Response {
	fmt.Println("Land cc getHistoryForLand")

	if len(args) < 1 {
		return shim.Error("Incorrect number of arguments. Expecting 1")
	}

	landCode := args[0]
	fmt.Printf("- start getHistoryForLand: %s\n", landCode)

	resultsIterator, err := stub.GetHistoryForKey(landCode)
	if err != nil {
		return shim.Error(err.Error())
	}
	defer resultsIterator.Close()

	var buffer bytes.Buffer
	buffer.WriteString("[")

	bArrayMemberAlreadyWritten := false
	for resultsIterator.HasNext() {
		response, err := resultsIterator.Next()
		if err != nil {
			return shim.Error(err.Error())
		}
		// Add a comma before array members, suppress it for the first array member
		if bArrayMemberAlreadyWritten == true {
			buffer.WriteString(",")
		}
		buffer.WriteString("{\"TxId\":")
		buffer.WriteString("\"")
		buffer.WriteString(response.TxId)
		buffer.WriteString("\"")

		buffer.WriteString(", \"Value\":")
		// if it was a delete operation on given key, then we need to set the
		//corresponding value null. Else, we will write the response.Value
		//as-is (as the Value itself a JSON marble)
		if response.IsDelete {
			buffer.WriteString("null")
		} else {
			buffer.WriteString(string(response.Value))
		}

		buffer.WriteString(", \"Timestamp\":")
		buffer.WriteString("\"")
		buffer.WriteString(time.Unix(response.Timestamp.Seconds, int64(response.Timestamp.Nanos)).String())
		buffer.WriteString("\"")

		buffer.WriteString(", \"IsDelete\":")
		buffer.WriteString("\"")
		buffer.WriteString(strconv.FormatBool(response.IsDelete))
		buffer.WriteString("\"")

		buffer.WriteString("}")
		bArrayMemberAlreadyWritten = true
	}
	buffer.WriteString("]")

	fmt.Printf("- getHistoryForLand returning:\n%s\n", buffer.String())

	return shim.Success(buffer.Bytes())

}

func main() {
	err := shim.Start(new(LandChaincode))
	if err != nil {
		fmt.Printf("Error starting Land chaincode: %s", err)
	}
}