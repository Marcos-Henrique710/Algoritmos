/*
12. Leia MxN e escreva o maior elemento da linha que contém o menor elemento da matriz
*/
void q12(){
    int M,N; cout<<"Q12: linhas m e colunas n: "; cin>>M>>N;
    vector<vector<int>> A(M, vector<int>(N));
    for(int i=0;i<M;i++) for(int j=0;j<N;j++) cin>>A[i][j];
    int mn=A[0][0], mnrow=0;
    for(int i=0;i<M;i++) for(int j=0;j<N;j++) if(A[i][j]<mn){ mn=A[i][j]; mnrow=i; }
    int mx = A[mnrow][0];
    for(int j=1;j<N;j++) mx = max(mx, A[mnrow][j]);
    cout<<"Menor elemento da matriz: "<<mn<<" na linha "<<mnrow<<"\nMaior elemento dessa linha: "<<mx<<"\n";
}

