#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j + i < 3; j++)
        {

            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}