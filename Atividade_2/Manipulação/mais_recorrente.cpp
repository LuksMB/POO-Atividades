#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>

bool pertence(int number, std::vector<int> arr)
{
    for (int x = 0; x < arr.size(); x++){
        if (arr[x] == number)
            return true;
    }
    return false;
}

int contar(std::vector<int> vet1, int elem)
{
    int contador = 0;
    for (int x = 0; x < vet1.size(); x++){
        if (vet1[x] == elem || vet1[x] == (-1 * elem)){
            contador++;
        }
    }
    return contador;
}

std::vector<int> isolar(std::vector<int> vetor)
{
    std::vector<int> recorrentes{};
    int cont = 0, maior = -1, representante;
    for (int x = 0; x < vetor.size(); x++){
        cont = contar(vetor, vetor[x]);

        if (vetor[x] < 0)
            representante = -1 * vetor[x];
        else
            representante = vetor[x];
        
        if (cont == maior && !pertence(representante, recorrentes)){
            recorrentes.push_back(representante);
        }
        else if (cont > maior){
            recorrentes.clear();
            recorrentes.push_back(representante);
        }
        maior = cont;
    }
    return recorrentes;
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

    std::vector<int> solo = isolar(vet);
    mostrar(solo, "Sozinhos: ");
    return 0;
}