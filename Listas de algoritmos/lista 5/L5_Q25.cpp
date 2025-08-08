/*
25. Palindromo?
*/
void q25(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; cout<<"Q25: digite a string:\n"; getline(cin,s);
    string filt; for(char c: s) if(isalnum((unsigned char)c)) filt+=tolower(c);
    string r=filt; reverse(r.begin(), r.end());
    cout<<(r==filt?"Eh palindromo\n":"Nao eh palindromo\n");
}

