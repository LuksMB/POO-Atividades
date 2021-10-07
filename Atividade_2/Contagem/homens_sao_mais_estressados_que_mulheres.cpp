#include <iostream>
#include <cstdlib>
#include <vector>

std::string mulheres_homens_stress(std::vector<int> vet)
{
    float mediah = 0;
    float mediam = 0;
    int conth = 0;
    int contm = 0;
    for (int x = 0; x < vet.size(); x++){
        if (vet[x] < 0){
            mediam += vet[x] * -1;
            contm++;
        } else{ 
            mediah += vet[x];
            conth++;
        }
    }
    if (contm == 0)
        contm++;
    if (conth == 0)
        conth++;
    mediah = mediah / conth;
    mediam = mediam / contm;

    if (mediah == mediam)
        return "Empate";
    else if (mediah > mediam)
        return "Homens sao mais estressados";
    else
        return "Mulheres sao mais estressadas";
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
    
    std::string mulmens = mulheres_homens_stress(fila);
    std::cout << "\na fila:" << "\n";
    for(int x = 0; x < fila.size(); x++){
        std::cout << fila[x] << " ";
    }

    std::cout << "\n" << mulmens << "\n";
    return 0;
}