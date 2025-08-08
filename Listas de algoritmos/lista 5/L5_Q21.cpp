/*
21. Copia string para outra trocando caso da primeira letra
*/
void q21(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; cout<<"Q21: digite a string:\n"; getline(cin,s);
    string t = s;
    if(!s.empty() && islower((unsigned char)s[0])){ for(auto &ch:t) ch = toupper((unsigned char)ch); }
    else if(!s.empty() && isupper((unsigned char)s[0])){ for(auto &ch:t) ch = tolower((unsigned char)ch); }
    cout<<"Original: "<<s<<"\nCopia modificada: "<<t<<"\n";
}

