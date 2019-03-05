#ifndef READER
#define READER
#include <rarray>
#include <netcdf>
#include <complex>

// struct that will hold ligo signal data form netcdf files. data will hold the complex numbers and time will hold the times
struct ligo_signal
{
    rarray<std::complex<double>, 1> data;
    rarray<double, 1> time;
};

// Function that reads a netcdf simulated LIGO datafile and writes
// it to an rarray.
//
// Parameters:
// path char array describing the path of the netcdf file to be read.
ligo_signal read_signal(char *path);

#endif // !READER
