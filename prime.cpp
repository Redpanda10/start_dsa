#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isprime = true;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime)
    {
        cout << "prime number!!!";
    }
    else
    {
        cout << "Not a prime number!!!";
    }
}