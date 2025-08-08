/*
8. Situacao do aluno com ponteiro para media
*/
char situacao(float p1,float p2,float p3,int faltas,int aulas,float *media){
    *media = (p1+p2+p3)/3.0f;
    if(faltas > aulas*0.25) return 'F';
    if(*media >= 6.0) return 'A';
    return 'R';
}
void q8(){ float p1,p2,p3; int faltas,aulas; cin>>p1>>p2>>p3>>faltas>>aulas; float m; char s = situacao(p1,p2,p3,faltas,aulas,&m); cout<<fixed<<setprecision(1)<<m<<\" \"; if(s=='A') cout<<\"APROVADO\\n\"; else if(s=='R') cout<<\"REPROVADO\\n\"; else cout<<\"REPROVADO POR FALTAS\\n\"; }

