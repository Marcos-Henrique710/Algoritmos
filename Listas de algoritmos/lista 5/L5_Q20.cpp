/*
20. Recebe nome completo e apresenta ultimo nome, 1o nome -> "Ultimo, Primeiro"
*/
void q20(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; cout<<"Q20: digite o nome completo:\n"; getline(cin,s);
    stringstream ss(s); vector<string> parts; string w;
    while(ss>>w) parts.push_back(w);
    if(parts.empty()) { cout<<"Nome vazio\n"; return; }
    cout<<parts.back()<<", "<<parts.front()<<"\n";
}

