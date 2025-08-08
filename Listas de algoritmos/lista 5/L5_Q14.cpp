/*
14. Matriz 4x5 soma colunas para vetor 5 elementos
*/
void q14(){
    const int R=4,C=5;
    double M[R][C]; cout<<"Q14: leia 20 reais (4x5):\n";
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) cin>>M[i][j];
    double S[C] = {0};
    for(int j=0;j<C;j++) for(int i=0;i<R;i++) S[j]+=M[i][j];
    cout<<"Matriz:\n"; for(int i=0;i<R;i++){ for(int j=0;j<C;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
    cout<<"Vetor soma por coluna: "; for(int j=0;j<C;j++) cout<<S[j]<<" "; cout<<"\n";
}

