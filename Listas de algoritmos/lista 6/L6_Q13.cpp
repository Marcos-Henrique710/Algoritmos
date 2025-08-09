/*
11. tAluno e tDisciplina com menu complexo (resumido funcional)
*/
struct tAluno{ 
string nome;
int matriculaDoAluno; 
};
struct tDisciplina{
int matriculaDoAluno;
string disciplina; 
float nota1; 
float nota2;
float media;
};
void q11(){
    vector<tAluno> alunos(3);
    for(int i=0;i<3;i++){
        cout<<"nome matricula\n";
        cin>>alunos[i].nome>>alunos[i].matriculaDoAluno;
    }
    vector<tDisciplina> disps;
    disps.reserve(12);
    for(int a=0;a<3;a++){
        for(int d=0;d<4;d++){ 
            tDisciplina td;
            td.matriculaDoAluno=alunos[a].matriculaDoAluno; 
            cout<<"disc nota1 nota2\n";
            cin>>td.disciplina>>td.nota1>>td.nota2; 
            td.media=(td.nota1+td.nota2)/2.0;
            disps.push_back(td);
        }
    }
    cout<<"Menu simplificado: 1-exibir aluno por matricula, 2-exibir maior media, 3-media das medias por aluno, 4-alunos por disciplina\n";
    int op;
    cin>>op;
    if(op==1){ 
        int m;
        cout<<"matricula? ";
        cin>>m;
        for(auto &al:alunos) 
            if(al.matriculaDoAluno==m){
                cout<<al.nome<<"\n";
                for(auto &d:disps) 
                    if(d.matriculaDoAluno==m)
                        cout<<d.disciplina<<" "<<d.media<<"\n";
            }
    }
    else if(op==2){ 
        float best=-1;
        int bestMat=0; 
        string bestDisc; 
        for(auto &d:disps)
            if(d.media>best){ 
                best=d.media;
                bestMat=d.matriculaDoAluno; 
                bestDisc=d.disciplina;
            } 
        string name=\"\"; 
        for(auto &a:alunos) 
            if(a.matriculaDoAluno==bestMat) 
                name=a.nome;
        cout<<\"Maior media: \"<<best<<\" aluno: \"<<name<<\" disc: \"<<bestDisc<<\"\\n\";
            }
    else if(op==3){ 
    for(auto &a:alunos){
        float sum=0;
        int cnt=0; 
        for(auto &d:disps)
            if(d.matriculaDoAluno==a.matriculaDoAluno){
                sum+=d.media; cnt++;
        }
    }
        cout<<a.nome<<\" media das medias: \"<<(cnt?sum/cnt:0)<<\"\\n\"; 
    }
    else if(op==4){ 
        string disc;
        cout<<\"disc? \"; 
        cin>>disc;
        for(auto &d:disps)
            if(d.disciplina==disc){
                for(auto &a:alunos)
                    if(a.matriculaDoAluno==d.matriculaDoAluno)
                        cout<<a.nome<<\"\\n\"; 
            }
    }
}
