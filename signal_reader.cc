#include "signal_reader.h"

rarray<complex<double>, 1> read_signal(char *path)
{
    netCDF::NcFile file(path, netCDF::NcFile::read);
    rarray<std::complex<double>, 1> f(file.getDim("nt").getSize());
    file.getVar("f").getVar(&f[0]);

    return f;
}

int main()
{
    rarray<complex<double>, 1> sig  = read_signal("gwdata/GWprediction.nc");

    cout << sig[0] << endl;
}