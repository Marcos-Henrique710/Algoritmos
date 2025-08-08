/*
12. Registro conta bancária com menu (simplificado)
*/
struct Conta{ int numeroBanco; int numeroAgencia; int numeroConta; string nomeCliente; string senha; double saldo; };
void q12(){
    vector<Conta> v; int n; cout<<\"Quantas contas? \"; cin>>n; v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i].numeroBanco>>v[i].numeroAgencia>>v[i].numeroConta>>v[i].nomeCliente>>v[i].senha>>v[i].saldo;
    while(true){
        cout<<\"Entrar (1) ou sair (0)? \"; int op; cin>>op; if(op==0) break;
        if(op==1){ int num; string senha; cout<<\"numero conta senha: \"; cin>>num>>senha; bool found=false; for(auto &c:v) if(c.numeroConta==num && c.senha==senha){ found=true; while(true){ cout<<\"1-saque 2-deposito 3-saldo 4-voltar\\n\"; int o; cin>>o; if(o==1){ double val; cin>>val; if(val<=c.saldo){ c.saldo-=val; cout<<\"saque ok\\n\";} else cout<<\"saldo insuficiente\\n\"; } else if(o==2){ double val; cin>>val; c.saldo+=val; } else if(o==3) cout<<\"Saldo: \"<<c.saldo<<\"\\n\"; else break; } } if(!found) cout<<\"erro de busca\\n\"; }
    }
}

