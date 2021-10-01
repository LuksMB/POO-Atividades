#include <cstdlib>
#include <iostream>
#include <vector>

int procurar_menor_pos(std::vector<int> vet)
{
    int menor = 1000;
    int pos = -1;
    for(int x = 0; x < vet.size(); x++){
        if (vet[x] < menor){
            menor = vet[x];
            pos = x;
        }
    }
    return pos;
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

    int pos = procurar_menor_pos(fila);
    std::cout << "a posicao do menor eh ---> " << pos << "\n";
    return 0;
}