#include <iostream>

using namespace std;

bool potenciaDeDos(long long n){
    return (n & (n -1)) == 0; //ejemplo 1000 & 0111 = 0000 , da cero cuando n es una potencia de 2
}
int main(int argc, char const *argv[])
{
    int n;
    long long number;
    cin>>n;
    while(n--){
        cin>>number;
        if(potenciaDeDos(number))cout<<"NO"<<endl;
        else cout<<"YES"<<endl; 
    }
    return 0;
}
