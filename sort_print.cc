#include "sort_print.h"
#include "signal_reader.h"

struct coff
{
    int i;
    double C;
};

bool compare(coff c1, coff c2)
{
    return c1.C > c2.C;
}

void sort_print(rarray<double, 1> arr)
{
    rarray<coff, 1> coffs(arr.size());

    for (size_t i = 0; i < arr.size(); i++)
    {
        coff c;
        c.i = i;
        c.C = arr[i];
        coffs[i] = c;
    }

    std::sort(coffs.begin(), coffs.end(), compare);

    for (size_t i = 0; i < 5; i++)
    {
        std::string path = get_path(coffs[i].i);

        cout << path << " has C = " << coffs[i].C << endl;
    }
}
