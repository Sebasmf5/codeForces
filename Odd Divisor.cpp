#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    long long number;
    cin>>n;
    while(n>0){
        cin>>number;
        long long aux = number;
        while (aux%2 == 0)
        {
            aux /= 2;
        }
        if(aux != 1) cout<<"YES";
        else cout <<"NO";
        cout<<endl;    
        n--;    
    }
    return 0;
}
