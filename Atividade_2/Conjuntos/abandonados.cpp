#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> abandonados(vector<int> vet1)
{
    vector<int> vet2 {};
    vector<int> vet3 {};
    int achou = 0;
    for (int x = 0; x < vet1.size(); x++){
        for (int y = 0; y < vet2.size(); y++){
            if (vet1[x] == vet2[y]){
                achou = 1;
                vet3.push_back(vet1[x]);
                break;
            }
        }
        if (achou == 1){
            achou = 0;
            continue;
        } else {
            vet2.push_back(vet1[x]);
        }
    }
    return vet3;
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
    int tamanho;
    vector<int> vetor {};
    string line;

    cout << "Digite o tamanho do vetor, seguido de seus elementos, separando-os por espaco:" << "\n";
    getline(cin, line);
    stringstream ss(line);
    int num;
    ss >> tamanho;

    while(vetor.size() < tamanho){
        ss >> num;
        vetor.push_back(num);
    }

    mostrar(vetor, "\nVetor: ");
    vector<int> abandono = abandonados(vetor);
    mostrar(abandono, "Vetor com abandonados: ");

    return 0;
}