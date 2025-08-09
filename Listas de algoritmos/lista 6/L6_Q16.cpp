/*
14. Controle de estacionamento (vetor tVeiculos)
*/
struct tVeiculo{ 
string placa;
string modelo;
string data;
int horaEntrada;
int horaSaida; 
double valor;
};
void q14(){
    vector<tVeiculo> vagas;
    cout<<"\nEstacionamento - registrar entrada/saida simplificado. Digite 'fim' como placa para encerrar cadastro\n\t";
    while(true){
        cout<<\"1-entrada 2-saida 3-listar ativos 4-quant por data 5-total arrecadado 0-sair\n\t"; 
        int op;
        cin>>op;
        if(op==0) 
            break;
        if(op==1){
            tVeiculo v;
            cin>>v.placa>>v.modelo>>v.data>>v.horaEntrada; 
            v.horaSaida=0; vagas.push_back(v);
        }
        else if(op==2){
            string placa; 
            cin>>placa>>ws; 
            int saida; 
            cin>>saida;
            for(auto &v:vagas)
                if(v.placa==placa && v.horaSaida==0){ 
                    v.horaSaida=saida;
                    int diff = max(0, v.horaSaida - v.horaEntrada);
                    v.valor = (diff==0?0:diff*5); 
                    cout<<"Valor a pagar: "<<v.valor<<"\n\t";
                }
        }
        else if(op==3){
            for(auto &v:vagas)
                if(v.horaSaida==0)
                    cout<<v.placa<<" "<< v.modelo<<" "<<v.data<<" "<<v.horaEntrada<<"\n\t";
        }
        else if(op==4){
            string data;
            cin>>data; 
            int cnt=0;
            for(auto &v:vagas)
                if(v.data==data)
                    cnt++;
            cout<<"Quantidade: "<<cnt<<"\n\t";
        }
        else if(op==5){
            double soma=0;
            for(auto &v:vagas)
                soma+=v.valor;
            cout<<"Total arrecadado: "<<soma<<"\n\t";
        }
    }
}
