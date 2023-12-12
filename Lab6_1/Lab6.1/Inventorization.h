#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Inventorization {
private:
    std::vector<std::string> Type;
    std::vector<std::string> Company;

protected:
    std::vector<int> Id;

public:

    Inventorization();
    virtual void FillStable(int CountElement, const std::vector<std::string>& types, const std::vector<std::string>& companies);
    virtual void Print();
    virtual int Search(std::string& Word);
    std::vector<int> GetId() { return Id; };
};