/*
7. Gere a matriz específica 6x6
*/
void q7(){
    int M[6][6];
    for(int i=0;i<6;i++) for(int j=0;j<6;j++){
        M[i][j] = min(min(i+1,j+1), min(6-i,6-j));
    }
    cout<<"Matriz gerada:\n";
    for(int i=0;i<6;i++){ for(int j=0;j<6;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
}

