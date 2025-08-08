/*
17. Ler 10 inteiros e escrever na ordem contraria usando apenas ponteiros
*/
void q17(){
    int v[10]; for(int i=0;i<10;i++) cin>>v[i];
    int *p = v+9;
    for(int i=0;i<10;i++) cout<<*(p-i)<<" ";
    cout<<"\n";
}

int main(){
    cout<<"Arquivo lista7.cpp com funcoes q1..q17 (Lista 7). Use menu para testar."<<endl;
    while(true){
        cout<<"Escolha questao (1-17) ou 0 para sair: ";
        int op; if(!(cin>>op)) break; if(op==0) break;
        switch(op){
            case 1: q1(); break; case 2: q2(); break; case 3: q3(); break; case 4: q4(); break; case 5: q5(); break;
            case 6: q6(); break; case 7: q7(); break; case 8: q8(); break; case 9: q9(); break; case 10: q10(); break;
            case 11: q11(); break; case 12: q12(); break; case 13: q13(); break; case 14: q14(); break; case 15: q15(); break;
            case 16: q16(); break; case 17: q17(); break;
            default: cout<<"Opcao invalida\n";
        }
    }
    return 0;
}
