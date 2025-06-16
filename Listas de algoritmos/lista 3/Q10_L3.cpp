/*10. Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá conter cada
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número
negativo, solicitar que o usuário digite novamente até que o número seja positivo. */

#include <iostream>
using namespace std;

int main(){
    //declaração das variaveis:
    int val1, val2, val3, val4, quad1, quad2, quad3, quad4, cubo1, cubo2, cubo3, cubo4;
    
    do{
        //comandos de saida e leitura das variaveis:
       
        cout<<"\n\tDigite os 4 valores: ";
        cout << "\n\tValor 1: ";
        cin >> val1;
        cout << "\n\tValor 2: ";
        cin >> val2;
        cout << "\n\tValor 3: ";
        cin >> val3;
        cout << "\n\tValor 4: ";
        cin >> val4;
        
        
        //construção da tabela e calculos de potencias:
        cout << "\n\tValores ao quadrado: ";
        cout << "\n\t";
        for (int i = 1; i <= 4; i++) {
            if (i == 1) cout << quad1 << "  ";
            else if (i == 2) cout << quad2 << "  ";
            else if (i == 3) cout << quad3 << "  ";
            else cout << quad4 << "  ";
        }

        cout << "\n\tValores ao cubo: ";
        cout << "\n\t";
        for (int i = 1; i <= 4; i++) {
            if (i == 1) cout << cubo1 << "  ";
            else if (i == 2) cout << cubo2 << "  ";
            else if (i == 3) cout << cubo3 << "  ";
            else cout << cubo4 << "  ";
        }

        
    }while((val1 != 0 ) && (val1 != 0 ) && (val1 != 0 ) && (val1 != 0));
    

    return 0;
}
