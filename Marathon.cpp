#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//jpa
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       int a,b,c,d,count;
       cin>>a>>b>>c>>d;
       count = 1;
       if(a>b) count++;
       if(a>c) count++;
       if(a>d) count++;
       cout<<(4-count)<<endl; 
    }
    

    return 0;
}
