#pragma once

#include "Inventorization.h"

class Museum : protected Inventorization {
private:
    std::vector<std::string> ExhibitName;
    std::vector<std::string> Era;

public:
    Museum();
    void FillStable(int CountElements, const std::vector<std::string>& exhibitNames, const std::vector<std::string>& eras) override;
    int Search(std::string Word);
    void Print() override;
    void Print(int Id);
};
