#include "UsefulClass.h"

void UsefulClass::PrintZoo(Zoo& zoo) {
    std::vector<int> ids = zoo.GetId();

    for (int id : ids) {
        zoo.Print(id);
    }
}

void UsefulClass::ZooPrivateData(Zoo& zoo) {
    try {
        if (zoo.GetId().empty()) {
            throw std::runtime_error("Zoo has no valid data.");
        }
        
        std::vector<int> Id = zoo.GetId();

        for (int id : Id) {
            zoo.Print(id);
        }

        zoo.Print(666);
    }
    catch (const std::exception& e) {
        std::cout << "Exception occurred: " << e.what() << "\n";
    }
}