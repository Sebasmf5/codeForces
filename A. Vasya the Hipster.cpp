#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int r,b;
    cin>>r>>b;
    int dias = min(r,b);
    int dif = abs(r-b);
    int mismo = dif/2;
    cout<<dias<<" "<<mismo;
    return 0;
}
