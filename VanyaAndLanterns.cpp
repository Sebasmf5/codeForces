#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int f, l;
    cin>>f>>l;
    int arr[f];
    
    //posiciones de las farolas
    for (int i = 0; i < f; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+f);
    
    //buscar la mayor distancia entre faroles
    double m = 0.0;
    for (int i = 0; i < f-1; i++)
    {
        double a = arr[i+1]-arr[i];
        if(a>m){
            m = a; 
        }
    }

    double resp = max(max((double)arr[0], m/2.0), (double)l - arr[f-1]);
    cout << fixed << setprecision(10) << resp << endl;
    return 0;
}
