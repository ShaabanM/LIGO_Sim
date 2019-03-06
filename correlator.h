#ifndef CORR
#define CORR

#include <cblas.h>
#include <cmath>
#include <rarray>

// Function that takes in two power spectra F and G and generates the correlation coefficinet C_FG
// Parameters:
// F power spectrum F
// G power spectrum G
double correlate(rarray<double, 1> F, rarray<double, 1> G);

#endif // !CORR
