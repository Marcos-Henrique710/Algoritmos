/*
8. Elemento minimax: menor elemento da linha onde se encontra o maior elemento da matriz 10x10
*/
void q8(){
    const int N=10;
    int M[N][N];
    cout<<"Q8: leia 100 inteiros (10x10):\n";
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cin>>M[i][j];
    }
    int mx = M[0][0], miRow=0, miCol=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            if(M[i][j]>mx){ 
                mx=M[i][j]; 
                miRow=i;
                miCol=j;
            }
        }
    int minimax = M[miRow][0];
    int posCol=0;
    for(int j=1;j<N;j++) 
        if(M[miRow][j] < minimax){
            minimax=M[miRow][j]; 
            posCol=j;
        }
    cout<<"Maior elemento: "<<mx<<" em ("<<miRow<<","<<miCol<<")\nElemento minimax (menor na linha do maior): "<<minimax<<" pos ("<<miRow<<","<<posCol<<")\n";
}
