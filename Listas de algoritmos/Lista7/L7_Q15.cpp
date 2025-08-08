/*
15. Lista encadeada com funcoes adicionar, remover, relatorio
*/
struct No{ int valor; No *prox; No(int v):valor(v),prox(nullptr){} };
void adiciona(No* &head,int v){
    if(!head){ head=new No(v); return; }
    No* p=head; while(p->prox) p=p->prox; p->prox=new No(v);
}
bool removeNo(No* &head,int v){
    No* p=head; No* prev=nullptr;
    while(p){ if(p->valor==v){ if(prev) prev->prox=p->prox; else head=p->prox; delete p; return true;} prev=p; p=p->prox; } return false;
}
void relatorio(No* head){ No* p=head; while(p){ cout<<p->valor<<\" \"; p=p->prox; } cout<<\"\\n\"; }
void q15(){
    No* head=nullptr;
    while(true){
        cout<<\"1-ADICIONAR 2-REMOVER 3-MOSTRAR 4-SAIR\\n\"; int op; cin>>op; if(op==4) break;
        if(op==1){ int v; cin>>v; adiciona(head,v); }
        else if(op==2){ int v; cin>>v; if(!removeNo(head,v)) cout<<\"Elemento nao encontrado\\n\"; }
        else if(op==3) relatorio(head);
    }
}

