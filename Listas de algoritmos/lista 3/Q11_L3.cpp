/*
11. Elabore um algoritmo que leia dois n�meros inteiros, A e B, calcule e escreva o resto da divis�o de A por 
B sem usar o operador de resto (%).  
*/
#include <iostream>
using namespace std;
int main(){
	int A, B;
	cout << "\n\tDigite dois numeros que deseja ver a divisao: ";
	cin >> A >> B;
	while(A >= B){
		A = A - B;
	}
    
	cout << "\n\t Resto da divisao e: " << A;		
}
