#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ItemSet {
private:
    vector<string> itens;

public:
    void inserir(const string& itemParaInserir) {
        for  (const string& item : itens) {
            if (item == itemParaInserir) {
                cout << "O item " << itemParaInserir << " já está na lista!" << endl;
                return;
            }
        }
        itens.push_back(itemParaInserir);
        cout << "O item " << itemParaInserir << " foi inserido com sucesso!" << endl;
    }

    void excluir(const string& itemParaExcluir) {
        for (auto it = itens.begin(); it != itens.end(); ++it) {
            if (*it == itemParaExcluir) {
                itens.erase(it);
                cout << "O item " << itemParaExcluir << " foi removido com sucesso!" << endl;
                return;
            }
        }
        cout << "O item " << itemParaExcluir << " não foi encontrado no conjunto." << endl;
    }

    void listarItens() const {
        cout << "Itens na lista:" << endl;
        for (const string& item : itens) {
            cout << item << endl;
        }
    }
};

int main() {
    ItemSet listaItens;

    listaItens.inserir("Iphone");
    listaItens.inserir("Samsung");
    listaItens.inserir("Notebook");

    listaItens.listarItens();

    listaItens.excluir("Iphone");

    listaItens.listarItens();

    listaItens.inserir("Ipad");
    listaItens.excluir("Samsung");

    listaItens.listarItens();

    return 0;
}
