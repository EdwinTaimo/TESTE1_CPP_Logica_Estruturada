#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomeProduto[20];
    float precoProduto[20];

    cout << "=== Registo de Produtos do Supermercado ===" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Produto " << (i + 1) << ":" << endl;
        cout << "  Nome: ";
        cin.ignore();
        getline(cin, nomeProduto[i]);
        cout << "  Preco (MT): ";
        cin >> precoProduto[i];
    }

    char continuar = 's';
    while (continuar == 's' || continuar == 'S') {
        string busca;
        cout << "\n=== Pesquisa de Produto ===" << endl;
        cout << "Digite o nome do produto: ";
        cin.ignore();
        getline(cin, busca);

        bool encontrado = false;
        for (int i = 0; i < 20; i++) {
            if (nomeProduto[i] == busca) {
                encontrado = true;
                cout << "Produto: " << nomeProduto[i] << endl;
                cout << "Preco: " << precoProduto[i] << " MT" << endl;
                break;
            }
        }

        if (!encontrado) {
            cout << "Produto \"" << busca << "\" nao encontrado no sistema." << endl;
        }

        cout << "\nDeseja pesquisar outro produto? (s/n): ";
        cin >> continuar;
    }

    cout << "Obrigado por usar o sistema!" << endl;

    return 0;
}
