/*
16. uniao de dois vetores retornando vetor dinamico e tamanho
*/
int* uniao(int *x1,int *x2,int n1,int n2,int* qtd){
    set<int> s; for(int i=0;i<n1;i++) s.insert(x1[i]); for(int i=0;i<n2;i++) s.insert(x2[i]);
    *qtd = s.size();
    int *x3 = (int*)malloc((*qtd)*sizeof(int)); int i=0; for(int v: s) x3[i++]=v; return x3;
}
void q16(){ int x1[]={1,3,5,6,7}; int x2[]={1,3,4,6,8}; int qtd; int *x3 = uniao(x1,x2,5,5,&qtd); for(int i=0;i<qtd;i++) cout<<x3[i]<<\" \"; cout<<\"\\n\"; free(x3); }

