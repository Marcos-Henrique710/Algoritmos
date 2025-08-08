/*
7. Troca valores (sem retorno)
*/
void Troca(int &a,int &b){ int t=a; a=b; b=t; }
void q7(){ int a,b; cin>>a>>b; Troca(a,b); cout<<\"a=\"<<a<<\" b=\"<<b<<\"\\n\"; }

