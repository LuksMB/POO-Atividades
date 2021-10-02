#include <iostream>
#include <cstdlib>
#include <vector>

std::string metade_mais_estressada(std::vector<int> vet)
{
    float media1 = 0;
    float media2 = 0;
    for (int x = 0; x < vet.size(); x++){
        if (x < (vet.size() / 2)){
            if (vet[x] < 0)
                media1 += vet[x] * -1;
            else 
                media1 += vet[x];
        } else {
            if (vet[x] < 0)
                media2 += vet[x] * -1;
            else 
                media2 += vet[x];
        }
    }

    if (media1 == media2)
        return "Mesma quantidade de stress";
    else if (media1 > media2)
        return "A primeira metade eh mais estressada";
    else
        return "A segunda metade eh mais estressada";
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
    
    std::string met = metade_mais_estressada(fila);
    std::cout << "\na fila:" << "\n";
    for(int x = 0; x < fila.size(); x++){
        std::cout << fila[x] << " ";
    }

    std::cout << "\n" << met << "\n";
    return 0;
}