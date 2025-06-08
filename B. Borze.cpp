#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    
    string cadena;
    cin>>cadena;
    
    int tam = cadena.length();
    int j, i;
    i=0;
    j= tam;
    while(j>0){
        if(cadena[i]=='.'){
            cout<<0;
            i++;
        }else if(cadena[i+1] == '.'){
            cout<<1;
            i+=2;
        }else{
            cout<<2;
            i+=2;
        }
        j = tam - i;
    }
    
    return 0;
}