/*
3. somas em matriz 5x5
*/
int main(){
    int M[5][5];
    
    cout<<"Digite 25 inteiros para a matriz (5x5):\n";
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            cin >> M[i][j];
    }
    int sumRow4=0, sumCol2=0, sumDiagP=0, sumDiagS=0, sumAll=0;
    
    for(int j=0;j<5;j++) 
        sumRow4+=M[3][j];
    for(int i=0;i<5;i++) 
        sumCol2+=M[i][1];
    for(int i=0;i<5;i++){ 
        sumDiagP+=M[i][i]; 
        sumDiagS+=M[i][4-i]; 
    }
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
            sumAll+=M[i][j];
    }
    cout<<"Linha4: "<<sumRow4<<"\nColuna2: "<<sumCol2<<"\nDiag principal: "<<sumDiagP<<"\nDiag secundaria: "<<sumDiagS<<"\nTotal: "<<sumAll<<"\n";
}

