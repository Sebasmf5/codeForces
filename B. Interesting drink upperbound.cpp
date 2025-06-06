#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

/*
Aunque esta es la forma manual, ya existe una funcion que se encarga de devolver el 
mayor número que es menor o igual a p con la función con upper_bound(),como parametros 
el arr, arr + tam
*/
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int d;
    cin>>d;
    for (int  i = 0; i < d; i++)
    {
        int q;
        cin>>q;
        int ans = upper_bound(arr, arr+n, q) - arr;
        cout<<ans<<endl;
    }

    return 0;
}  