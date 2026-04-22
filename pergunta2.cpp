#include <iostream>
using namespace std;

int main() {
    int codigoProduto[10];
    int quantidadeStock[10];

    cout << "=== Registo de Produtos ===" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Produto " << (i + 1) << ":" << endl;
        cout << "  Codigo: ";
        cin >> codigoProduto[i];
        cout << "  Quantidade em stock: ";
        cin >> quantidadeStock[i];
    }

    int codigoBusca;
    cout << "\n=== Pesquisa de Produto ===" << endl;
    cout << "Digite o codigo do produto a pesquisar: ";
    cin >> codigoBusca;

    bool encontrado = false;
    for (int i = 0; i < 10; i++) {
        if (codigoProduto[i] == codigoBusca) {
            encontrado = true;
            cout << "\nProduto encontrado!" << endl;
            cout << "Codigo: " << codigoProduto[i] << endl;
            cout << "Quantidade disponivel: " << quantidadeStock[i] << " unidades" << endl;

            if (quantidadeStock[i] < 5) {
                cout << "*** AVISO: STOCK CRITICO! ***" << endl;
            }
            break;
        }
    }

    if (!encontrado) {
        cout << "Produto com codigo " << codigoBusca << " nao encontrado." << endl;
    }

    return 0;
}
