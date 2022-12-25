/* ilogb example */
#include <stdio.h> /* printf */
#include <math.h>  /* ilogb */

int main()
{
  double param;
  float result;

  param = 10;
  result = ilogb(param);
  printf("ilogb(%f) = %f\n", param, result);

  result = log2(param);
  printf("log2 (%f) = %f.\n", param, result);
  // The binary logarithm of x: log2x.
  // If x is negative, it causes a domain error:
  // If x is zero, it may cause a pole error

  result = logb(param);
  printf("logb (%f) = %f.\n", param, result);

  result = log1p(param);
  printf("log1p (%f) = %f.\n", param, result);
  // The natural logarithm of (1+x).
  // If x is less than -1, it causes a domain error.
  // If x is -1, it may cause a pole error

  result = log(param);
  printf("log (%f) = %f.\n", param, result);
  // Natural logarithm of x.
  // If x is negative, it causes a domain error.
  // If x is zero, it may cause a pole error

  return 0;
}