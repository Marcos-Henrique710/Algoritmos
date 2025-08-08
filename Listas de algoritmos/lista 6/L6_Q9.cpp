/*
7. Registro de conta bancária etc. (questao 7 do enunciado corresponde ao item 7 na lista)
*/
struct ClienteBanco{ string nome; string cpf; string rg; int numeroConta; string dataAbertura; double saldo; };
void q7(){
    vector<ClienteBanco> v(15);
    int n=0; cout<<"Quantos clientes (max 15)? "; cin>>n; if(n>15) n=15;
    for(int i=0;i<n;i++){ cout<<"nome cpf rg numeroConta data saldo\n"; cin>>v[i].nome>>v[i].cpf>>v[i].rg>>v[i].numeroConta>>v[i].dataAbertura>>v[i].saldo; }
    cout<<"Menu: 1-Cadastrar cliente (n foi implementado), 2-Imprimir por CPF, 3-Imprimir clientes com saldo negativo\n";
    cout<<"Digite 2 para buscar por CPF ou 3 para listar negativos: "; int op; cin>>op;
    if(op==2){ string cpf; cout<<"CPF: "; cin>>cpf; for(int i=0;i<n;i++) if(v[i].cpf==cpf) cout<<v[i].nome<<" "<<v[i].cpf<<" "<<v[i].saldo<<"\n"; }
    else if(op==3){ for(int i=0;i<n;i++) if(v[i].saldo<0) cout<<v[i].nome<<" "<<v[i].cpf<<" "<<v[i].saldo<<"\n"; }
}

