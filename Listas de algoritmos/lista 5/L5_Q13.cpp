/*
13. Preencher 3x3 com pares em linhas pares e impares em linhas impares com repetição até encher
*/
void q13(){
    const int R=3,C=3;
    int M[R][C]; for(int i=0;i<R;i++) for(int j=0;j<C;j++) M[i][j]=INT_MIN;
    int filled=0;
    cout<<"Q13: entre numeros positivos (pares em linhas pares (0-index), impares em linhas impares). Continua ate preencher 3x3\n";
    while(filled<R*C){
        int x; cin>>x;
        bool placed=false;
        int startRow = (x%2==0?0:1); // pares em linhas 0,2 ; impares em linha 1 (0-index)
        for(int i=startRow;i<R;i+=2){
            for(int j=0;j<C;j++) if(M[i][j]==INT_MIN){ M[i][j]=x; placed=true; filled++; break; }
            if(placed) break;
        }
        if(!placed) cout<<"Sem espaco para esse tipo (par/ímpar), continue inserindo outros numeros\n";
    }
    cout<<"Matriz preenchida:\n";
    for(int i=0;i<R;i++){ for(int j=0;j<C;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
}

