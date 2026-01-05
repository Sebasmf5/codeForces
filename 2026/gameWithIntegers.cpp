#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cases;
    int num;
    
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >>  num;
        if (num%3 == 0){
            cout << "Second"<<endl;
        }else {
            cout << "First"<<endl;
        }
       
    }
    
    return 0;
}
