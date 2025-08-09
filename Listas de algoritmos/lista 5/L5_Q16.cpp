/*
16. Verificar se palavra está contida em frase (strings)
*/
void q16(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string frase, palavra;
    cout<<"Q16: digite a frase:\n"; 
    getline(cin, frase);
    cout<<"Digite a palavra:\n"; 
    getline(cin, palavra);
    if(frase.find(palavra)!=string::npos) 
        cout<<"A palavra \""<<palavra<<"\" esta contida na frase.\n";
    else 
        cout<<"A palavra nao esta contida na frase.\n";
}

