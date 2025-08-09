/*
9. Jogo da velha - implementação simples 3x3, dois jogadores (X/O)
*/
int main(){
    vector<char> b(9,' ');
    int turn=0;
    auto printb=[&](){
        cout<<"\n";
        for(int i=0;i<9;i++){
            cout<<" "<<(b[i]==' '?'_':b[i])<<" ";
            if(i%3==2) cout<<"\n";
        }
    };
    auto win=[&](char p){
        int W[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
        for(auto &w:W) 
            if(b[w[0]]==p && b[w[1]]==p && b[w[2]]==p)
                return true;
        return false;
    };
    cout<<"Jogo da velha: jogadores escolhem posicao 0..8\n";
    for(int moves=0;moves<9 && !win('X') && !win('O'); moves++){
        printb();
        char p = (turn%2==0)?'X':'O';
        cout<<"Jogador "<<p<<", escolha pos (0-8): "; 
        int pos; 
        cin>>pos;
        if(pos<0||pos>8||b[pos]!=' '){ 
            cout<<"Posicao invalida, tente novamente\n";
            moves--; 
            continue;
        }
        b[pos]=p; turn++;
    }
    printb();
    if(win('X'))
        cout<<"X venceu\n";
    else if(win('O')) 
        cout<<"O venceu\n"; 
    else 
        cout<<"Empate\n";
}
