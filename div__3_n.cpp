#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter the value of n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "sum is: " << sum;
}