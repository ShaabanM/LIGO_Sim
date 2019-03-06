#ifndef POW
#define POW

#include <cblas.h>
#include <complex>
#include <cmath>
#include <rarray>

// Function to compute the power spectrum of a complex fourier transform
// Parameters:
// ft complex rarray the fourier transform of a ligo signal
rarray<double, 1> power_spectrum(rarray<std::complex<double>, 1> ft);

#endif // !POW
