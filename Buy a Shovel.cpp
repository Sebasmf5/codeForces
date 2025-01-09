#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int k, r;
    cin>>k>>r;
    int a = 2; 
    int aux = k;
    while(aux%10 != r && aux%10 != 0){
        aux=k*a;
        a++;
    }
    cout<<a-1;
    return 0;
}
