#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while (n>0)
    {
        long a,b; 
        cin>>a>>b;
        double dif = abs(a-b);
        int x = ceil(dif/10);
        cout<<x<<endl;
        n--;
    }
    
    return 0;
}

