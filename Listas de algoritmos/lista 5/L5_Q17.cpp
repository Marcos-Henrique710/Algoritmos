/*
17. Conta ocorrencias de cada letra em uma frase
*/
void q17(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; cout<<"Q17: digite a frase:\n"; getline(cin,s);
    map<char,int> cnt;
    for(char c: s) if(isalpha((unsigned char)c)) cnt[tolower(c)]++;
    for(auto &p:cnt) cout<<"'"<<p.first<<"' aparece "<<p.second<<" vezes\n";
}

