#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[]){
    int n, time;
    cin>>n>>time;
    int aux = time;
    int limit = 240;
    int resp = 0;
    for (int i = 1; i <= n; i++)
    {
        aux += 5*i;
        if(aux<=limit) {
             resp++;
        }else{
            break;
        }
       
    }
    cout<<resp;
    return 0;
}

