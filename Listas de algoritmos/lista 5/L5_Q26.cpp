/*
26. Escrever string sem vogais
*/
void q26(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; cout<<"Q26: digite a string:\n"; getline(cin,s);
    string out; for(char c: s){ char lc = tolower((unsigned char)c); if(string("aeiou").find(lc)==string::npos) out+=c; }
    cout<<"Sem vogais: "<<out<<"\n";
}

