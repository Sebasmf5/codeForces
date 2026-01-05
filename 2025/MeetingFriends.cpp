#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr(3);
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr.begin(), arr.end());
    cout<<(arr[1]-arr[0])+(arr[2]-arr[1]); 
    /*int a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a,b),c)-min(min(a,b),c); */
    return 0;
}
