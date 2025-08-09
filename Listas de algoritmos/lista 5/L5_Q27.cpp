/*
27. Inverter cadeia (max 40)
*/
void q27(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s; 
    cout<<"digite uma string (max 40):\n";
    getline(cin,s);
    if(s.size()>40)
        s=s.substr(0,40);
    string r=s; 
    reverse(r.begin(), r.end());
    cout<<"Invertida: "<<r<<"\n";
}
