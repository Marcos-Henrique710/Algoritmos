/*
1. Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome, 
endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de 
todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final.  
*/
#include <iostream>
using namespace std;

//declarando o struct:
struct Alunos{
    int mat;
    string nome, end;
    float mediaG;
};

int main(){
    const int tam = 10;
    Alunos alunos[tam];
    int i;

    //Entrada e saida de dados:
    for(i = 0; i < tam; i++){
        cout << "\n\tDigite a matricula do aluno " << (i+1) << ": ";
        cin >> alunos[i].mat;
        cout << "\n\tDigite o nome do aluno: ";
        getchar();
        getline(cin, alunos[i].nome);
        cout << "\n\tDigite o endereco do aluno: ";
        getline(cin, alunos[i].end);
        cout << "\n\tDigite a media geral do aluno: ";
        cin >> alunos[i].mediaG;
    }
    
    //Adição da nota:
    for(i = 0; i < tam; i++){
        if (alunos[i].mediaG >= 5){
            alunos[i].mediaG = alunos[i].mediaG + 0.5;
            if(alunos[i].mediaG > 10){
                alunos[i].mediaG = 10;
            }
        }
    }

    for(i = 0; i < tam; i++){
        cout << "\nTabela do aluno " << (i+1) << ": ";
        cout << "\n-----------------------------------";
        cout << "\n\tMatricula: " << alunos[i].mat;
        cout << "\n\tNome: " << alunos[i].nome;
        cout << "\n\tEndereco: " << alunos[i].end;
        cout << "\n\tMedia geral: " << alunos[i].mediaG;
        cout << "\n-----------------------------------";
    }

}
