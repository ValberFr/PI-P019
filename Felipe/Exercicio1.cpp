#include <iostream>
#include <vector>
using namespace std;

class ItemSet {
private:
    vector<string> itens;

public:
    void inserir(string s) {
        for (const string& item : itens) {
            if (item == s) {
                cout << "Item \"" << s << "\" já existe no conjunto. Não foi inserido novamente." << endl;
                return;
            }
        }
        itens.push_back(s);
        cout << "Item \"" << s << "\" inserido no conjunto." << endl;
    }

    void excluir(string s) {
        for (auto it = itens.begin(); it != itens.end(); ++it) {
            if (*it == s) {
                itens.erase(it);
                cout << "Item \"" << s << "\" excluído do conjunto." << endl;
                return;
            }
        }
        cout << "Item \"" << s << "\" não encontrado no conjunto. Nada foi excluído." << endl;
    }

    vector<string> getItens() const {
        return itens;
    }
};

int main() {
    ItemSet conjunto;
    conjunto.inserir("item1");
    conjunto.inserir("item2");
    conjunto.inserir("item3");
    conjunto.inserir("item2");  
    conjunto.excluir("item2");

    vector<string> itens = conjunto.getItens();
    if (itens.empty()) {
        cout << "O conjunto está vazio." << endl;
    } else {
        cout << "Itens no conjunto:";
        for (const string& item : itens) {
            cout << " " << item;
        }
        cout << endl;
    }

    return 0;
}
