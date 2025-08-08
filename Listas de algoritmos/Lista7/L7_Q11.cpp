/*
11. Menu com varias opcoes (resumido)
*/
void q11(){
    cout<<\"Q11 - menu interativo simplificado. Digite 6 para sair\\n\";
    while(true){
        cout<<\"1-ORDEM 2-DATA 3-SALARIO 4-MULTA 5-CALCULAR 6-SAIR\\n\";
        int op; cin>>op; if(op==6) break;
        if(op==1){ int a,b,c; char ch; cin>>a>>b>>c>>ch; vector<int> v={a,b,c}; if(ch=='c') sort(v.begin(),v.end()); else sort(v.rbegin(),v.rend()); for(int x:v) cout<<x<<\" \"; cout<<\"\\n\"; }
        else if(op==2){ struct Data{int d,m,y;}; vector<Data> ds(5); for(int i=0;i<5;i++) cin>>ds[i].d>>ds[i].m>>ds[i].y; for(auto &d:ds){ bool ok=true; if(d.m<1||d.m>12) ok=false; if(d.d<1||d.d>31) ok=false; if(d.d>30 && (d.m==4||d.m==6||d.m==9||d.m==11)) ok=false; cout<<(ok?\"Data Valida\\n\":\"Data Invalida\\n\"); } }
        else if(op==3){ double salario; int filhos; cin>>salario>>filhos; if(filhos==0) cout<<\"O seu salario e 100% para o seu proprio custeio\\n\"; else{ double per = min(0.5, 0.1*filhos); cout<<\"Valor por filho: \"<<(salario*per/filhos)<<\"\\n\"; } }
        else if(op==4){ int vmax, v; cin>>vmax>>v; int diff=v-vmax; if(diff<=10) cout<<\"Multa R$50\\n\"; else if(diff<=30) cout<<\"Multa R$100\\n\"; else cout<<\"Multa R$200\\n\"; }
        else if(op==5){ vector<char> gabarito(10); vector<char> aluno(10); for(int i=0;i<10;i++) cin>>gabarito[i]; for(int i=0;i<10;i++) cin>>aluno[i]; int ac=0; for(int i=0;i<10;i++) if(gabarito[i]==aluno[i]) ac++; int porcent = ac*10; double nota = ac*1.5; cout<<\"Percentual: \"<<porcent<<\"% Nota: \"<<nota<<\"\\n\"; }
    }
}

