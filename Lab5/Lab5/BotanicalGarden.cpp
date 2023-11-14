#include "BotanicalGarden.h"

BotanicalGarden::BotanicalGarden() {
}

void BotanicalGarden::FillStable(int CountElements, const std::vector<std::string>& plantNames, const std::vector<std::string>& regions) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int x = 0; x < CountElements; ++x) {
        if (x == 0 && Id.size() != 0) {
            Id.push_back(x + Id[Id.size() - 1]);
        }
        else {
            Id.push_back(x);
        }

        PlantName.push_back(plantNames[std::rand() % plantNames.size()]);
        Region.push_back(regions[std::rand() % regions.size()]);
    }
}

int BotanicalGarden::Search(std::string Word) {
    std::vector<int> Id = GetId();
    for (int x = 0; x < Id.size(); ++x) {
        if (PlantName[x] == Word || Region[x] == Word) {
            return Id[x];
        }
    }
    std::cout << " I can't find it \n";
    return NULL;
}

void BotanicalGarden::Print() {
    std::vector<int> Id = GetId();
    for (int x = 0; x < Id.size(); ++x) {
        std::cout << " Index: " << Id[x] << " Plant: " << PlantName[x] << "    " << " Region: " << Region[x] << "\n";
    }
}

void BotanicalGarden::Print(int Id) {
    if (Id == NULL) { return; }
    std::cout << " Index: " << Id << " Plant: " << PlantName[Id] << "    " << "Region: " << Region[Id] << "\n";
}
