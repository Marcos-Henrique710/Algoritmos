/*
22. Escreve frase completa e palavras em posicoes impares (1a,3a,...)
*/
void q22(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; cout<<"digite uma frase:\n"; 
    getline(cin,s);
    cout<<"Frase completa: "<<s<<"\n";
    stringstream ss(s); 
    string w; 
    int idx=1;
    string out;
    while(ss>>w){ 
        if(idx%2==1){ 
            if(!out.empty()) 
                out+=" "; 
            out+=w; 
        } 
        idx++;
    }
    cout<<"Palavras em posicoes impares: "<<out<<"\n";
}
