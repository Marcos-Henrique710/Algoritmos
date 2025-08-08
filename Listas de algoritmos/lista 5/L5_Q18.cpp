/*
18. Junta duas strings A e B em C
*/
void q18(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string A,B; cout<<"Q18: digite A:\n"; getline(cin,A); cout<<"Digite B:\n"; getline(cin,B);
    string C = A + (A.size()? " " : "") + B;
    cout<<"C: "<<C<<"\n";
}

