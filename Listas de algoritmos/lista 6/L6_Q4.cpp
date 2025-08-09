/*
4. Alterar para max 20 clientes com pergunta 'Novo Cliente (S/N)?' e relatorio.
*/
void q4(){
    vector<Cliente> v; v.reserve(20);
    while(v.size()<20){
        cout<<"Cadastrar cliente? (S/N) "; 
        char c;
        cin>>c; 
        if(toupper(c)=='N')
            break;
        Cliente cl;
        cout<<"Identidade Nome Endereco Telefone\n"; 
        cin>>cl.identidade;
        cin.ignore(); 
        getline(cin,cl.nome);
        getline(cin,cl.endereco); 
        getline(cin,cl.telefone);
        v.push_back(cl);
    }
    cout<<"Relatorio:\n"; for(auto &c:v) cout<<c.identidade<<" "<<c.nome<<" "<<c.endereco<<" "<<c.telefone<<"\n";
}
