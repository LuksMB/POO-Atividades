#include <iostream>
#include <cstdlib>
#include <vector>

float media_stress(std::vector<int> vet)
{
    float media = 0;
    for (int x = 0; x < vet.size(); x++){
        if (vet[x] < 0)
            media += vet[x] * -1;
        else 
            media += vet[x];
    }
    media = media / vet.size();
    return media;
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
    
    int media_s = media_stress(fila);
    std::cout << "\na fila:" << "\n";
    for(int x = 0; x < fila.size(); x++){
        std::cout << fila[x] << " ";
    }

    std::cout << "\n\na media de stress desse grupo eh: " << media_s << "\n";
    return 0;
}