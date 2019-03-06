#ifndef READER
#define READER
#include <netcdf>
#include "signal.h"

// Function that reads a netcdf simulated LIGO datafile and writes it to an rarray.
// Parameters:
// path char array describing the path of the netcdf file to be read.
ligo_signal read_signal(std::string path);

std::string get_path(int i);

#endif // !READER
