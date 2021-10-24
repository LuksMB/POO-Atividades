#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>

int briga(std::vector<int> vetor)
{
    int contador = 0;
    for (int x = 0; x < vetor.size(); x++){
        if ((x > 0 && x < (vetor.size() - 1)) && (abs(vetor[x-1]) > 30 && abs(vetor[x+1]) > 30) && (abs(vetor[x]) > 50))
            contador++;
    }
    return contador;
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
    std::string line;
    std::cout << "Digite o numero de elementos e depois os elementos separados por espaco:" << "\n";
    getline(std::cin, line);
    std::stringstream fluxo(line);

    int num, tamanho;
    std::vector<int> vet{}; 
    fluxo >> tamanho;

    while (vet.size() < tamanho)
    {
        fluxo >> num;
        vet.push_back(num);
    }

    int ocorrencias = briga(vet);
    
    std::cout << "Numero de brigas: " << ocorrencias << "\n";
    return 0;
}