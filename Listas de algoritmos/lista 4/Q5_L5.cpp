/*
5. Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo 
vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e 
assim sucessivamente.  Ao final, escreva os vetores A e B.
*/
#include <iostream>
using namespace std;
int main(){
	//Criação das variáveis:
	int vetorA[20], vetorB[20], i;
	
	//Comando de entrada:
	for(i = 0; i < 20; i++){
		cout << "\n\tDigite 20 numeros: ";
		cin >> vetorA[i];
		system("cls");
	}

	//Cópia e armazena o valor do vetor A para o B:
	for(i = 0; i < 20; i++){
		vetorB[i] = vetorA[19 - i];
	}
	
	//Comandos de saída:
	cout << "\n\tVetor A: "; 
	
	for (i = 0; i < 20; i++){
		cout << vetorA[i] << " ";
	}
	
	cout << "\n\tVetor B: ";

	for (i = 0; i < 20; i++){
		cout << vetorB[i] << " ";
	}
}
