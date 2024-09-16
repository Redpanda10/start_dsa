#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter the number whose factorial you want: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    cout << "factorial : " << fact;
}