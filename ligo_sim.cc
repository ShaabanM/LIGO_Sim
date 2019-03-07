#include "signal_FT.h"
#include "signal_power.h"
#include "signal_reader.h"
#include "correlator.h"
#include "sort_print.h"

using namespace std;

int main()
{
    // number of detections to be read
    int nd = 32;

    // array for storing the calculated coefficients
    rarray<double, 1> Cs(nd);

    // read the netcdf data
    ligo_signal sig_p = read_signal("gwdata/GWprediction.nc");
    for (size_t i = 0; i < nd; i++)
    {
        std::string path = get_path(i);
        ligo_signal sig = read_signal(path);

        //compute the correlations and store them in the correlations array
        double C = correlate(power_spectrum(signal_ft(sig_p)), power_spectrum(signal_ft(sig)));

        Cs[i] = C;
    }

    // sort the results array and print the 5 data sets with heighest correlation to the prediction
    sort_print(Cs);
}
