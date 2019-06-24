/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

/* ---------------------------------------------------------------
 * Programmer(s): Auto-generated by swig.
 * ---------------------------------------------------------------
 * SUNDIALS Copyright Start
 * Copyright (c) 2002-2019, Lawrence Livermore National Security
 * and Southern Methodist University.
 * All rights reserved.
 *
 * See the top-level LICENSE and NOTICE files for details.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * SUNDIALS Copyright End
 * -------------------------------------------------------------*/

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

/* qualifier for exported *const* global data variables*/
#ifndef SWIGEXTERN
# ifdef __cplusplus
#   define SWIGEXTERN extern
# else
#   define SWIGEXTERN
# endif
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
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

/*  Errors in SWIG */
#define  SWIG_UnknownError    	   -1
#define  SWIG_IOError        	   -2
#define  SWIG_RuntimeError   	   -3
#define  SWIG_IndexError     	   -4
#define  SWIG_TypeError      	   -5
#define  SWIG_DivisionByZero 	   -6
#define  SWIG_OverflowError  	   -7
#define  SWIG_SyntaxError    	   -8
#define  SWIG_ValueError     	   -9
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12
#define  SWIG_NullReferenceError   -13




#include <assert.h>
#define SWIG_exception_impl(DECL, CODE, MSG, RETURNNULL) \
 { printf("In " DECL ": " MSG); assert(0); RETURNNULL; }


enum {
    SWIG_MEM_OWN = 0x01,
    SWIG_MEM_RVALUE = 0x02,
    SWIG_MEM_CONST = 0x04
};


#define SWIG_check_mutable(SWIG_CLASS_WRAPPER, TYPENAME, FNAME, FUNCNAME, RETURNNULL) \
    if ((SWIG_CLASS_WRAPPER).cmemflags & SWIG_MEM_CONST) { \
        SWIG_exception_impl(FUNCNAME, SWIG_TypeError, \
            "Cannot pass const " TYPENAME " (class " FNAME ") " \
            "as a mutable reference", \
            RETURNNULL); \
    }


#define SWIG_check_nonnull(SWIG_CLASS_WRAPPER, TYPENAME, FNAME, FUNCNAME, RETURNNULL) \
  if (!(SWIG_CLASS_WRAPPER).cptr) { \
    SWIG_exception_impl(FUNCNAME, SWIG_TypeError, \
                        "Cannot pass null " TYPENAME " (class " FNAME ") " \
                        "as a reference", RETURNNULL); \
  }


#define SWIG_check_mutable_nonnull(SWIG_CLASS_WRAPPER, TYPENAME, FNAME, FUNCNAME, RETURNNULL) \
    SWIG_check_nonnull(SWIG_CLASS_WRAPPER, TYPENAME, FNAME, FUNCNAME, RETURNNULL); \
    SWIG_check_mutable(SWIG_CLASS_WRAPPER, TYPENAME, FNAME, FUNCNAME, RETURNNULL);


#include <stdio.h>
#if defined(_MSC_VER) || defined(__BORLANDC__) || defined(_WATCOM)
# ifndef snprintf
#  define snprintf _snprintf
# endif
#endif


/* Support for the `contract` feature.
 *
 * Note that RETURNNULL is first because it's inserted via a 'Replaceall' in
 * the fortran.cxx file.
 */
#define SWIG_contract_assert(RETURNNULL, EXPR, MSG) \
 if (!(EXPR)) { SWIG_exception_impl("$decl", SWIG_ValueError, MSG, RETURNNULL); } 


#define SWIGVERSION 0x040000 
#define SWIG_VERSION SWIGVERSION


#define SWIG_as_voidptr(a) (void *)((const void *)(a)) 
#define SWIG_as_voidptrptr(a) ((void)SWIG_as_voidptr(*a),(void**)(a)) 


