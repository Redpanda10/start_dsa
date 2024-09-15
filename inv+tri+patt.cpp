#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i >= j)
            {
                cout << " ";
            }
            else
            {
                cout << i + 1;
            }
        }
        cout << endl;
    }
}