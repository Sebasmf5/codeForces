#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

/*
Aunque esta es la forma manual, ya existe una funcion que se encarga de devolver el 
mayor número que es menor o igual a p con la función con upper_bound()
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
        int r, l, p;
        cin>>p;
        r = n-1;
        l = 0;
        int mitad = n;
        int resp = -1;
        while (l<=r)
        {
          mitad = (r+l)/2;
          if(arr[mitad] <= p){
            l = mitad + 1;
            resp = mitad; 
          }else{
            r = mitad - 1;
          }  
        }
        resp == -1 ? cout<<0<<endl : cout<<resp+1<<endl;
    }

    return 0;
}  