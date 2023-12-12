#include "Inventorization.h"

Inventorization::Inventorization() {
    std::cout << " I am live \n";
}


void Inventorization::FillStable(int CountElements, const std::vector<std::string>& types, const std::vector<std::string>& companies) {
    if (types.size() != companies.size()) {
        std::cerr << "Types and Companies sizes should match!" << std::endl;
        return;
    }

    Id.clear();
    Type.clear();
    Company.clear();

    std::srand(std::time(NULL));

    for (int x = 0; x < CountElements; ++x) {
        if (x == 0 && Id.size() != 0) {
            Id.push_back(x + Id[Id.size() - 1]);
        } else {
            Id.push_back(x);
        }
        Type.push_back(types[std::rand() % types.size()]);
        Company.push_back(companies[std::rand() % companies.size()]);
    }
}


void Inventorization::Print() {
    for (int x = 0; x < Id.size(); ++x) {
        std::cout << "\n Index: " << Id[x] << " Type: " << Type[x] << " Company: " << Company[x] << "\n";
    }
}


int Inventorization::Search(std::string& Word) {

    for (int x = 0; x < Id.size(); ++x) {
        if (Type[x] == Word || Company[x] == Word) {
            return Id[x];
        }
    }
    std::cout << " I can't find it \n";
    return -1;
}