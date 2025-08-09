/*
6. 200 funcionarios: nome, horas, dependentes; calcular salarios e descontos
*/
struct Func{ 
string nome;
int horas; 
int dependentes; 
};
void q6(){
    vector<Func> v; v.reserve(200);
    cout<<"Cadastrar funcionarios (digite 'fim' como nome para terminar):\n";
    while(v.size()<200){
        Func f; 
        cin>>f.nome; 
        if(f.nome=="fim") 
            break;
        cin>>f.horas>>f.dependentes; v.push_back(f);
    }
    for(auto &f:v){
        double bruto = 12.0*f.horas + 40.0*f.dependentes;
        double inss = bruto*0.085; double ir = bruto*0.05;
        double liquido = bruto - inss - ir;
        cout<<f.nome<<" Salario bruto: "<<bruto<<" INSS: "<<inss<<" IR: "<<ir<<" Salario liquido: "<<liquido<<"\n";
    }
}
