/*
7. Elabore um algoritmo que implemente uma calculadora real: o usu�rio digita um n�mero, depois a 
opera��o (+, -, *, /), outro n�mero, outra opera��o, outro n�mero, e assim continua at� que ele digite 
enfim o sinal �=�, quando ent�o a calculadora mostra o resultado. Exemplos: 1 + 3 � 2 / 2 = 1; 4 � 2 / 1 + 
4 = 6. O algoritmo deve resolver a express�o na ordem de digita��o.  
*/
#include<iostream>
using namespace std;

int main() {
    double num, resultado;
    char operacao;
    bool continuar = true;
    bool primeira = true;

    cout << "Digite um numero: ";
    cin >> resultado;

    cout << "Expressao digitada: " << resultado;

    while (continuar) {
        cout << "\nDigite a operacao (+, -, *, /, =): ";
        cin >> operacao;

        if (operacao == '=') {
            continuar = false;
        } else {
            cout << "Digite outro numero: ";
            cin >> num;

            // Mostrar a express�o em tempo real
            cout << " " << operacao << " " << num;

            // Realizar a opera��o na ordem digitada
            if (operacao == '+') {
                resultado = resultado + num;
            } else if (operacao == '-') {
                resultado = resultado - num;
            } else if (operacao == '*') {
                resultado = resultado * num;
            } else if (operacao == '/') {
                if (num == 0) {
                    cout << "\nErro: divisao por zero!" << endl;
                    return 1;
                }
                resultado = resultado / num;
            } else {
                cout << "\nOperacao invalida!" << endl;
                return 1;
            }
        }
    }

    cout << " =";
    cout << "\nResultado final: " << resultado << endl;

    return 0;
}

