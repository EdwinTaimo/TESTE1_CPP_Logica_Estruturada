#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string nomeItem[5];
    float precoUnitario[5];
    int quantidadeComprada[5];
    float subtotal[5];

    cout << "=== Registo de Itens da Fatura ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Item " << (i + 1) << ":" << endl;
        cout << "  Nome: ";
        cin.ignore();
        getline(cin, nomeItem[i]);
        cout << "  Preco unitario (MT): ";
        cin >> precoUnitario[i];
        cout << "  Quantidade: ";
        cin >> quantidadeComprada[i];
        subtotal[i] = precoUnitario[i] * quantidadeComprada[i];
    }

    float totalFatura = 0;
    for (int i = 0; i < 5; i++) {
        totalFatura += subtotal[i];
    }

    cout << "\n========================================" << endl;
    cout << "               FATURA                  " << endl;
    cout << "========================================" << endl;
    cout << left << setw(20) << "Item"
         << setw(10) << "Preco"
         << setw(10) << "Qtd"
         << setw(12) << "Subtotal" << endl;
    cout << "------" << endl;

    for (int i = 0; i < 5; i++) {
        cout << left << setw(20) << nomeItem[i]
             << setw(10) << precoUnitario[i]
             << setw(10) << quantidadeComprada[i]
             << setw(12) << subtotal[i] << " MT" << endl;
    }

    cout << "-----" << endl;
    cout << "Total da Fatura: " << totalFatura << " MT" << endl;

    if (totalFatura > 1000) {
        float desconto = totalFatura * 0.10;
        float totalComDesconto = totalFatura - desconto;
        cout << "Desconto (10%): -" << desconto << " MT" << endl;
        cout << "Total com desconto: " << totalComDesconto << " MT" << endl;
    } else {
        cout << "(Sem desconto aplicado. Desconto ativo para compras acima de 1000 MT)" << endl;
    }
    cout << "===================" << endl;

    return 0;
}
