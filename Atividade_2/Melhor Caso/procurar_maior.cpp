#include <cstdlib>
#include <iostream>
#include <vector>

int procurar_maior(std::vector<int> vet)
{
    int maior = -1;
    for(int x = 0; x < vet.size(); x++){
        if (vet[x] > maior){
            maior = vet[x];
        }
    }
    return maior;
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

    int maior = procurar_maior(fila);
    std::cout << "o maior e ---> " << maior << "\n";
    return 0;
}