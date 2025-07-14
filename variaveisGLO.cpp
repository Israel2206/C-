#include <iostream>
using namespace std;

int n1,n2; //Variáveis Globais

int main(){

    //Operadores Matemáticos: + - / * % 

    int n3,n4; //variáveis Locais
    
    int res;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res=(n1+n2+n3+n4)-10;

    cout << "Soma de todas as variáveis: "<<res<<endl;

    return 0;
}