/*
14. Função que retorna índices onde letra aparece numa string
*/
vector<int> posicoes_letra(const string &s,char letra){ vector<int> pos; for(int i=0;i<(int)s.size();i++) if(s[i]==letra) pos.push_back(i); return pos; }
void q14(){ string s; char c; cin>>s>>c; auto pos = posicoes_letra(s,c); cout<<\"Encontrado \"<<pos.size()<<\" vezes. Indices: \"; for(int x:pos) cout<<x<<\" \"; cout<<\"\\n\"; }

