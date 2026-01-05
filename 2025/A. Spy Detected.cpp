#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> brr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        brr = arr;
        sort(arr.begin(), arr.end());
        int target;
        if (arr[0] == arr[1])
        {
            target = arr[n - 1];
        }
        else target = arr[0];
        auto index = find(brr.begin(), brr.end(), target);
        cout << distance(brr.begin(), index)+1 << endl;
    }

    return 0;
}
