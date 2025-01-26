#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        vector<int> arr(m);
        for (int i = 0; i < m; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        bool cont =true;
        for (int i = 0; i <m-1; i++)
        {
            if(arr[i+1]-arr[i] > 1){
                cont = false;
                break;
            }

        }
        if(cont) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}