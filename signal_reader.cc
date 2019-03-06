#include "signal_reader.h"

// Implementation of the netcdf ligo signal reader function.
ligo_signal read_signal(std::string path)
{
    // open the netcdf file in read mode and store the content as rarrays
    netCDF::NcFile file(path, netCDF::NcFile::read);
    rarray<std::complex<double>, 1> d(file.getDim("nt").getSize());
    rarray<double, 1> t(file.getDim("nt").getSize());
    file.getVar("f").getVar(&d[0]);
    file.getVar("t").getVar(&t[0]);

    // store the rarrays in ligo signal struct
    ligo_signal sig;
    sig.data = d;
    sig.time = t;

    return sig;
}
