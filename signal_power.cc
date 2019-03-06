#include "signal_power.h"

rarray<double, 1> power_spectrum(rarray<std::complex<double>, 1> ft)
{
    rarray<double, 1> F(ft.size());

    for (size_t i = 0; i < ft.size(); i++)
    {
        F[i] = std::norm(ft[i]);
    }

    return F;
}
