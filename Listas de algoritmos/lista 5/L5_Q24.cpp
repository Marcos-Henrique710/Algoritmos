/*
24. Codigo de Cesar (n posicoes)
*/
void q24(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int n; cout<<"Q24: digite n (shift): "; cin>>n; cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; cout<<"Digite a string:\n"; getline(cin,s);
    for(char &c: s){
        if(isalpha((unsigned char)c)){
            char base = isupper((unsigned char)c)?'A':'a';
            c = char(base + ( (c-base)+n + 26 )%26 );
        }
    }
    cout<<"Codificada: "<<s<<"\n";
}

