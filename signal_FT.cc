#include "signal_FT.h"

// Implementation of the signal fourier transform function
rarray<std::complex<double>, 1> signal_ft(ligo_signal sig)
{
    // Pereparing parameters for the plan
    const int N = sig.data.size();                // size of the fourier transform
    rarray<std::complex<double>, 1> f = sig.data; // the data to be transformed
    rarray<std::complex<double>, 1> fhat(N);      // where the transform will be stored

    // Compute the DFT 1d
    fftw_plan p = fftw_plan_dft_1d(N, (fftw_complex *)f.data(), (fftw_complex *)fhat.data(), FFTW_FORWARD, FFTW_ESTIMATE);
    fftw_execute(p);
    fftw_destroy_plan(p);

    return fhat;
}