#ifndef POW
#define POW

#include <../OpenBLAS/include/cblas.h>
#include <complex>
#include <cmath>
#include <rarray>

// Function to compute the power spectrum of a complex fourier transform 
// Parameters:
// ft complex rarray the fourier transform of a ligo signal
rarray<double, 1> power_spectrum(rarray<std::complex<double>, 1> ft);

// Helper Function to compute the power spectrum wave number components
// Parameters:
// fk complex rarray of wave number k 
double Fk(rarray<std::complex<double>, 1> fk);

#endif // !POW
