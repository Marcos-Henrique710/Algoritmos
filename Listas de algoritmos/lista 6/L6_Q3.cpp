/*
3. Cadastrar 2 clientes (id,nome,endereco,telefone)
*/
struct Cliente{
string identidade; 
string nome; 
string endereco;
string telefone; 
};

void q3(){
    vector<Cliente> v(2);
    for(int i=0;i<2;i++){ 
        cout<<"Identidade Nome Endereco Telefone\n"; 
        cin>>v[i].identidade; cin.ignore(); 
        getline(cin,v[i].nome); 
        getline(cin,v[i].endereco);
        getline(cin,v[i].telefone);
    }
    cout<<"Clientes cadastrados:\n"; for(auto &c:v) cout<<c.identidade<<" "<<c.nome<<" "<<c.endereco<<" "<<c.telefone<<"\n";
}
