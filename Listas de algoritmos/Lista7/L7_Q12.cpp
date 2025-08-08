/*
12. hm converte minutos -> h e m
*/
void hm(int mnts,int *h,int *m){ *h = mnts/60; *m = mnts%60; }
void q12(){ int m; cin>>m; int h, mm; hm(m,&h,&mm); cout<<h<<\" horas e \"<<mm<<\" minutos\\n\"; }

