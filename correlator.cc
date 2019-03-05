
#include "correlator.h"

double correlate(rarray<double, 1> F, rarray<double, 1> G)
{
    double FG = cblas_ddot(F.size(), F.data(), 1, G.data(), 1);
    double FF = cblas_ddot(F.size(), F.data(), 1, F.data(), 1);
    double GG = cblas_ddot(G.size(), G.data(), 1, G.data(), 1);

    return FG / sqrt(FF * GG);
}
