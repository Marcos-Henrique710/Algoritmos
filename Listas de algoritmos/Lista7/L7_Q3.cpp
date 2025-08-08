/*
3. Soma de intervalo [n1,n2]
*/
long long somaIntervalo(int n1,int n2){ long long s=0; for(int i=min(n1,n2); i<=max(n1,n2); i++) s+=i; return s; }
void q3(){ int a,b; cin>>a>>b; cout<<somaIntervalo(a,b)<<\"\\n\"; }