#include "arkode/arkode.h"
#include "arkode/arkode_bandpre.h"
#include "arkode/arkode_bbdpre.h"
#include "arkode/arkode_butcher.h"
#include "arkode/arkode_butcher_dirk.h"
#include "arkode/arkode_butcher_erk.h"
#include "arkode/arkode_ls.h"


typedef struct {
    void* cptr;
    int cmemflags;
} SwigClassWrapper;


SWIGINTERN SwigClassWrapper SwigClassWrapper_uninitialized() {
    SwigClassWrapper result;
    result.cptr = NULL;
    result.cmemflags = 0;
    return result;
}


#include <stdlib.h>
#ifdef _MSC_VER
# ifndef strtoull
#  define strtoull _strtoui64
# endif
# ifndef strtoll
#  define strtoll _strtoi64
# endif
#endif


#include <string.h>


SWIGINTERN void SWIG_assign(SwigClassWrapper* self, SwigClassWrapper other) {
  if (self->cptr == NULL) {
    /* LHS is unassigned */
    if (other.cmemflags & SWIG_MEM_RVALUE) {
      /* Capture pointer from RHS, clear 'moving' flag */
      self->cptr = other.cptr;
      self->cmemflags = other.cmemflags & (~SWIG_MEM_RVALUE);
    } else {
      /* Become a reference to the other object */
      self->cptr = other.cptr;
      self->cmemflags = other.cmemflags & (~SWIG_MEM_OWN);
    }
  } else if (other.cptr == NULL) {
    /* Replace LHS with a null pointer */
    free(self->cptr);
    *self = SwigClassWrapper_uninitialized();
  } else {
    if (self->cmemflags & SWIG_MEM_OWN) {
      free(self->cptr);
    }
    self->cptr = other.cptr;
    if (other.cmemflags & SWIG_MEM_RVALUE) {
      /* Capture RHS */
      self->cmemflags = other.cmemflags & ~SWIG_MEM_RVALUE;
    } else {
      /* Point to RHS */
      self->cmemflags = other.cmemflags & ~SWIG_MEM_OWN;
    }
  }
}

