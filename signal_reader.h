#ifndef READER
#define READER
#include <rarray>
#include <netcdf>
#include <complex>
using namespace std;

// Function that reads a netcdf simulated LIGO datafile and writes
// it to an rarray.

rarray<complex<double>, 1> read_signal(char *path);

#endif // !READER
