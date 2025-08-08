/*
30. Mutação em S1 em ponto P (troca por caracter aleatório)
*/
void q30(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; cout<<"Q30: S1:\n"; getline(cin,s);
    srand(time(NULL));
    if(s.empty()){ cout<<"String vazia\n"; return; }
    int p = rand()%s.size();
    char novo = 'A' + (rand()%26);
    s[p]=novo;
    cout<<"Ponto "<<p<<" modificado para '"<<novo<<"'\nNova string: "<<s<<"\n";
}

int main(){
    cout<<"Arquivo lista5.cpp - contem funcoes q1..q30. Para testar, chame uma funcao adaptando o main.\n";
    cout<<"Por exemplo, descomente e chame q1() etc.\n\n";
    // Exemplo de execucao interativa: menu
    while(true){
        cout<<"\nEscolha questao (1-30) ou 0 para sair: ";
        int op; if(!(cin>>op)) break;
        if(op==0) break;
        switch(op){
            case 1: q1(); break; case 2: q2(); break; case 3: q3(); break; case 4: q4(); break; case 5: q5(); break;
            case 6: q6(); break; case 7: q7(); break; case 8: q8(); break; case 9: q9(); break; case 10: q10(); break;
            case 11: q11(); break; case 12: q12(); break; case 13: q13(); break; case 14: q14(); break; case 15: q15(); break;
            case 16: q16(); break; case 17: q17(); break; case 18: q18(); break; case 19: q19(); break; case 20: q20(); break;
            case 21: q21(); break; case 22: q22(); break; case 23: q23(); break; case 24: q24(); break; case 25: q25(); break;
            case 26: q26(); break; case 27: q27(); break; case 28: q28(); break; case 29: q29(); break; case 30: q30(); break;
            default: cout<<"Opcao invalida\n";
        }
    }
    return 0;
}
