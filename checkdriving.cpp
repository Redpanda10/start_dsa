#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your age: ";
    cin >> a;
    if (a >= 18)
    {
        cout << "You are an eligible to get driving liscence.";
    }
    else
    {
        cout << "You are not eligible to get driving liscense";
    }
}