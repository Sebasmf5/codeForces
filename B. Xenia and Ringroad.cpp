#include <iostream>
/*
4 3
3 2 3 */
using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    long long time = 0;
    int posicion = 1;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int h;
        cin>>h;
        if(posicion<h){
            time += h-posicion;
        }else if (posicion>h){
            time += h + (n - posicion);
        }
        posicion = h;
    }
    cout<<time;

    return 0;
}
