#include <iostream>
using namespace std;
int main()
{
    string a;
    int j = 0;
    cout << "Enter a word: ";
    cin >> a[0];
    cout << j;

    for (int i = 0; i <= sizeof(a); i++)
    {
        if (a[i] >= 'a' || a[i] <= 'z')
        {
            j++;
            cout << j;
                }
        else if (a[i] >= 'A' || a[i] <= 'Z')
        {
            j = j + 2;
            cout << j;
        }
    }
    cout << j;
    if (j == sizeof(a))
    {
        cout << "The word is a lowercase letter.";
    }
    else if (j == (2 * sizeof(a)))
    {
        cout << "The word is a lowercase letter.";
    }
    else
    {
        cout << "The word is a mixed case letter";
    }
}