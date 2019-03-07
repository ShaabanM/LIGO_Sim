#include "sort_print.h"
#include "signal_reader.h"

// implementation of sort and print function
void sort_print(rarray<double, 1> arr)
{
    // array to store the coffs and sort them
    rarray<coff, 1> coffs(arr.size());

    for (size_t i = 0; i < arr.size(); i++)
    {
        coff temp;
        temp.i = i;
        temp.c = arr[i];
        coffs[i] = temp;
    }

    // sort and report the coffs
    std::sort(coffs.begin(), coffs.end(), compare);
    report(coffs);
}

// helper functions

// implementation of "greater" compare function for coff struct
bool compare(coff c1, coff c2)
{
    return c1.c > c2.c;
}

// implmentation of reporting the results method
void report(rarray<coff, 1> coffs)
{
    // Print the top 5 cooficents and the data sets they belong to
    cout << "The top 5 in order are:" << endl;
    for (size_t i = 0; i < 5; i++)
    {
        cout << i + 1 << ") Data set #" << coffs[i].i + 1 << " with C = " << coffs[i].c << endl;
    }
    // print the rest
    cout << "===========The rest============" << endl;
    for (size_t i = 5; i < coffs.size(); i++)
    {
        cout << i + 1 << ") Data set #" << coffs[i].i + 1 << " with C = " << coffs[i].c << endl;
    }
}