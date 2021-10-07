#include <iostream>
#include<cstdlib>
#include<vector>
#include<sstream>

std::vector<int> clonar(std::vector<int> vet1)
{
    std::vector<int> vet2 {};
    for (int x = 0; x < vet1.size(); x++){
        vet2.push_back(vet1[x]);
    }
    return vet2;
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

    std::cout << "Digite o tamanho do vetor a ser copiado, seguido de seus elementos, separando-os por espaco:" << "\n";
    getline(std::cin, line);
    std::stringstream ss(line);
    int num;
    ss >> tamanho;

    while(vetor.size() < tamanho){
        ss >> num;
        vetor.push_back(num);
    }

    mostrar(vetor, "\nVetor: ");
    std::vector<int> clone = clonar(vetor);
    mostrar(clone, "Clone: ");
    
    return 0;
}