/*
10. Pesquisa n pessoas - listar homens e mulheres (sem sexo)
*/
struct PessoaPesq{
string nome;
int sexo; 
string corOlhos;
double altura;
double peso;
string dataNasc;
};
void q10(){
    int n; cout<<"Quantas pessoas? ";
    cin>>n;
    vector<PessoaPesq> v(n);
    for(int i=0;i<n;i++) 
        cin>>v[i].nome>>v[i].sexo>>v[i].corOlhos>>v[i].altura>>v[i].peso>>v[i].dataNasc;
    cout<<"Mulheres:\n";
    for(auto &p:v) 
        if(p.sexo==0)
            cout<<p.nome<<" "<<p.corOlhos<<" "<<p.altura<<" "<<p.peso<<" "<<p.dataNasc<<"\n";
    cout<<"Homens:\n"; 
    for(auto &p:v)
        if(p.sexo==1) 
            cout<<p.nome<<" "<<p.corOlhos<<" "<<p.altura<<" "<<p.peso<<" "<<p.dataNasc<<"\n";
}
