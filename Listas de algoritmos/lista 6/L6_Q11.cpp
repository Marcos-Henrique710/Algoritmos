/*
9. Tipo Endereco e Pessoa; buscar nomes por bairro
*/
struct Pessoa2{ string nome; Endereco ender; string telefone; int idade; };
void q9(){
    vector<Pessoa2> pessoas(10);
    for(int i=0;i<10;i++){ cout<<"Nome\n"; cin>>pessoas[i].nome; cout<<"Rua Numero Bairro Cidade Estado\n"; cin>>pessoas[i].ender.rua>>pessoas[i].ender.numero>>pessoas[i].ender.bairro>>pessoas[i].ender.cidade>>pessoas[i].ender.estado; cin>>pessoas[i].telefone>>pessoas[i].idade; }
    cout<<"Digite um endereco para comparar (bairro): "; string bairro; cin>>bairro;
    for(auto &p:pessoas) if(p.ender.bairro==bairro) cout<<p.nome<<"\n";
}

