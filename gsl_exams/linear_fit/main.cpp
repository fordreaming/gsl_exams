#include <stdio.h>
#include <gsl/gsl_fit.h>

int
main (void)
{
    int i, n = 4;
    double x[4] = {1, 2, 3, 4};
    double y[4] = {2, 4, 6, 8};
    double c0;
    double c1;
    double cov00;
    double cov01;
    double cov11;
    double sumsq;
    gsl_fit_linear(x, 1, y, 1, n, &c0, &c1, &cov00, &cov01, &cov11, &sumsq);
  return 0;
}
