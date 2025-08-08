/*
5. M(12,13) multiplicar cada linha pelo maior da linha
*/
void q5(){
    const int R=12,C=13;
    int M[R][C];
    cout<<"Q5: leia 156 inteiros (12x13):\n";
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) cin>>M[i][j];
    cout<<"M original:\n";
    for(int i=0;i<R;i++){ for(int j=0;j<C;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
    for(int i=0;i<R;i++){
        int mx=M[i][0]; for(int j=1;j<C;j++) mx=max(mx,M[i][j]);
        for(int j=0;j<C;j++) M[i][j]*=mx;
    }
    cout<<"M modificada:\n";
    for(int i=0;i<R;i++){ for(int j=0;j<C;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
}

