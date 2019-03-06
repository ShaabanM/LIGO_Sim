#include "sort_print.h"
#include "signal_reader.h"

void sort_print(rarray<double, 1> arr)
{

    std::sort(arr.begin(), arr.end(), std::greater<double>());


    for (size_t i = 0; i < 5; i++)
    {
        std::string path = get_path(ind[i]);

        cout << path << " has C = " << arr[i] << endl;
    }
}