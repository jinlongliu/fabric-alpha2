/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: consensus.swg

#define SWIGMODULE consensus

#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef int intgo;
typedef unsigned int uintgo;



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;




#define swiggo_size_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];
#define swiggo_size_assert(t, n) swiggo_size_assert_eq(sizeof(t), n, swiggo_sizeof_##t##_is_not_##n)

swiggo_size_assert(char, 1)
swiggo_size_assert(short, 2)
swiggo_size_assert(int, 4)
typedef long long swiggo_long_long;
swiggo_size_assert(swiggo_long_long, 8)
swiggo_size_assert(float, 4)
swiggo_size_assert(double, 8)

#ifdef __cplusplus
extern "C" {
#endif
extern void crosscall2(void (*fn)(void *, int), void *, int);
extern char* _cgo_topofstack(void) __attribute__ ((weak));
extern void _cgo_allocate(void *, int);
extern void _cgo_panic(void *, int);
#ifdef __cplusplus
}
#endif

static char *_swig_topofstack() {
  if (_cgo_topofstack) {
    return _cgo_topofstack();
  } else {
    return 0;
  }
}

static void _swig_gopanic(const char *p) {
  struct {
    const char *p;
  } a;
  a.p = p;
  crosscall2(_cgo_panic, &a, (int) sizeof a);
}




#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static void Swig_free(void* p) {
  free(p);
}


#include <bitcoin/consensus.hpp>

#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_consensus_0731991c73947514(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;

  arg1 = *(void **)&_swig_go_0;

  Swig_free(arg1);

}


intgo _wrap_verify_result_eval_false_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_eval_false;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_eval_true_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_eval_true;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_script_size_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_script_size;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_push_size_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_push_size;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_op_count_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_op_count;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_stack_size_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_stack_size;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_sig_count_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_sig_count;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_pubkey_count_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_pubkey_count;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_verify_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_verify;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_equalverify_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_equalverify;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_checkmultisigverify_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_checkmultisigverify;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_checksigverify_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_checksigverify;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_numequalverify_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_numequalverify;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_bad_opcode_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_bad_opcode;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_disabled_opcode_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_disabled_opcode;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_invalid_stack_operation_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_invalid_stack_operation;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_invalid_altstack_operation_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_invalid_altstack_operation;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_unbalanced_conditional_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_unbalanced_conditional;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_sig_hashtype_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_sig_hashtype;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_sig_der_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_sig_der;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_minimaldata_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_minimaldata;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_sig_pushonly_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_sig_pushonly;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_sig_high_s_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_sig_high_s;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_sig_nulldummy_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_sig_nulldummy;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_pubkeytype_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_pubkeytype;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_cleanstack_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_cleanstack;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_discourage_upgradable_nops_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_discourage_upgradable_nops;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_op_return_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_op_return;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_unknown_error_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_unknown_error;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_tx_invalid_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_tx_invalid;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_tx_size_invalid_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_tx_size_invalid;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_tx_input_invalid_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_tx_input_invalid;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_negative_locktime_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_negative_locktime;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_result_unsatisfied_locktime_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_result_unsatisfied_locktime;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_none_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_none;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_p2sh_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_p2sh;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_strictenc_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_strictenc;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_dersig_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_dersig;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_low_s_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_low_s;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_nulldummy_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_nulldummy;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_sigpushonly_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_sigpushonly;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_minimaldata_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_minimaldata;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_discourage_upgradable_nops_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_discourage_upgradable_nops;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_cleanstack_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_cleanstack;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_flags_checklocktimeverify_consensus_0731991c73947514() {
  libbitcoin::consensus::verify_flags_type result;
  intgo _swig_go_result;


  result = libbitcoin::consensus::verify_flags_checklocktimeverify;

  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


intgo _wrap_verify_script_consensus_0731991c73947514(char *_swig_go_0, long long _swig_go_1, char *_swig_go_2, long long _swig_go_3, intgo _swig_go_4, intgo _swig_go_5) {
  unsigned char *arg1 = (unsigned char *) 0 ;
  size_t arg2 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  size_t arg4 ;
  unsigned int arg5 ;
  unsigned int arg6 ;
  libbitcoin::consensus::verify_result_type result;
  intgo _swig_go_result;

  arg1 = *(unsigned char **)&_swig_go_0;
  arg2 = (size_t)_swig_go_1;
  arg3 = *(unsigned char **)&_swig_go_2;
  arg4 = (size_t)_swig_go_3;
  arg5 = (unsigned int)_swig_go_4;
  arg6 = (unsigned int)_swig_go_5;

  result = (libbitcoin::consensus::verify_result_type)libbitcoin::consensus::verify_script((unsigned char const *)arg1,arg2,(unsigned char const *)arg3,arg4,arg5,arg6);
  _swig_go_result = (intgo)result;
  return _swig_go_result;
}


#ifdef __cplusplus
}
#endif

