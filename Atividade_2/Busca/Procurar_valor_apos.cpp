#include <cstdlib>
#include <iostream>
#include <vector>

int procurar_valor_pos(int number, std::vector<int> vet, int pos_inicial)
{
    for (int x = pos_inicial + 1; x < vet.size(); x++){
        if (vet[x] == number){
            return x;
        }
    }
    return -1;
}

int main()
{
    int n, tamanho, pos_x;
    std::cout << "Digite o numero a ser procurado: " << "\n";
    std::cin >> n;
    std::cout << "Digite a posição inicial para a busca: " << "\n";
    std::cin >> pos_x;
    std::cout << "Digite o tamanho do vetor: " << "\n";
    std::cin >> tamanho;
    std::vector<int> fila {};

    for(int x = 0; x < tamanho; x++){
        int a;
        std::cout << "Digite a adicao ao vetor: " << "\n";
        std::cin >> a; 
        fila.push_back(a);  
    }

    std::cout << procurar_valor_pos(n, fila, pos_x) << "\n";
}