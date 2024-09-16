#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, binary = 0, pow = 1;
    cout << "Enter n: ";
    cin >> n;
    while (n > 0)
    {
        int remainder = n % 2;
        n = n / 2;
        binary = binary + remainder * pow;
        pow = pow * 10;
    }
    cout << binary;
}