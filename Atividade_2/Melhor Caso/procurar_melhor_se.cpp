#include <cstdlib>
#include <iostream>
#include <vector>

int procurar_homem_calmo(std::vector<int> vet)
{
    int pos = -1, menor = 100;
    for(int x = 0; x < vet.size(); x++){
        if (vet[x] < menor && vet[x] > 0){
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
    
    int calminho = procurar_homem_calmo(fila);
    std::cout << "a fila:" << "\n";
    for(int x = 0; x < fila.size(); x++){
        std::cout << fila[x] << " ";
    }
    std::cout << "\n";
    std::cout << "o homem mais calmo esta na posicao: " << calminho << "\n";
    return 0;
}