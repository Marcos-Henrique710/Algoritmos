/*
1. Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de c�digo. Se o 
c�digo for 1, mostrar o vetor na ordem direta (do primeiro at� o �ltimo), se o c�digo for 2, mostrar o vetor 
na ordem inversa (do �ltimo at� o primeiro). 
*/
#include <iostream>
using namespace std;
int main(){
	int v[20], i;
	int resp = 0;
	for(i = 0; i < 20; i++){
		cout << "\n\tDigite uma sequencia de numeros: ";
		cin >> v[i];
	}
	
	cout << "\n\tDigite 1 - para ver a ordem direta e 2 - para a ordem inversa: ";
	cin >> resp;
	
	if(resp == 1){
		for (i = 0; i < 20; i++){
			cout << v[i] << "  ";
		}
	}
	
	if(resp == 2){
		for (i = 19; 0 <= i ; i--){
			cout << v[i] << "  ";
		}
	}


}

