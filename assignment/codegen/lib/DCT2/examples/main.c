/*
 * File: main.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 28-Jun-2018 14:21:07
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "DCT2.h"
#include "main.h"
#include "DCT2_terminate.h"
#include "DCT2_initialize.h"

/* Function Declarations */
static void argInit_1x9_real_T(double result[9]);
static double argInit_real_T(void);
static void main_DCT2(void);

/* Function Definitions */

/*
 * Arguments    : double result[9]
 * Return Type  : void
 */
static void argInit_1x9_real_T(double result[9])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 9; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_DCT2(void)
{
  double dv0[9];
  double z[9];

  /* Initialize function 'DCT2' input arguments. */
  /* Initialize function input argument 'origin'. */
  /* Call the entry-point 'DCT2'. */
  argInit_1x9_real_T(dv0);
  DCT2(dv0, z);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  DCT2_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_DCT2();

  /* Terminate the application.
     You do not need to do this more than one time. */
  DCT2_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
