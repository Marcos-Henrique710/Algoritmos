/*
15. Transposta de 3x3
*/
void q15(){
    int A[3][3]; cout<<"Q15: leia 9 inteiros (3x3):\n";
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) cin>>A[i][j];
    int T[3][3];
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) T[j][i]=A[i][j];
    cout<<"Transposta:\n"; for(int i=0;i<3;i++){ for(int j=0;j<3;j++) cout<<T[i][j]<<" "; cout<<"\n"; }
}

