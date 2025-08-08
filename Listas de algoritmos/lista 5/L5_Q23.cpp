/*
23. Leia duas strings e diga se sao iguais (sem usar strcmp)
*/
void q23(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string a,b; cout<<"Q23: digite string A:\n"; getline(cin,a); cout<<"Digite string B:\n"; getline(cin,b);
    if(a.size()!=b.size()) cout<<"Diferentes\n"; else{ bool eq=true; for(size_t i=0;i<a.size();i++) if(a[i]!=b[i]){ eq=false; break; } cout<<(eq?"Iguais\n":"Diferentes\n"); }
}

