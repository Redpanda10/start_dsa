#include <iostream>
using namespace std;
int main()
{
    int dumb = 1;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << dumb << " ";
            dumb++;
        }
        cout << endl;
    }
}