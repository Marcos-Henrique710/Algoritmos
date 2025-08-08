/*
29. Recombinação (crossover) entre S1 e S2 em ponto P aleatório
*/
void q29(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s1,s2; cout<<"Q29: S1:\n"; getline(cin,s1); cout<<"S2:\n"; getline(cin,s2);
    srand(time(NULL));
    int p1 = rand() % (s1.size()+1);
    int p2 = rand() % (s2.size()+1);
    string s3 = s1.substr(0,p1) + s2.substr(p2);
    string s4 = s2.substr(0,p2) + s1.substr(p1);
    cout<<"Pontos: "<<p1<<","<<p2<<"\nS3: "<<s3<<"\nS4: "<<s4<<"\n";
}

