#include <iostream>
#include<cstdlib>
#include<vector>
#include<sstream>

void reverter(std::vector<int>& vet)
{
    int tamanho = vet.size();
    int temp;
    for (int x = 0; x < (tamanho / 2); x++){
        temp = vet[x];
        vet[x] = vet[ (tamanho - 1) - x ];
        vet[ (tamanho - 1) - x ] = temp;
    }
    return;
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
    reverter(vetor);
    mostrar(vetor, "Invertido: ");
    
    return 0;
}