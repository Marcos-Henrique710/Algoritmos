/*
4. Elabore um algoritmo para ler um vetor A de 20 n�meros inteiros e obter a maior diferen�a entre dois 
elementos consecutivos desse vetor. Ao final, escreva a maior diferen�a e os �ndices dos respectivos 
elementos.   
*/

#include <iostream>
using namespace std;
int main(){
	//Cria��o de vari�veis:
	int vetorA[20], i, diferenca;
	
	cout << "\n\tDigite 20 numeros: ";
	
	for(i = 0; i < 20; i++){
		cin >> vetorA[i];
	}
	
	for(i = 0; i < 20 - 1; i++){
		diferenca = vetorA[i] - vetorA[i - 1];
		cout << " " << diferenca; 
	} 
	
}
