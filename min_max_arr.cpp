#include <iostream>
using namespace std;
int main()
{

    int a[5] = {1, 3, 7, 5, 4};
    int small = a[1];
    int index = 1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
            index = i;
        }
    }
    cout << "smallest: " << small << "  index: " << index;
}