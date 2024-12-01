#include <iostream>
using namespace std;

int main() {
    //Variável para armazenar a string

    //Variable to store the string
    string input;

    // Entrada da string via teclado

    // String input via keyboard
    cout << "Enter a string: ";
    getline(cin, input); 

    // Inicialização

    // Initialization
    int length = 0;

    // Loop através de cada caracter

    // Loop through each character
    while (input[length] != '\0') {
        length++; // Incremento de cada caracter. Increment of each character
    }

    // Saída na tela. Output in the screen.
    cout << "The length of the string is: " << length << endl;

    return 0;
}
