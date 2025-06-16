/*
4. Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois 
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos 
elementos.   
*/

#include <iostream>
using namespace std;
int main(){
	//Criação de variáveis:
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
