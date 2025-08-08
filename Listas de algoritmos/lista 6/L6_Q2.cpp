/*
2. tAnimal, cadastrar 8 animais em vetor de 50, informar animal mais velho e busca por raca.
*/
struct tAnimal{ string nome; string raca; int idade; };
void q2(){
    vector<tAnimal> Animais(50);
    cout<<"Cadastre 8 animais:\n";
    for(int i=0;i<8;i++){ cout<<"nome raca idade\n"; cin>>Animais[i].nome>>Animais[i].raca>>Animais[i].idade; }
    int idx=0; for(int i=1;i<8;i++) if(Animais[i].idade>Animais[idx].idade) idx=i;
    cout<<"Animal mais velho: "<<Animais[idx].nome<<" idade "<<Animais[idx].idade<<"\n";
    cout<<"Deseja consultar por raca? (s/n) "; char c; cin>>c;
    if(tolower(c)=='s'){ string r; cin>>r; for(int i=0;i<8;i++) if(Animais[i].raca==r) cout<<Animais[i].nome<<" "<<Animais[i].idade<<"\n"; }
}

