#pragma once

#include "Inventorization.h"
#include <vector>
#include <string>

class Zoo : public Inventorization {

    friend class UsefulClass;
private:
    std::vector<std::string> Name;
    std::vector<std::string> OriginCountry;

public:
    Zoo();
    virtual void FillStable(int CountElements, const std::vector<std::string>& names, const std::vector<std::string>& countries) override;
    int Search(std::string Word);
    virtual void Print() override;
    void Print(int Id);
};
