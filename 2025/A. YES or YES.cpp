#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    string yes = "YES";
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string cadena;
        cin>>cadena;
        transform(cadena.begin(), cadena.end(), cadena.begin(), ::toupper);
        cout<<(cadena == yes? "YES":"NO")<<endl;
    }
    
    return 0;
}
