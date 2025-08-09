/*
6. M(10,10) trocar diagonal principal com secundaria; linha5 com coluna10
*/
int main(){
    const int N=10;
    int M[N][N];
    cout<<"Q6: leia 100 inteiros (10x10):\n";
    for(int i=0;i<N;i++){ 
        for(int j=0;j<N;j++) 
            cin>>M[i][j];
    }
    // troca diagonais
    for(int i=0;i<N;i++)
        swap(M[i][i], M[i][N-1-i]);
    // trocar linha 5 (index 4) com coluna 10 (index 9)
    for(int i=0;i<N;i++) 
        swap(M[4][i], M[i][9]);
    
    cout<<"M modificada:\n";
    for(int i=0;i<N;i++){ 
        for(int j=0;j<N;j++) 
            cout<<M[i][j]<<" "; cout<<"\n";
    }
}
