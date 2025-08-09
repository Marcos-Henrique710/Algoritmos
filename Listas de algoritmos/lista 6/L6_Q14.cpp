/*
12. Registro conta bancária com menu (simplificado)
*/
struct Conta{ 
int numeroBanco; 
int numeroAgencia; 
int numeroConta; 
string nomeCliente;
string senha;
double saldo;
};
void q12(){
    vector<Conta> v;
    int n;
    cout<<\n"Quantas contas? \n";
        cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++)
        cin>>v[i].numeroBanco>>v[i].numeroAgencia>>v[i].numeroConta>>v[i].nomeCliente>>v[i].senha>>v[i].saldo;
    while(true){
        cout<<\n\t"Entrar (1) ou sair (0)? \";
        int op;
        cin>>op;
        if(op==0) 
            break;
        if(op==1){
            int num;
            string senha;
            cout<<\n\t"numero conta senha: \n\t";
            cin>>num>>senha;
            bool found=false;
            for(auto &c:v)
                if(c.numeroConta==num && c.senha==senha){
                    found=true;
                    while(true){
                        cout<<\n\t"1-saque 2-deposito 3-saldo 4-voltar\n\n";
                        int o; 
                        cin>>o;
                        if(o==1){ 
                        double val;
                        cin>>val;
                        if(val<=c.saldo){
                            c.saldo-=val;
                            cout<<\n\t"saque ok\\n\";
                        }else
                            cout<<\n\t"saldo insuficiente\n\t";
                        }else if(o==2){
                            double val; 
                            cin>>val;
                            c.saldo+=val;
                        }else if(o==3)
                            cout<<\n\t"Saldo: " << c.saldo <<"\n\t\";
                        else
                            break;
                    }
                }
            if(!found)
                cout<<"\n\t erro de busca"\n\t;
        }
    }
}
