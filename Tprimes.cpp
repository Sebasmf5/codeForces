#include <iostream>
#include <math.h>
using namespace std;

const int MAX = 1000000;
int arr[MAX] = {0};


void calcularPrimo(){
    arr[0] = arr[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        if(arr[i] == 0){
            for (int j=2; i*j<MAX; j++) //multiplos de los primos
            {
                arr[j*i] = 1; //número no primo
            }
        }
    }
}

int comprobarRaiz(long long n) {
    long long raiz = sqrt(n);
    return (raiz * raiz == n) ? 1 : 0;
}


int main(int argc, char const *argv[]){
    long n;
    cin >> n;
    calcularPrimo();
    while (n > 0) {
        long long  a;
        cin >> a;
        if (a == 4) cout << "YES" << endl;
        else if (a % 2 == 0) cout << "NO" << endl; 
        else if (comprobarRaiz(a) == 1 && arr[(int)sqrt(a)] == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        n--;
    }
    return 0;
}



