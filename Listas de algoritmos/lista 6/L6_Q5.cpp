/*
5. Igual ao anterior mas com menu para relatorio ou consulta individual por identidade
*/
void q5(){
    vector<Cliente> v; v.reserve(20);
    while(v.size()<20){
        cout<<"Novo Cliente (S/N)? ";
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
    cout<<"Mostrar relatorio (R) ou consultar cliente (C)? "; 
    char op; 
    cin>>op;
    if(toupper(op)=='R'){ 
        for(auto &c:v) 
            cout<<c.identidade<<" "<<c.nome<<" "<<c.endereco<<" "<<c.telefone<<"\n";
    }
    else{ 
        string id; 
        cout<<"Digite identidade: "; 
        cin>>id; 
        bool found=false; 
        for(auto &c:v)
            if(c.identidade==id){ 
                cout<<c.identidade<<" "<<c.nome<<" "<<c.endereco<<" "<<c.telefone<<"\n";
                found=true;
            } 
        if(!found)
            cout<<"Cliente nao cadastrado\n";
    }
}
