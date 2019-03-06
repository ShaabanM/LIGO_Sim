#ifndef SIGNAL
#define SIGNAL

#include <rarray>
#include <complex>
#include <cblas.h>

// struct that will hold ligo signal data form netcdf files. data will hold the complex numbers and time will hold the times
struct ligo_signal
{
    rarray<std::complex<double>, 1> data;
    rarray<double, 1> time;
};

#endif