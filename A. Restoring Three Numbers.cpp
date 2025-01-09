#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr(4); 
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr.begin(), arr.end());
    cout<<arr[3]-arr[1]<<" "<<arr[3]-arr[2]<<" "<<arr[3]-arr[0];
    return 0;
}
