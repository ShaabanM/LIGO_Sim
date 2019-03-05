#include "signal_reader.h"

rarray<complex<double>, 1> read_signal(char *path)
{
    netCDF::NcFile file(path, netCDF::NcFile::read);
    rarray<std::complex<double>, 1> f(file.getDim("nt").getSize());
    file.getVar("f").getVar(&f[0]);
}