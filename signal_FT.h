#ifndef FT
#define FT

#include <complex>
#include <rarray>
#include <fftw3.h>
#include <cmath>
#include "signal.h"

// Function to compute the DFT of a ligo signal
// Parameters:
// sig ligo signal to be fourier transformed.
rarray<std::complex<double>, 1> signal_ft(ligo_signal sig);

#endif // !FT
