#include <iostream>
using namespace std;
int main()
{
    int bin, dec = 0, pow = 1;
    cout << "Enter a binary number: ";
    cin >> bin;
    while (bin)
    {

        int rem = bin % 10;
        dec = dec + rem * pow;
        pow = pow * 2;
        bin = bin / 10;
    }
    cout << dec;
}