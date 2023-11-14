#include "Zoo.h"

Zoo::Zoo() {
}

void Zoo::FillStable(int CountElements, const std::vector<std::string>& names, const std::vector<std::string>& countries) {

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int x = 0; x < CountElements; ++x) {

        if (x == 0 && Id.size() != 0) {
            Id.push_back(x + Id[Id.size() - 1]);
        }
        else {
            Id.push_back(x);
        }

        Name.push_back(names[std::rand() % names.size()]);
        OriginCountry.push_back(countries[std::rand() % countries.size()]);
    }
}

int Zoo::Search(std::string Word) {
    std::vector<int> Id = GetId();
    for (int x = 0; x < Id.size(); ++x) {
        if (Name[x] == Word || OriginCountry[x] == Word) {
            return Id[x];
        }
    }
    std::cout << " I can't find it \n";
    return NULL;
}

void Zoo::Print() {
    std::vector<int> Id = GetId();
    for (int x = 0; x < Id.size(); ++x) {
        std::cout << " Index: " << Id[x] << " Animal: " << Name[x] << "    " << " Country of birth: " << OriginCountry[x] << "\n";
    }
}

void Zoo::Print(int Id) {
    if (Id == NULL) { return; }
    std::cout << " Index: " << Id << " Animal: " << Name[Id] << "    " << " Country of birth: " << OriginCountry[Id] << "\n";
}
    