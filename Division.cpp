#include <iostream>

using namespace std;
/*For Division 1: 1900≤rating
For Division 2: 1600≤rating≤1899
For Division 3: 1400≤rating≤1599
For Division 4: rating≤1399  61 ms*/
int main(int argc, char const *argv[])
{
    int n, r, d;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>r;
        if(r >= 1900) d = 1;
        else if(r >= 1600 && r <= 1899) d = 2;
        else if (r >= 1400 && r <=1599) d = 3;
        else d = 4;;
        cout<<"Division "<<d<<endl;        
    }
    
    return 0;
}