SWIGEXPORT int _wrap_FARKBandPrecInit(void *farg1, int64_t const *farg2, int64_t const *farg3, int64_t const *farg4) {
  int fresult ;
  void *arg1 = (void *) 0 ;
  sunindextype arg2 ;
  sunindextype arg3 ;
  sunindextype arg4 ;
  int result;
  
  arg1 = (void *)(farg1);
  arg2 = (sunindextype)(*farg2);
  arg3 = (sunindextype)(*farg3);
  arg4 = (sunindextype)(*farg4);
  result = (int)ARKBandPrecInit(arg1,arg2,arg3,arg4);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT int _wrap_FARKBandPrecGetWorkSpace(void *farg1, long *farg2, long *farg3) {
  int fresult ;
  void *arg1 = (void *) 0 ;
  long *arg2 = (long *) 0 ;
  long *arg3 = (long *) 0 ;
  int result;
  
  arg1 = (void *)(farg1);
  arg2 = (long *)(farg2);
  arg3 = (long *)(farg3);
  result = (int)ARKBandPrecGetWorkSpace(arg1,arg2,arg3);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT int _wrap_FARKBandPrecGetNumRhsEvals(void *farg1, long *farg2) {
  int fresult ;
  void *arg1 = (void *) 0 ;
  long *arg2 = (long *) 0 ;
  int result;
  
  arg1 = (void *)(farg1);
  arg2 = (long *)(farg2);
  result = (int)ARKBandPrecGetNumRhsEvals(arg1,arg2);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT int _wrap_FARKBBDPrecInit(void *farg1, int64_t const *farg2, int64_t const *farg3, int64_t const *farg4, int64_t const *farg5, int64_t const *farg6, double const *farg7, ARKLocalFn farg8, ARKCommFn farg9) {
  int fresult ;
  void *arg1 = (void *) 0 ;
  sunindextype arg2 ;
  sunindextype arg3 ;
  sunindextype arg4 ;
  sunindextype arg5 ;
  sunindextype arg6 ;
  realtype arg7 ;
  ARKLocalFn arg8 = (ARKLocalFn) 0 ;
  ARKCommFn arg9 = (ARKCommFn) 0 ;
  int result;
  
  arg1 = (void *)(farg1);
  arg2 = (sunindextype)(*farg2);
  arg3 = (sunindextype)(*farg3);
  arg4 = (sunindextype)(*farg4);
  arg5 = (sunindextype)(*farg5);
  arg6 = (sunindextype)(*farg6);
  arg7 = (realtype)(*farg7);
  arg8 = (ARKLocalFn)(farg8);
  arg9 = (ARKCommFn)(farg9);
  result = (int)ARKBBDPrecInit(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT int _wrap_FARKBBDPrecReInit(void *farg1, int64_t const *farg2, int64_t const *farg3, double const *farg4) {
  int fresult ;
  void *arg1 = (void *) 0 ;
  sunindextype arg2 ;
  sunindextype arg3 ;
  realtype arg4 ;
  int result;
  
  arg1 = (void *)(farg1);
  arg2 = (sunindextype)(*farg2);
  arg3 = (sunindextype)(*farg3);
  arg4 = (realtype)(*farg4);
  result = (int)ARKBBDPrecReInit(arg1,arg2,arg3,arg4);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT int _wrap_FARKBBDPrecGetWorkSpace(void *farg1, long *farg2, long *farg3) {
  int fresult ;
  void *arg1 = (void *) 0 ;
  long *arg2 = (long *) 0 ;
  long *arg3 = (long *) 0 ;
  int result;
  
  arg1 = (void *)(farg1);
  arg2 = (long *)(farg2);
  arg3 = (long *)(farg3);
  result = (int)ARKBBDPrecGetWorkSpace(arg1,arg2,arg3);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT int _wrap_FARKBBDPrecGetNumGfnEvals(void *farg1, long *farg2) {
  int fresult ;
  void *arg1 = (void *) 0 ;
  long *arg2 = (long *) 0 ;
  int result;
  
  arg1 = (void *)(farg1);
  arg2 = (long *)(farg2);
  result = (int)ARKBBDPrecGetNumGfnEvals(arg1,arg2);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT void _wrap_ARKodeButcherTable_q_set(SwigClassWrapper const *farg1, int const *farg2) {
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  int arg2 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::q", return );
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  arg2 = (int)(*farg2);
  if (arg1) (arg1)->q = arg2;
}


SWIGEXPORT int _wrap_ARKodeButcherTable_q_get(SwigClassWrapper const *farg1) {
  int fresult ;
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  int result;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::q", return 0);
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  result = (int) ((arg1)->q);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT void _wrap_ARKodeButcherTable_p_set(SwigClassWrapper const *farg1, int const *farg2) {
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  int arg2 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::p", return );
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  arg2 = (int)(*farg2);
  if (arg1) (arg1)->p = arg2;
}


SWIGEXPORT int _wrap_ARKodeButcherTable_p_get(SwigClassWrapper const *farg1) {
  int fresult ;
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  int result;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::p", return 0);
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  result = (int) ((arg1)->p);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT void _wrap_ARKodeButcherTable_stages_set(SwigClassWrapper const *farg1, int const *farg2) {
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  int arg2 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::stages", return );
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  arg2 = (int)(*farg2);
  if (arg1) (arg1)->stages = arg2;
}


SWIGEXPORT int _wrap_ARKodeButcherTable_stages_get(SwigClassWrapper const *farg1) {
  int fresult ;
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  int result;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::stages", return 0);
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  result = (int) ((arg1)->stages);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT void _wrap_ARKodeButcherTable_A_set(SwigClassWrapper const *farg1, void *farg2) {
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  realtype **arg2 = (realtype **) 0 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::A", return );
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  arg2 = (realtype **)(farg2);
  if (arg1) (arg1)->A = arg2;
}


SWIGEXPORT void * _wrap_ARKodeButcherTable_A_get(SwigClassWrapper const *farg1) {
  void * fresult ;
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  realtype **result = 0 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::A", return 0);
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  result = (realtype **) ((arg1)->A);
  fresult = result;
  return fresult;
}


SWIGEXPORT void _wrap_ARKodeButcherTable_c_set(SwigClassWrapper const *farg1, double *farg2) {
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  realtype *arg2 = (realtype *) 0 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::c", return );
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  arg2 = (realtype *)(farg2);
  if (arg1) (arg1)->c = arg2;
}


SWIGEXPORT double * _wrap_ARKodeButcherTable_c_get(SwigClassWrapper const *farg1) {
  double * fresult ;
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  realtype *result = 0 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::c", return 0);
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  result = (realtype *) ((arg1)->c);
  fresult = result;
  return fresult;
}


SWIGEXPORT void _wrap_ARKodeButcherTable_b_set(SwigClassWrapper const *farg1, double *farg2) {
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  realtype *arg2 = (realtype *) 0 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::b", return );
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  arg2 = (realtype *)(farg2);
  if (arg1) (arg1)->b = arg2;
}


SWIGEXPORT double * _wrap_ARKodeButcherTable_b_get(SwigClassWrapper const *farg1) {
  double * fresult ;
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  realtype *result = 0 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::b", return 0);
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  result = (realtype *) ((arg1)->b);
  fresult = result;
  return fresult;
}


SWIGEXPORT void _wrap_ARKodeButcherTable_d_set(SwigClassWrapper const *farg1, double *farg2) {
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  realtype *arg2 = (realtype *) 0 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::d", return );
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  arg2 = (realtype *)(farg2);
  if (arg1) (arg1)->d = arg2;
}


SWIGEXPORT double * _wrap_ARKodeButcherTable_d_get(SwigClassWrapper const *farg1) {
  double * fresult ;
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  realtype *result = 0 ;
  
  SWIG_check_mutable_nonnull(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::d", return 0);
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  result = (realtype *) ((arg1)->d);
  fresult = result;
  return fresult;
}


SWIGEXPORT SwigClassWrapper _wrap_new_ARKodeButcherTable() {
  SwigClassWrapper fresult ;
  struct ARKodeButcherTableMem *result = 0 ;
  
  result = (struct ARKodeButcherTableMem *)calloc(1, sizeof(struct ARKodeButcherTableMem));
  fresult.cptr = result;
  fresult.cmemflags = SWIG_MEM_RVALUE | (1 ? SWIG_MEM_OWN : 0);
  return fresult;
}


SWIGEXPORT void _wrap_delete_ARKodeButcherTable(SwigClassWrapper *farg1) {
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  
  SWIG_check_mutable(*farg1, "struct ARKodeButcherTableMem *", "ARKodeButcherTable", "ARKodeButcherTableMem::~ARKodeButcherTableMem()", return );
  arg1 = (struct ARKodeButcherTableMem *)(farg1->cptr);
  free((char *) arg1);
}


SWIGEXPORT void _wrap_ARKodeButcherTable_op_assign__(SwigClassWrapper *farg1, SwigClassWrapper const *farg2) {
  struct ARKodeButcherTableMem *arg1 = (struct ARKodeButcherTableMem *) 0 ;
  struct ARKodeButcherTableMem *arg2 = 0 ;
  
  (void)sizeof(arg1);
  (void)sizeof(arg2);
  SWIG_assign(farg1, *farg2);
  
}


SWIGEXPORT SwigClassWrapper _wrap_FARKodeButcherTable_Alloc(int const *farg1, int const *farg2) {
  SwigClassWrapper fresult ;
  int arg1 ;
  int arg2 ;
  ARKodeButcherTable result;
  
  arg1 = (int)(*farg1);
  arg2 = (int)(*farg2);
  result = (ARKodeButcherTable)ARKodeButcherTable_Alloc(arg1,arg2);
  fresult.cptr = result;
  fresult.cmemflags = SWIG_MEM_RVALUE | (0 ? SWIG_MEM_OWN : 0);
  return fresult;
}


SWIGEXPORT SwigClassWrapper _wrap_FARKodeButcherTable_Create(int const *farg1, int const *farg2, int const *farg3, double *farg4, double *farg5, double *farg6, double *farg7) {
  SwigClassWrapper fresult ;
  int arg1 ;
  int arg2 ;
  int arg3 ;
  realtype *arg4 = (realtype *) 0 ;
  realtype *arg5 = (realtype *) 0 ;
  realtype *arg6 = (realtype *) 0 ;
  realtype *arg7 = (realtype *) 0 ;
  ARKodeButcherTable result;
  
  arg1 = (int)(*farg1);
  arg2 = (int)(*farg2);
  arg3 = (int)(*farg3);
  arg4 = (realtype *)(farg4);
  arg5 = (realtype *)(farg5);
  arg6 = (realtype *)(farg6);
  arg7 = (realtype *)(farg7);
  result = (ARKodeButcherTable)ARKodeButcherTable_Create(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
  fresult.cptr = result;
  fresult.cmemflags = SWIG_MEM_RVALUE | (0 ? SWIG_MEM_OWN : 0);
  return fresult;
}


SWIGEXPORT SwigClassWrapper _wrap_FARKodeButcherTable_Copy(SwigClassWrapper const *farg1) {
  SwigClassWrapper fresult ;
  ARKodeButcherTable arg1 = (ARKodeButcherTable) 0 ;
  ARKodeButcherTable result;
  
  SWIG_check_mutable(*farg1, "ARKodeButcherTable", "ARKodeButcherTable", "ARKodeButcherTable_Copy(ARKodeButcherTable)", return SwigClassWrapper_uninitialized());
  arg1 = (ARKodeButcherTable)(farg1->cptr);
  result = (ARKodeButcherTable)ARKodeButcherTable_Copy(arg1);
  fresult.cptr = result;
  fresult.cmemflags = SWIG_MEM_RVALUE | (0 ? SWIG_MEM_OWN : 0);
  return fresult;
}


SWIGEXPORT void _wrap_FARKodeButcherTable_Space(SwigClassWrapper const *farg1, int64_t *farg2, int64_t *farg3) {
  ARKodeButcherTable arg1 = (ARKodeButcherTable) 0 ;
  sunindextype *arg2 = (sunindextype *) 0 ;
  sunindextype *arg3 = (sunindextype *) 0 ;
  
  SWIG_check_mutable(*farg1, "ARKodeButcherTable", "ARKodeButcherTable", "ARKodeButcherTable_Space(ARKodeButcherTable,sunindextype *,sunindextype *)", return );
  arg1 = (ARKodeButcherTable)(farg1->cptr);
  arg2 = (sunindextype *)(farg2);
  arg3 = (sunindextype *)(farg3);
  ARKodeButcherTable_Space(arg1,arg2,arg3);
}


SWIGEXPORT void _wrap_FARKodeButcherTable_Free(SwigClassWrapper const *farg1) {
  ARKodeButcherTable arg1 = (ARKodeButcherTable) 0 ;
  
  SWIG_check_mutable(*farg1, "ARKodeButcherTable", "ARKodeButcherTable", "ARKodeButcherTable_Free(ARKodeButcherTable)", return );
  arg1 = (ARKodeButcherTable)(farg1->cptr);
  ARKodeButcherTable_Free(arg1);
}


SWIGEXPORT void _wrap_FARKodeButcherTable_Write(SwigClassWrapper const *farg1, void *farg2) {
  ARKodeButcherTable arg1 = (ARKodeButcherTable) 0 ;
  FILE *arg2 = (FILE *) 0 ;
  
  SWIG_check_mutable(*farg1, "ARKodeButcherTable", "ARKodeButcherTable", "ARKodeButcherTable_Write(ARKodeButcherTable,FILE *)", return );
  arg1 = (ARKodeButcherTable)(farg1->cptr);
  arg2 = (FILE *)(farg2);
  ARKodeButcherTable_Write(arg1,arg2);
}


SWIGEXPORT int _wrap_FARKodeButcherTable_CheckOrder(SwigClassWrapper const *farg1, int *farg2, int *farg3, void *farg4) {
  int fresult ;
  ARKodeButcherTable arg1 = (ARKodeButcherTable) 0 ;
  int *arg2 = (int *) 0 ;
  int *arg3 = (int *) 0 ;
  FILE *arg4 = (FILE *) 0 ;
  int result;
  
  SWIG_check_mutable(*farg1, "ARKodeButcherTable", "ARKodeButcherTable", "ARKodeButcherTable_CheckOrder(ARKodeButcherTable,int *,int *,FILE *)", return 0);
  arg1 = (ARKodeButcherTable)(farg1->cptr);
  arg2 = (int *)(farg2);
  arg3 = (int *)(farg3);
  arg4 = (FILE *)(farg4);
  result = (int)ARKodeButcherTable_CheckOrder(arg1,arg2,arg3,arg4);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT int _wrap_FARKodeButcherTable_CheckARKOrder(SwigClassWrapper const *farg1, SwigClassWrapper const *farg2, int *farg3, int *farg4, void *farg5) {
  int fresult ;
  ARKodeButcherTable arg1 = (ARKodeButcherTable) 0 ;
  ARKodeButcherTable arg2 = (ARKodeButcherTable) 0 ;
  int *arg3 = (int *) 0 ;
  int *arg4 = (int *) 0 ;
  FILE *arg5 = (FILE *) 0 ;
  int result;
  
  SWIG_check_mutable(*farg1, "ARKodeButcherTable", "ARKodeButcherTable", "ARKodeButcherTable_CheckARKOrder(ARKodeButcherTable,ARKodeButcherTable,int *,int *,FILE *)", return 0);
  arg1 = (ARKodeButcherTable)(farg1->cptr);
  SWIG_check_mutable(*farg2, "ARKodeButcherTable", "ARKodeButcherTable", "ARKodeButcherTable_CheckARKOrder(ARKodeButcherTable,ARKodeButcherTable,int *,int *,FILE *)", return 0);
  arg2 = (ARKodeButcherTable)(farg2->cptr);
  arg3 = (int *)(farg3);
  arg4 = (int *)(farg4);
  arg5 = (FILE *)(farg5);
  result = (int)ARKodeButcherTable_CheckARKOrder(arg1,arg2,arg3,arg4,arg5);
  fresult = (int)(result);
  return fresult;
}


SWIGEXPORT SwigClassWrapper _wrap_FARKodeButcherTable_LoadDIRK(int const *farg1) {
  SwigClassWrapper fresult ;
  int arg1 ;
  ARKodeButcherTable result;
  
  arg1 = (int)(*farg1);
  result = (ARKodeButcherTable)ARKodeButcherTable_LoadDIRK(arg1);
  fresult.cptr = result;
  fresult.cmemflags = SWIG_MEM_RVALUE | (0 ? SWIG_MEM_OWN : 0);
  return fresult;
}


SWIGEXPORT SwigClassWrapper _wrap_FARKodeButcherTable_LoadERK(int const *farg1) {
  SwigClassWrapper fresult ;
  int arg1 ;
  ARKodeButcherTable result;
  
  arg1 = (int)(*farg1);
  result = (ARKodeButcherTable)ARKodeButcherTable_LoadERK(arg1);
  fresult.cptr = result;
  fresult.cmemflags = SWIG_MEM_RVALUE | (0 ? SWIG_MEM_OWN : 0);
  return fresult;
}



