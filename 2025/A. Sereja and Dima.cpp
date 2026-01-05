#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int cards[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>cards[i];
    }
    int band = 0;
    int player1 = 0, player2 = 0;
    int left = 0, right = n-1;
    while (right>=left)
    {
        int points = 0;
        if(cards[left]>= cards[right]){
            points = cards[left];
            left++;
        }else{
            points = cards[right];
            right--;
        }
        if(band==0){
            player1 += points;
            band=1;
        }else{
            player2 += points;
            band=0;
        }
    }
    cout<<player1<<' '<<player2;
    
    return 0;
}

