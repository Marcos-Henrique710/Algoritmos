/*
9. inverteVetor que copia V1 para V2 em ordem inversa e retorna maior de V1
*/
int inverteVetor(int *v1,int *v2,int n){
    int mx=v1[0];
    for(int i=0;i<n;i++){ v2[i]=v1[n-1-i]; if(v1[i]>mx) mx=v1[i]; }
    return mx;
}
void q9(){ int v1[5]={1,2,3,4,5}; int v2[5]; int mx = inverteVetor(v1,v2,5); cout<<\"v2: \"; for(int i=0;i<5;i++) cout<<v2[i]<<\" \"; cout<<\"\\nmax=\"<<mx<<\"\\n\"; }

