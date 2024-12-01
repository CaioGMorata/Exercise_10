#include <iostream>
using namespace std;

int main() {
    //Variável para armazenar a string
    string input;

    // Entrada da string via teclado
    cout << "Enter a string: ";
    getline(cin, input); 

    // Inicialização
    int length = 0;

    // Loop através de cada caracter
    while (input[length] != '\0') {
        length++; // Incremento de cada caracter
    }

    // Saída na tela
    cout << "The length of the string is: " << length << endl;

    return 0;
}
