#ifndef READER
#define READER
#include <rarray>
#include <netcdf>
#include <complex>
using namespace std;

struct ligo_signal
{
    rarray<complex<double>, 1> data;
    rarray<double, 1> time;
};

// Function that reads a netcdf simulated LIGO datafile and writes
// it to an rarray.
ligo_signal read_signal(char *path);

#endif // !READER
