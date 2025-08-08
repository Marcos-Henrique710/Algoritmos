/*
10. multiplicaEscalar
*/
void multiplica_escalar(int *v1,int *v2,int x,int n){ for(int i=0;i<n;i++) v2[i]=v1[i]*x; }
void q10(){ int v1[10]; for(int i=0;i<10;i++) cin>>v1[i]; int x; cin>>x; int v2[10]; multiplica_escalar(v1,v2,x,10); for(int i=0;i<10;i++) cout<<v2[i]<<\" \"; cout<<\"\\n\"; }

