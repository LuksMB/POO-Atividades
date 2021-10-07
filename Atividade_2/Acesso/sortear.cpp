#include <iostream>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <ctime>

int sortear(std::vector<int> vet)
{
    int tamanho = vet.size();
    int sorte = rand() % tamanho;
    int num = vet[sorte];
    return num;
}

void mostrar(std::vector<int> vet, std::string nome)
{
    std::cout << nome << "\n";
    for (int x = 0; x < vet.size(); x++){
        std::cout << vet[x] << ' ';
    }
    std::cout << "\n\n";
    return;
}

int main()
{
    std::srand(std::time(0));
    int tamanho;
    std::vector<int> vetor {};
    std::string line;

    std::cout << "Digite o tamanho do vetor, seguido de seus elementos, separando-os por espaco:" << "\n";
    getline(std::cin, line);
    std::stringstream ss(line);
    int num;
    ss >> tamanho;

    while(vetor.size() < tamanho){
        ss >> num;
        vetor.push_back(num);
    }

    mostrar(vetor, "\nVetor: ");
    int sorteado = sortear(vetor);
    std::cout << "O numero sorteado  foi o " << std::to_string(sorteado) << '\n';
    
    return 0;
}