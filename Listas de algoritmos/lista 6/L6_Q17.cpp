/*
15. Projeto CRUD - implementacao simples para registro com chave inteira
*/
struct Registro{ 
int chave;
string campo1; 
};
void q15(){
    vector<Registro> vet;
    while(true){
        cout<<"1-Incluir 2-Buscar 3-Alterar 4-Excluir 5-Listar 6-Sair\n\t";
        int op; 
        cin>>op; 
        if(op==6) 
            break;
        if(op==1){ 
            if(vet.size()>=100){
                cout<<"Vetor cheio\n\t";
                    continue; 
            } 
            Registro r;
            cin>>r.chave>>ws;
            getline(cin,r.campo1); 
            bool dup=false;
            for(auto &x:vet)
                if(x.chave==r.chave) 
                    dup=true;
            if(dup)
                cout<<"Chave duplicada\n\t"; 
            else 
                vet.push_back(r);
        }
        else if(op==2){
            int k;
            cin>>k;
            for(auto &x:vet) 
                if(x.chave==k)
                    cout<<x.chave<<" "<<x.campo1<<"\n\t";
        }
        else if(op==3){
            int k;
            cin>>k;
            for(auto &x:vet)
                if(x.chave==k){ 
                    cin>>x.chave>>ws; 
                    getline(cin,x.campo1);
                }
        }
        else if(op==4){ 
            int k; 
            cin>>k;
            for(size_t i=0;i<vet.size();i++) 
                if(vet[i].chave==k){
                    vet.erase(vet.begin()+i);
                    break;
                }
        }
        else if(op==5){
            for(auto &x:vet)
                cout<<x.chave<<" "<<x.campo1<<"\n\t";
        }
    }
}

int main(){
    cout<<"funcao lista6.cpp com as funcoes q1..q15 (Lista 6). Use menu para testar as funcoes."<<"\n\t";
    while(true){
        cout<<\"Escolha questao (1-15) ou 0 para sair: \n\t";
        int op; 
        if(!(cin>>op)) 
            break;
        if(op==0) 
            break;
        switch(op){
            case 1:
                q1();
                break;
            case 2:
                q2();
                break;
            case 3: 
                q3(); 
                break;
            case 4: 
                q4();
                break; 
            case 5: 
                q5(); 
                break;
            case 6:
                q6();
                break; 
            case 7:
                q7();
                break;
            case 8:
                q8();
                break;
            case 9:
                q9();
                break;
            case 10:
                q10();
                break;
            case 11:
                q11();
                break;
            case 12: 
                q12();
                break;
            case 13:
                q13();
                break;
            case 14: 
                q14();
                break;
            case 15: 
                q15(); 
                break;
            default: 
                cout<<\"Opcao invalida\\n\";
        }
    }
    return 0;
}
