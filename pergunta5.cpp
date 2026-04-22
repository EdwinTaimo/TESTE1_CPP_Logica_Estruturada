#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[8];
    float tempos[8];

    cout << "=== Registo de Atletas ===" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Atleta " << (i + 1) << ":" << endl;
        cout << "  Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "  Tempo de corrida (segundos): ";
        cin >> tempos[i];
    }

    // Bubble Sort - ordena do mais rapido (menor tempo) para o mais lento (maior tempo)
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (tempos[j] > tempos[j + 1]) {
                // Troca os tempos
                float tempTempo = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = tempTempo;

                // Troca os nomes correspondentes
                string tempNome = nomes[j];
                nomes[j] = nomes[j + 1];
                nomes[j + 1] = tempNome;
            }
        }
    }

    cout << "\n=== Classificacao Final (Mais Rapido -> Mais Lento) ===" << endl;
    cout << "Pos | Nome                     | Tempo (s)" << endl;
    cout << "----|--------------------------|----------" << endl;
    for (int i = 0; i < 8; i++) {
        cout << " " << (i + 1) << "  | ";
        cout.width(24);
        cout << left << nomes[i] << " | " << tempos[i] << "s" << endl;
    }

    cout << "\nVencedor: " << nomes[0] << " com " << tempos[0] << " segundos!" << endl;

    return 0;
}
