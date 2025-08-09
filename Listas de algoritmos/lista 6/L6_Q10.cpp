/*
8. Provedor de internet cadastro clientes e calculo valor a pagar
*/
struct ClienteProv{ 
int codigo;
string email;
int horas; 
char pagina;
};
void q8(){
    vector<ClienteProv> v; 
    cout<<"Insira clientes (codigo -1 para terminar):\n";
    while(v.size()<500){ 
        ClienteProv c;
        cin>>c.codigo; 
        if(c.codigo==-1) 
            break; 
        cin>>c.email>>c.horas>>c.pagina; v.push_back(c);
    }
    for(auto &c:v){
        double val = 35.0;
        int extra = max(0, c.horas-20);
        val += extra*2.5;
        if(toupper(c.pagina)=='S') 
            val+=40.0;
        cout<<"Codigo "<<c.codigo<<" valor a pagar: "<<val<<"\n";
    }
}
