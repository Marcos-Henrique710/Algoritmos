/*
10. Média aritmética dos elementos abaixo da diagonal principal em A[12][12]
*/
void q10(){
    const int N=12;
    double A[N][N];
    cout<<"Q10: leia 144 numeros reais (12x12):\n";
    
    for(int i=0;i<N;i++) 
        for(int j=0;j<N;j++) cin>>A[i][j];
            double sum=0; 
            int cnt=0;
                for(int i=1;i<N;i++) 
                    for(int j=0;j<i;j++){ 
                        sum+=A[i][j]; cnt++;
                    }
    cout<<"Media abaixo da diagonal principal: "<<(cnt?sum/cnt:0)<<"\n";
}

