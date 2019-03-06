#include "signal_power.h"

// Implementation of function that calculates the power spectrum of a DFT
rarray<double, 1> power_spectrum(rarray<std::complex<double>, 1> ft)
{
    // Instantiate output array
    rarray<double, 1> F(ft.size());

    // fill the array with the norm of each entry
    for (size_t i = 0; i < ft.size(); i++)
    {
        F[i] = std::norm(ft[i]);
    }

    return F;
}


