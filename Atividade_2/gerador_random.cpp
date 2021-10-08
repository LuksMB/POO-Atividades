#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>

//GERADOR DE NÚMEROS PARA TESTES
using namespace std;

vector<int> gerar(int num, int ini, int ampli)
{
    vector<int> vet {};
    srand(time(0));
    int randomico;
    for (int x = 0; x < num; x++){
        int react = ini;
        if (react < 0)
            react *= -1;
        randomico = rand() % (ampli + 1 + react) + ini;
        vet.push_back(randomico);
    }
    return vet;
}

void mostrar(vector<int> vet, string nome)
{
    cout << nome << "\n";
    for (int x = 0; x < vet.size(); x++){
        cout << vet[x] << ' ';
    }
    cout << "\n\n";
    return;
}

int main()
{
    int n, min, max;
    cout << "Digite o numero de elementos da lista:" << '\n';
    cin >> n;
    cout << "Digite o valor minimo para elemento:" << '\n';
    cin >> min;
    cout << "Digite o valor maximo para elemento:" << '\n';
    cin >> max;
    vector<int> lista = gerar(n, min, max);
    mostrar(lista, "Vetor: ");

    return 0;
}