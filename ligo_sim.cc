#include "signal_FT.h"
#include "signal_power.h"
#include "signal_reader.h"
#include "correlator.h"

using namespace std;

int main()
{
    int nd = 32;

    ligo_signal sig_p = read_signal("gwdata/GWprediction.nc");

    for (size_t i = 0; i < nd; i++)
    {

        std::string path = "gwdata/detection";
        path += std::to_string(i + 1);
        path += ".nc";

        ligo_signal sig = read_signal(path);
        double C = correlate(power_spectrum(signal_ft(sig_p)), power_spectrum(signal_ft(sig)));
        cout << C << endl;
    }
}
