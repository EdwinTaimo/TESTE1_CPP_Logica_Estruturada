
#include <iostream>
using namespace std;

int main() {
    float temperaturas[7];
    string dias[7] = {"Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"};

    cout << " ||Registo Semanais de Temperaturas|| " << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Temperatura de " << dias[i] << ": ";
        cin >> temperaturas[i];
    }

    float soma = 0;
    float maxTemp = temperaturas[0];
    int diaMaisQuente = 0;

    for (int i = 0; i < 7; i++) {
        soma += temperaturas[i];
        if (temperaturas[i] > maxTemp) {
            maxTemp = temperaturas[i];
            diaMaisQuente = i;
        }
    }

    float media = soma / 7;

    cout << "\n|= Resultados =|" << endl;
    cout << "Media semanal: " << media << " graus" << endl;
    cout << "Temperatura mais alta: " << maxTemp << " graus" << endl;
    cout << "Dia mais quente: " << dias[diaMaisQuente] << endl;

    return 0;
}
