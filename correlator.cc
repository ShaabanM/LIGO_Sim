#include "correlator.h"

// Implementation of the correlate function as defined in the assignment
// this implementation uses the blast dot product to compute the inner product
double correlate(rarray<double, 1> F, rarray<double, 1> G)
{

    // Compute the relevant inner products. 
    double FG = cblas_ddot(F.size(), F.data(), 1, G.data(), 1);
    double FF = cblas_ddot(F.size(), F.data(), 1, F.data(), 1);
    double GG = cblas_ddot(G.size(), G.data(), 1, G.data(), 1);

    // Compute the correlation coefficient 
    return FG / sqrt(FF * GG);
}
