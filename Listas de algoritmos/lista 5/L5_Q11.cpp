/*
11. Leia matriz MxN verifique e escreva coordenadas do maior e do menor elementos
*/
void q11(){
    int M,N; 
    cout<<"\n\tDigite linhas m e colunas n: "; 
    cin>>M>>N;
    vector<vector<int>> A(M, vector<int>(N));
    for(int i=0;i<M;i++) 
        for(int j=0;j<N;j++) 
            cin>>A[i][j];
    int mx=A[0][0], mn=A[0][0], mxr=0,mxc=0,mnr=0,mnc=0;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++){
        if(A[i][j]>mx){ 
            mx=A[i][j]; 
            mxr=i; 
            mxc=j;
        }
        if(A[i][j]<mn){
            mn=A[i][j];
            mnr=i;
            mnc=j;
        }
    }
    cout<<"Maior: "<<mx<<" em ("<<mxr<<","<<mxc<<")\nMenor: "<<mn<<" em ("<<mnr<<","<<mnc<<")\n";
}
