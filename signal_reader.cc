#include "signal_reader.h"

ligo_signal read_signal(char *path)
{
    ligo_signal sig;

    netCDF::NcFile file(path, netCDF::NcFile::read);
    rarray<std::complex<double>, 1> d(file.getDim("nt").getSize());
    rarray<double, 1> t(file.getDim("nt").getSize());
    file.getVar("f").getVar(&d[0]);
    file.getVar("t").getVar(&t[0]);
    sig.data = d;
    sig.time = t;

    return sig;
}

int main()
{
    ligo_signal sig = read_signal("gwdata/GWprediction.nc");

    cout << sig.data[0] << endl;
    cout << sig.time[0] << endl;
    cout << sig.time[1] << endl;
}