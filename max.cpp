#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "\nEnter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    if (a > b)
    {
        cout << "\n"
             << a << " is greater than " << b;
    }
    else
        cout << "\n"
             << b << "is greater than" << a;
}