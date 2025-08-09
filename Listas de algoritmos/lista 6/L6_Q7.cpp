/*
7. Registro cliente banco e menu (15 clientes): cadastrar, imprimir por CPF, imprimir negativos
*/
struct Endereco{
string rua;
int numero; 
string bairro;
string cidade; 
string estado;
};
struct Pessoa{
string nome; 
Endereco ender;
string telefone;
int idade; 
};
void q9_helper(){ 
