#include <iostream>
using namespace std;

int main() {
    int matricula;
    float n1, n2, n3, media = 0;
    int aprovados = 0, reprovados = 0, recuperacao = 0;
	bool quebraEscopo = true;
	
    while (quebraEscopo == true) {
        cout << "\n\nDigite a matricula do aluno: ";
        cin >> matricula;

        cout << "Digite as tres notas do aluno:" << endl;
        cout << "Nota 1: ";
        cin >> n1;
        cout << "Nota 2: ";
        cin >> n2;
        cout << "Nota 3: ";
        cin >> n3;

        // Condição de parada: se alguma nota for negativa
        if (n1 < 0 || n2 < 0 || n3 < 0) {
            cout << "\nMedia negativa detectada. Encerrando o programa." << endl;
            quebraEscopo = false;
        }

        media = (n1 + n2 + n3) / 3;

        // Contagem de status
        if (media >= 7) {
            aprovados++;
            cout << "Aluno foi aprovado!" << endl;
        } else if (media < 3) {
            reprovados++;
            cout << "Aluno foi reprovado!" << endl;
        } else {
            recuperacao++;
            cout << "Aluno esta de recuperacao!" << endl;
        }

        // Exibir matrícula com média acima de 9
        if (media > 9) {
            cout << "Aluno com matricula " << matricula << " obteve media superior a 9!" << endl;
        }
    }

    // Exibir resumo ao final
    cout << "\nResumo final da turma:" << endl;
    cout << "Aprovados: " << aprovados << endl;
    cout << "Reprovados: " << reprovados << endl;
    cout << "Recuperacao: " << recuperacao << endl;

    return 0;
}

