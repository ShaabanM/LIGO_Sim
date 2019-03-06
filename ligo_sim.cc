#include "signal_FT.h"
#include "signal_power.h"
#include "signal_reader.h"
#include "correlator.h"
#include "sort_print"

using namespace std;

int main()
{
    int nd = 32;

    ligo_signal sig_p = read_signal("gwdata/GWprediction.nc");
    std::string path;
    rarray<double, 1> Cs(nd);

    for (size_t i = 0; i < nd; i++)
    {
        if (i < 9)
        {
            path = "gwdata/detection0";
            path += std::to_string(i + 1);
            path += ".nc";
        }
        else
        {
            path = "gwdata/detection";
            path += std::to_string(i + 1);
            path += ".nc";
        }

        ligo_signal sig = read_signal(path);
        double C = correlate(power_spectrum(signal_ft(sig_p)), power_spectrum(signal_ft(sig)));
        Cs[i] = C;
    }

    sort_print(Cs);
}
