#include "Museum.h"

Museum::Museum() {
}

void Museum::FillStable(int CountElements, const std::vector<std::string>& exhibitNames, const std::vector<std::string>& eras) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int x = 0; x < CountElements; ++x) {
        if (x == 0 && Id.size() != 0) {
            Id.push_back(x + Id[Id.size() - 1]);
        }
        else {
            Id.push_back(x);
        }

        ExhibitName.push_back(exhibitNames[std::rand() % exhibitNames.size()]);
        Era.push_back(eras[std::rand() % eras.size()]);
    }
}

int Museum::Search(std::string Word) {
    std::vector<int> ids = GetId();
    for (int x = 0; x < ids.size(); ++x) {
        if (ExhibitName[x] == Word || Era[x] == Word) {
            return ids[x];
        }
    }
    std::cout << "I can't find it\n";
    return NULL;
}

void Museum::Print() {
    std::vector<int> Id = GetId();
    for (int x = 0; x < Id.size(); ++x) {
        std::cout << " Index: " << Id[x] << " Exhibit: " << ExhibitName[x] << "    " << "Era: " << Era[x] << "\n";
    }
}

void Museum::Print(int Id) {
    if (Id == NULL) { return; }
    std::cout << " Index: " << Id << " Exhibit: " << ExhibitName[Id] << "    " << "Era: " << Era[Id] << "\n";
}
