#include "signal_FT.h"

rarray<std::complex<double>, 1> signal_ft(ligo_signal sig)
{
    const int N = sig.data.size();
    rarray<std::complex<double>, 1> f = sig.data;
    rarray<std::complex<double>, 1> fhat(N);

    fftw_plan p = fftw_plan_dft_1d(N, (fftw_complex *)f.data(), (fftw_complex *)fhat.data(), FFTW_FORWARD, FFTW_ESTIMATE);

    fftw_execute(p);
    fftw_destroy_plan(p);

    return fhat;
}