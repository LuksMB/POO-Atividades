#include <cstdlib>
#include <iostream>
#include <vector>

int procurar_valor(int number, std::vector<int> vet)
{
    
    for (int x = 0; x < vet.size(); x++){
        if (vet[x] == number){
            return x;
        }
    }
    return -1;
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

    std::cout << procurar_valor(n, fila) << "\n";
}