/*
 * File: DCT2.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 28-Jun-2018 14:21:07
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "DCT2.h"

/* Function Definitions */

/*
 * Arguments    : const double origin[9]
 *                double z[9]
 * Return Type  : void
 */
void DCT2(const double origin[9], double z[9])
{
  int v;
  double sum;
  int j;
  double b_v;

  /*  DCT2 naive implementation */
  for (v = 0; v < 9; v++) {
    /*  Start calculating a new entry of res. */
    sum = 0.0;
    for (j = 0; j < 9; j++) {
      sum += cos((double)(((j << 1) + 1) * v) * 3.1415926535897931 / 6.0) *
        origin[j];
    }

    if (v == 0) {
      b_v = 0.70710678118654757;
    } else {
      b_v = 1.0;
    }

    sum *= 1.4142135623730951 * b_v / 3.0;
    z[v] = sum;
  }
}

/*
 * File trailer for DCT2.c
 *
 * [EOF]
 */
