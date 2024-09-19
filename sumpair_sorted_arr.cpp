#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> ans;
    int target = 9;
    int i = 0;
    int j = vec.size();
    while (i < j)
    {
        int pairsum = vec[i] + vec[j];

        if (pairsum > target)
        {
            j--;
        }
        else if (pairsum < target)
        {
            i++;
        }
        else if (pairsum = target)
        {
            ans[0] = i;
            ans[1] = j;
        }
        else
        {
            cout << "No pair found";
        }
    }
    cout << ans[0];
    cout << ans[1];
    return 0;
}