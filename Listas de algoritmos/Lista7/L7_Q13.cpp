/*
13. mm (min e max) - ja similar ao q6 de lista7
*/
void mm_func(int *v,int n,int *minv,int *maxv){ *minv=v[0]; *maxv=v[0]; for(int i=1;i<n;i++){ if(v[i]<*minv) *minv=v[i]; if(v[i]>*maxv) *maxv=v[i]; } }
void q13(){ int v[5]; for(int i=0;i<5;i++) cin>>v[i]; int mn,mx; mm_func(v,5,&mn,&mx); cout<<\"min=\"<<mn<<\" max=\"<<mx<<\"\\n\"; }

