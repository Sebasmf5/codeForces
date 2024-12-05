#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    //calcular litros disponibles
    int litros = k*l;

    //calcular litros por brindis
    int litro_brindis = litros / nl;

    //calcular rodajas de lima
    int rodajas = c*d;

    //calcular gramos por brindis
    int gramos_brindis = p/np;

    int resp = (int)(min(min(litro_brindis, rodajas),gramos_brindis)/n);
    cout<<resp;
    
    return 0;
}
