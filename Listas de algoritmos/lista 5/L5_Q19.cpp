/*
19. Escrever string espelhada
*/
void q19(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; cout<<"Q19: digite a string:\n"; getline(cin,s);
    string r = s; reverse(r.begin(), r.end());
    cout<<"Invertida: "<<r<<"\n";
}

