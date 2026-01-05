#include <iostream>
//46 ms	0 KB
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a,b,c;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        (a+b) == c ? cout<<"+" : cout<<"-";
        cout<<endl;
    }
    
    return 0;
}
