#include <iostream>
using namespace std;
int main()
{
    int a[6] = {1, 2, 5, 8, 9, 2};
    cout << "array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int i = 0;
    while (i < 5 - i)
    {
        swap(a[i], a[5 - i]);
        i++;
    }
    cout << "\nSorted array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}