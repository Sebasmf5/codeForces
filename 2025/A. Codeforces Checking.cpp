#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector <char> arr = {'c','o','d','e','f','o','r','c','e','s'};
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        char t;
        cin>>t;
        auto it = find(arr.begin(), arr.end(), t);
        if(it == arr.end()) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}
