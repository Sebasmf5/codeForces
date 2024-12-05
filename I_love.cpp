#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n, mayor, menor;
    cin>>n;
    cin>>mayor;
    menor = mayor;
    int cont = 0;
    n--;
    while (n>0)
    {
        int a;
        cin>>a;
        if(a > mayor) {
            cont++;
            mayor = a;
        }else if(a < menor){
            cont++;
            menor = a;
        }
        n--;
    }
    cout<<cont;
    return 0;
}
