#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr, arr+3);
        if(arr[0]+arr[1]==arr[2]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
