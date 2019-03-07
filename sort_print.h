#ifndef SORTP
#define SORTP
#include <rarray>
#include <algorithm>
#include <iostream>
using namespace std;

// struct that stores both the coefficent and which data set it belongs to
struct coff
{
    int i;    // data set numeber - 1
    double c; // coefficent
};

// Function that will sort the produced coefficents in order and then print them out to cmd line
// Parameters:
// arr: the array to be sorted and printed
void sort_print(rarray<double, 1> arr);

// Helper function that compares two structs coffs to determine which one has a larger coefficent
// Parameters:
// c1,c2 Two coff structs to be compared.
bool compare(coff c1, coff c2);

// Helper function to report and print the sorted data
// Parameters
// coffs: and ordered list of coff structures descending from the largest c value
void report(rarray<coff, 1> coffs);

#endif // !SORTP
