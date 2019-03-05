#include "signal_FT.h"
#include "signal_power.h"
#include "signal_reader.h"
#include "correlator.h"

using namespace std;

int main()
{
    rarray<double, 1> F(2);
    rarray<double, 1> G(2);
    F[0] = 0;
    F[1] = 10;
    G.fill(2);

    double res = correlate(F,G);

    cout << res << endl;
}