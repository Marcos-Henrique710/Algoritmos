/*
2. Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. Conte quantos valores 
da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes de A 
(quando for igual a A, insira um 0). Mostre os resultados.  
*/
#include <iostream>
using namespace std;
int main(){
    //Criação das variáveis:
    int inteiroA, M[30][30], i, j, cont = 0, mX[30][30];

    cout << "\n\tDigite um numero inteiro: ";
    cin >> inteiroA;

    cout << "\n\tDigite os valores da matriz: ";

    for(i = 0; i < 30; i++){
        for(j = 0; j < 30; j++){
            cin >> M[i][j];
        }
    }

    //contagem e substituição da matriz:
    for(i = 0; i < 30; i++){
        for(j = 0; j < 30; j++){
            if (M[i][j] == inteiroA){
                cont++;
                M[i][j] = 0;
            }
        }
    }

    //Resultado:
    cout << "\n\tA contagem dos elementos iguais a A foram: " << cont;
    cout << "\n\tMatriz modificada: \n";
    
    for(i = 0; i < 30; i++){
        for(j = 0; j < 30; j++){
            mX[i][j] = M[i][j];
            cout << mX[i][j] << " ";
        }
        cout << "\n";
    }
}
