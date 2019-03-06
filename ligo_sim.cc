#include "signal_FT.h"
#include "signal_power.h"
#include "signal_reader.h"
#include "correlator.h"

using namespace std;

int main()
{
    rarray<std::complex<double>, 1> F(2);
    std::complex<double> mycomplex(3.0, 4.0);
    F[0] = mycomplex;

    rarray<double, 1> res = power_spectrum(F);

    cout << "norm of " << F[0] << "is " << res[0] << endl;
}
