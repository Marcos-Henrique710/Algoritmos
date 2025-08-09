/*
4. Matriz A(15,5) e contar repetições
*/
void q4(){
    const int R=15,C=5;
    vector<int> vals;
    cout<<"\n\tdigite 75 inteiros (15x5):\n";
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++){
            int x; 
            cin>>x; 
            vals.push_back(x);
        }
    map<int,int> freq;
    for(auto v:vals) 
        freq[v]++;
    cout<<"Repetidos:\n";
    for(auto &p:freq)
        if(p.second>1)
            cout<<p.first<<" aparece "<<p.second<<" vezes\n";
}
