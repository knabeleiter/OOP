#pragma once

#include "Zoo.h"

class BotanicalGarden : public Zoo {
private:
    std::vector<std::string> PlantName;
    std::vector<std::string> Region;

public:
    BotanicalGarden();
    void FillStable(int CountElements, const std::vector<std::string>& plantNames, const std::vector<std::string>& regions) override;
    int Search(std::string Word);
    void Print() override;
    void Print(int Id);
};
