/*
9. Elabore um algoritmo que mostre o calendário de um determinado mês. Os dados de entrada são o mês 
(cujos dados devem ser mostrados) e o dia da semana em que esse mês inicia. Assuma que esse mês está 
em um ano que não é bissexto, porém considere meses de 28, 30 e 31. O resultado deve ser como 
mostrado abaixo. Ex: janeiro, começando na 5a feira:    
*/
#include<iostream>
using namespace std;
int main(){
	int mes = 1, i, diaMes, inicioSemana;
	do{
		cout << "\n\tDigite o mes e os dias que aquele mes possui para ver o calendario: ";
		cout << "\n\tMes: ";
		cin >> mes;
		cout << "\n\tDias do mes: ";
		cin >> diaMes;
		while((diaMes != 28) && (diaMes != 30) && (diaMes != 31) || (diaMes < 28) && (diaMes < 30) && (diaMes < 31) || (mes > 12)){
			
			if((diaMes != 28) && (diaMes != 30) && (diaMes != 31)){
				cout << "digite os dias novamente: ";
				cin >> diaMes;
				system("cls");
			}else{
				cout << "digite os numeros dos meses novamente: ";
				cin >> mes;
				system("cls");
			}
		} 
		switch(mes){
			case 1:
				cout << "\n\t o mes e janeiro";
				break;
			case 2:
				cout << "\n\to mes e fevereiro";
				break;
			case 3:
				cout << "\n\to mes e marco";
				break;
			case 4:
				cout << "\n\to mes e abril";
				break;	
			case 5:
				cout << "\n\to mes e maio";
				break;
			case 6:
				cout << "\n\to mes e junho";
				break;
			case 7:
				cout << "\n\to mes e julho";
				break;
			case 8:
				cout << "\n\to mes e agosto";
				break;
			case 9:
				cout << "\n\to mes e setembro";
				break;
			case 10:
				cout << "\n\to mes e outubro";
				break;
			case 11:
				cout << "\n\to mes e novembro";
				break;
			case 12:
				cout << "\n\to mes e dezembro";		
		}
			
		cout << "\n dom seg terca quar quin sex sab";
		cout << "\n\tDigite o dia da semana em que o mes comeca (0=Dom, 1=Seg, ..., 6=Sab): ";
		cin >> inicioSemana;

		cout << "\n dom seg terca quar quin sex sab\n";

		
		for (int i = 0; i < inicioSemana; i++) {
    		cout << "    ";
		}
		for (int dia = 1; dia <= diaMes; dia++) {
   		
   		 	if (dia < 10) {
        		cout << "  " << dia << " ";
    		}else{
        		cout << " " << dia << " ";
   	 		}
			
    		if ((inicioSemana + dia) % 7 == 0) {
        		cout << endl;
   			}
   			
		}

	
		cout << "\n";
		system ("pause");
		system("cls");
		
	}while((diaMes == 28) || (diaMes == 30) || (diaMes == 31) || (mes < 12));
}
