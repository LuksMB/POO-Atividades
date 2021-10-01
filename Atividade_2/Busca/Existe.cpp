#include <cstdlib>
#include <iostream>
#include <vector>

bool existir(int number, std::vector<int> arr)
{
    for (int x = 0; x < arr.size(); x++){
        if (arr[x] == number)
            return true;
    }
    return false;
}

int main(){ 
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
    
    bool boo = existir(n, fila);
    std::cout << boo << "\n";
    return 0;
}