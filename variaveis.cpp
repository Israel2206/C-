#include <iostream>

using namespace std;

int main(){
    int vidas = 0; //10
    char letra = 'B'; // recebe "B"
    double decimal = 2.5; //2.5
    float decimal2 = 5.2; //precisão menor
    bool verdadeiro = true; //true or false
    string nome = "Breno"; //recebe "Bruno"

    //cin é para pegar entrada do teclado
    cout << "Digite o número de vidas: ";
    cin >> vidas;


    cout << vidas << endl;
    cout << letra << endl;
    cout << decimal << endl;
    cout << decimal2 << endl;
    cout << verdadeiro << endl;
    cout << nome << endl;

    return 0;
}