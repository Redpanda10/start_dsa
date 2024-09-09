#include <iostream>
using namespace std;
int main()
{
    double p, t, r;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "\nEnter the time period: ";
    cin >> t;
    cout << "\nEnter the rate: ";
    cin >> r;
    cout << "\nSimple Interest = " << (p * t * r) / 100 << endl;
}