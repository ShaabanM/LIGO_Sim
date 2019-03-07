#ifndef SORTP
#define SORTP
#include <rarray>
#include <algorithm>
#include <iostream>
using namespace std;

struct coff
{
    int i;
    double c;
};

void sort_print(rarray<double, 1> arr);

bool compare(coff c1, coff c2);

void report(rarray<coff, 1> coffs);

#endif // !SORTP
