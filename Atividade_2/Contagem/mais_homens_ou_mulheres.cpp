#include <iostream>
#include <cstdlib>
#include <vector>

std::string homem_ou_mulher(std::vector<int> vet)
{
    int cont_h = 0;
    int cont_m = 0;
    for (int x = 0; x < vet.size(); x++){
        if (vet[x] < 0)
            cont_m++;
        else 
            cont_h++;
    }

    if (cont_h == cont_m)
        return "Mesma quantidade de homens e mulheres!";
    else if (cont_h > cont_m)
        return "Mais homens que mulheres!";
    else
        return "Mais mulheres que homens!"; 
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
    
    std::string balanco = homem_ou_mulher(fila);
    std::cout << "\na fila:" << "\n";
    for(int x = 0; x < fila.size(); x++){
        std::cout << fila[x] << " ";
    }

    std::cout << "\n" << balanco << "\n";
    return 0;
}