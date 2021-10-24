#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>

std::vector<int> apaziguar(std::vector<int> vetor)
{
    int contador = 0;
    std::vector<int> vet_novo;
    for (int x = 0; x < vetor.size(); x++){
        if (x == 0){
            if (abs(vetor[x+1]) < 10 && abs(vetor[x]) > 80)
                vet_novo.push_back(x);

        } else if (x == vetor.size() - 1){
            if (abs(vetor[x-1]) < 10 && abs(vetor[x]) > 80)
                vet_novo.push_back(x);
                
        } else {
            if ((abs(vetor[x-1]) < 10 || abs(vetor[x+1]) < 10) && (abs(vetor[x]) > 80))
                vet_novo.push_back(x);
        }
    }
    return vet_novo;
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

    std::vector<int> apaziguados = apaziguar(vet);
    
    if (apaziguados.size() == 0){
        std::cout << "Ninguém foi apaziguado. " << "\n";
    } else {
        mostrar(apaziguados, "Posicao das pessoas apaziguadas: ");
    }
    
    return 0;
}