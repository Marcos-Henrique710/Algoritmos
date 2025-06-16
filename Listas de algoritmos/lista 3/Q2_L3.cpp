#include <iostream>
using namespace std;

int main() {
    int N;                            // Quantos motoristas vamos processar
    cout << "Quantos motoristas serao registrados? ";
    cin >> N;

    // Variáveis para o total geral de arrecadação
    float totalArrecadado = 0.0f;

    // Variáveis para rastrear o motorista com mais multas
    int carteiraMaisMultas = 0;
    int maiorNumMultas    = -1;

    // Laço principal, roda N vezes (uma vez por motorista)
    for (int i = 0; i < N; i++) {
        int numCarteira;
        int numMultas;

        cout << "\nMotorista #" << (i+1) << ":\n";
        cout << "  Numero da carteira: ";
        cin >> numCarteira;

        cout << "  Quantas multas esse motorista recebeu? ";
        cin >> numMultas;

        // Soma das multas deste motorista
        float somaMultasMotorista = 0.0f;

        // Lê o valor de cada multa e acumula na soma deste motorista
        for (int j = 0; j < numMultas; j++) {
            float valor;
            cout << "    Valor da multa " << (j+1) << ": ";
            cin >> valor;
            somaMultasMotorista += valor;
        }

        // Imprime o débito acumulado deste motorista
        cout << "  -> Divida do motorista " << numCarteira
             << " = R$ " << somaMultasMotorista << "\n";

        // Atualiza o total geral de arrecadação
        totalArrecadado += somaMultasMotorista;

        // Atualiza o motorista com maior número de multas, se for o caso
        if (numMultas > maiorNumMultas) {
            maiorNumMultas    = numMultas;
            carteiraMaisMultas = numCarteira;
        }
    }

    // Após processar todos os motoristas, mostramos:
    // 1) total de recursos arrecadados
    // 2) carteira daquele que teve mais infrações
    cout << "\nResumo Final:\n";
    cout << "Total arrecadado pelo DETRAN = R$ " << totalArrecadado << "\n";
    cout << "Carteira com mais multas = " << carteiraMaisMultas
         << " (total de " << maiorNumMultas << " multas)\n";

    return 0;
}

