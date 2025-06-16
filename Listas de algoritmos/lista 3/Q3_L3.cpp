/*
3. Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por 
ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja 
maior que Chico. 
*/
#include <iostream>
using namespace std;
int main(){
	int ano = 0;
	float chico = 1.50, juca = 1.10;
	
	while(juca <= chico){
		juca += 0.03;
		chico += 0.02;
		ano++;	
	
	}
	cout << "\n\tSerao necessarios " << ano << " anos para que Juca ultrapasse Chico.";
    cout << "\n\tAltura final de Juca: " << juca << " m";
    cout << "\n\tAltura final de Chico: " << chico << " m";
}
