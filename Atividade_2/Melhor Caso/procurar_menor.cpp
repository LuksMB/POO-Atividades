#include <cstdlib>
#include <iostream>
#include <vector>

int procurar_menor(std::vector<int> vet)
{
    int menor = 1000;
    for(int x = 0; x < vet.size(); x++){
        if (vet[x] < menor){
            menor = vet[x];
        }
    }
    return menor;
}

int main(){ 
    int tamanho;
    std::cout << "Digite o tamanho do vetor: " << "\n";
    std::cin >> tamanho;
    std::vector<int> fila {};

    for(int x = 0; x < tamanho; x++){
        int a;
        std::cout << "Digite a adicao ao vetor: " << "\n";
        std::cin >> a;
        fila.push_back(a);  
    }
    
    std::cout << "a fila:" << "\n";
    for(int x = 0; x < fila.size(); x++){
        std::cout << fila[x] << " ";
    }
    std::cout << "\n";

    int menor = procurar_menor(fila);
    std::cout << "o menor e ---> " << menor << "\n";
    return 0;
}