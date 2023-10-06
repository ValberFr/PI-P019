#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class ConjuntoItens {
private:
    vector<string> itens;

public:
    ConjuntoItens() {}

    ConjuntoItens(const vector<string>& it) : itens(it) {}

    ConjuntoItens(const ConjuntoItens& outro) : itens(outro.itens) {}

    void inserir(const string& item) {
        if (!contem(item)) {
            itens.push_back(item);
        }
    }

    void excluir(const string& item) {
        for (auto it = itens.begin(); it != itens.end(); ++it) {
            if (*it == item) {
                itens.erase(it);
                break;
            }
        }
    }

    