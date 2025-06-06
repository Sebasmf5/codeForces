#include <iostream>
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string var = "Te amo mucho ";
    string tatis = "";

    getline(cin, tatis);

    if(tatis == "Me siento mal"){
        var = "Eres hermosaaaa ";
    }else if(tatis == "Te quiero mucho"){
        var = "Yo mass ";
    }else if(tatis == "Me envia una foto"){
        var = "Cosita divina ";
    }else if(tatis == "Existe (estudia, dibuja etc)"){
        var = "Por qué eres tan perfecta ";
    }
    else if(tatis == "Tu eres el mejor"){
        var = "Tuuu eres lo mejor ";
    }
    for (int i = 0; i < 500; i++)
    {
        cout<<var;
    }
    
    return 0;
}
