/*
3. Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais 
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em 
índices ímpares. Mostre somente os elementos solicitados.   
*/

#include <iostream>
using namespace std;
int main(){
	//Criação de variáveis:
	int num[15], i;
	bool resp;
	
	//Entrada e processamento dos dados:
	cout << "\n\tDigite 15 numeros: ";
	
	for(i = 0; i < 15; i++){
		cin >> num[i];
	}
	
	cout << "\n\tVoce deseja ver os indices pares ou impares (0- para numeros pares e 1- para numeros impares): ";
	cin >> resp;
	
	
	if (resp == 0){
		cout << "\n\tOrdem de numeros pares: ";
		for(i = 1; i < 14; i++){
			cout << num[i] << " ";
			i++;
		}
	}
	
	if (resp == 1){
		for(i = 0; i < 15; i++){
			cout << "\n\tOrdem de numeros pares: ";
			cout << num[i] << " ";
			i++;
		}
	}
	
} 
