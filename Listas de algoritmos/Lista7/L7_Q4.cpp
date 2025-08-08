/*
4. Tabuada com LeNumero e Tabuada
*/
int LeNumero(int n1,int n2){
    int x; do{ cin>>x; if(x<=n1||x>n2) cout<<\"Numero invalido. Digite novamente!\\n\"; } while(x<=n1||x>n2); return x;
}
void Tabuada(int n){ for(int i=1;i<=10;i++) cout<<n<<\" x \"<<i<<\" = \"<<n*i<<\"\\n\"; }
void q4(){ cout<<\"Digite numero (maior que 1 e <=10): \"; int n=LeNumero(1,10); Tabuada(n); }

