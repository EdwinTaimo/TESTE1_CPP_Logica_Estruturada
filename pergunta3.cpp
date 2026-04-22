#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[15];
    float medias[15];

    cout << "=== Registo de Notas da Turma ===" << endl;
    for (int i = 0; i < 15; i++) {
        cout << "Aluno " << (i + 1) << ":" << endl;
        cout << "  Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "  Media final: ";
        cin >> medias[i];
    }

    int aprovados = 0;

    cout << "\n=== Alunos Aprovados (Nota >= 10) ===" << endl;
    for (int i = 0; i < 15; i++) {
        if (medias[i] >= 10) {
            cout << "- " << nomes[i] << " (Media: " << medias[i] << ")" << endl;
            aprovados++;
        }
    }

    float percentagem = ((float)aprovados / 15) * 100;

    cout << "\n=== Resumo ===" << endl;
    cout << "Total de alunos: 15" << endl;
    cout << "Alunos aprovados: " << aprovados << endl;
    cout << "Percentagem de aprovacao: " << percentagem << "%" << endl;

    return 0;
}
