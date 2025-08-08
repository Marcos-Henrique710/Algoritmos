/*
5. Calculadora usando registro
*/
struct Calc{ double a,b; char op; double res; };
Calc calcula(Calc c){ switch(c.op){ case '+': c.res = c.a + c.b; break; case '-': c.res = c.a - c.b; break; case '*': c.res = c.a * c.b; break; case '/': c.res = (c.b==0?0:c.a/c.b); break; } return c; }
void q5(){ Calc c; cin>>c.a>>c.b>>c.op; c = calcula(c); cout<<\"Resultado: \"<<c.res<<\"\\n\"; }

