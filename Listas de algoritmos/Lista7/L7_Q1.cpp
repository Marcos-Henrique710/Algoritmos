/*
1. Duas provas e dois trabalhos, média usando as duas maiores (duas funções)
*/
int maior(int a,int b){ return a>b?a:b; }
double media_das_maiores(int n1,int n2,int n3,int n4){
    vector<int> v = {n1,n2,n3,n4};
    sort(v.begin(), v.end(), greater<int>());
    return (v[0]+v[1])/2.0;
}
void q1(){ int a,b,c,d; cout<<\"Digite 4 notas: \"; cin>>a>>b>>c>>d; cout<<\"Media das duas maiores: \"<<media_das_maiores(a,b,c,d)<<\"\\n\"; }

