/*
2. Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores 
pares existem no vetor e troque cada um desses elementos por 0.  Em seguida escreva o vetor final. 
*/
#include <iostream>
using namespace std;
int main(){
    //Criação de variáveis:
    int num[20], i, cont = 0;

    //Entrada de dados:
    for(i = 0; i < 20; i++){
        cout << "\n\tDigite 20 numeros: ";
        cin >> num[i];
        system("cls");
    }
    //Processamento de dados:
    for(i = 0; i < 20; i++){
        i++;
        cont++;
        num[i] = 0;
    }
    cout << "Vetor final: "; 

    for(i = 0; i < 20; i++){
        cout << " " <<num[i];
    }

    cout << "\n\tQuantidade de valores pares existentes: " << cont;
}