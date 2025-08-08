/*
6. Função MinMax para vetor de 10 inteiros
*/
void MinMax(int *v,int n,int &mn,int &mx){ mn = v[0]; mx=v[0]; for(int i=1;i<n;i++){ if(v[i]<mn) mn=v[i]; if(v[i]>mx) mx=v[i]; } }
void q6(){ int v[10]; for(int i=0;i<10;i++) cin>>v[i]; int mn,mx; MinMax(v,10,mn,mx); cout<<\"min=\"<<mn<<\" max=\"<<mx<<\"\\n\"; }

