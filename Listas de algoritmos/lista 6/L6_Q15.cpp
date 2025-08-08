/*
13. tProduto e tNotaFiscal menu (resumido)
*/
struct tProduto{ string descricao; int quantidade; double precoUnitario; double subTotal; };
struct tNotaFiscal{ int numero; string data; vector<tProduto> itens; double total; };
void q13(){
    vector<tNotaFiscal> notas;
    cout<<\"Insira ate 5 notas\\n\";
    for(int i=0;i<5;i++){
        tNotaFiscal nf; cout<<\"numero data quantidadeItens\\n\"; int itens; cin>>nf.numero>>nf.data>>itens; nf.itens.resize(itens); nf.total=0;
        for(int k=0;k<itens;k++){ cin>>nf.itens[k].descricao>>nf.itens[k].quantidade>>nf.itens[k].precoUnitario; nf.itens[k].subTotal = nf.itens[k].quantidade*nf.itens[k].precoUnitario; nf.total += nf.itens[k].subTotal;}
        notas.push_back(nf);
    }
    cout<<\"Menu: 1-relatorio notas, 2-buscar nota por numero, 3-maior nota, 4-quant vendida de produto, 5-media dos totais\\n\";
    int op; cin>>op;
    if(op==1) for(auto &n:notas){ cout<<n.numero<<\" \"<<n.data<<\" total=\"<<n.total<<\"\\n\"; for(auto &it:n.itens) cout<<it.descricao<<\" \"<<it.quantidade<<\" \"<<it.precoUnitario<<\"\\n\"; }
    else if(op==2){ int num; cin>>num; for(auto &n:notas) if(n.numero==num){ for(auto &it:n.itens) cout<<it.descricao<<\" \"<<it.quantidade<<\"\\n\"; } }
    else if(op==3){ double best=0; int idx=0; for(int i=0;i<notas.size();i++) if(notas[i].total>best){best=notas[i].total; idx=i;} cout<<\"Maior nota numero: \"<<notas[idx].numero<<\" total=\"<<best<<\"\\n\"; }
    else if(op==4){ string desc; cin>>desc; int sum=0; for(auto &n:notas) for(auto &it:n.itens) if(it.descricao==desc) sum+=it.quantidade; cout<<\"Quantidade vendida: \"<<sum<<\"\\n\"; }
    else if(op==5){ double s=0; for(auto &n:notas) s+=n.total; cout<<\"Media totals: \"<<(notas.empty()?0:s/notas.size())<<\"\\n\"; }
}

