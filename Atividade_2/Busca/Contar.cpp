#include <cstdlib>
#include <iostream>
#include <vector>

int contar(int number, std::vector<int> vet)
{
    int counter = 0;
    for (int x = 0; x < vet.size(); x++){
        if (vet[x] == number){
            counter++;
        }
    }
    return counter;
}

int main()
{
    int n, tamanho;
    std::cout << "Digite o numero a ser procurado: " << "\n";
    std::cin >> n;
    std::cout << "Digite o tamanho do vetor: " << "\n";
    std::cin >> tamanho;
    std::vector<int> fila {};

    for(int x = 0; x < tamanho; x++){
        int a;
        std::cout << "Digite a adicao ao vetor: " << "\n";
        std::cin >> a; 
        fila.push_back(a);  
    }

    std::cout << contar(n, fila) << "\n";
}