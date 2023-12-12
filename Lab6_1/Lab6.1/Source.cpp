
#include "Inventorization.h"
#include "Zoo.h"
#include "Museum.h"
#include "BotanicalGarden.h"
#include "UsefulClass.h"


int main() 
{
	Zoo Chu;
	std::vector<std::string> animalNames = { "Lion", "Tiger", "Bear", "Elephant", "Giraffe", "Zebra", "Monkey", "Panda", "Kangaroo", "Hippo", "Rhino", "Leopard", "Cheetah", "Wolf", "Fox", "Penguin", "Ostrich", "Sloth", "Koala", "Polar Bear" };
	std::vector<std::string> originCountries = { "Africa", "India", "North America", "Africa", "Africa", "Africa", "South America", "China", "Australia", "Africa", "Africa", "Africa", "Africa", "North America", "North America", "Antarctica", "Africa", "South America", "Australia", "Arctic" };

	Chu.FillStable(100, animalNames, originCountries);

	Chu.Print();

	Chu.Print(Chu.Search("Fox"));

    Museum MIETMuseum;
    std::vector<std::string> exhibitNames = { "Sculpture", "Painting", "Artifact", "Fossil", "Manuscript", "Pottery", "Coin", "Weapon", "Jewelry", "Textile", "Tool", "Ceramics", "Glassware", "Photograph", "Document", "Ethnographic", "Numismatic", "Stamp", "Archaeological", "Technology" };
    std::vector<std::string> eras = { "Ancient", "Medieval", "Renaissance", "Modern", "Contemporary", "Prehistoric", "Baroque", "Gothic", "Byzantine", "Victorian", "Edwardian", "Georgian", "Neolithic", "Industrial", "Postmodern", "Classical", "Romantic", "Cubist", "Futurist", "Surrealist" };

    MIETMuseum.FillStable(20, exhibitNames, eras);

    //MIETMuseum.Print();
    MIETMuseum.Print(MIETMuseum.Search("Coin"));

    BotanicalGarden MOGarden;
    std::vector<std::string> plantNames = { "Rose", "Orchid", "Fern", "Cactus", "Daisy", "Tulip", "Sunflower", "Lily", "Carnation", "Daffodil", "Hibiscus", "Poppy", "Jasmine", "Pansy", "Peony", "Dandelion", "Hyacinth", "Amaryllis", "Chrysanthemum", "Gladiolus" };
    std::vector<std::string> regions = { "Tropical", "Desert", "Temperate", "Mediterranean", "Alpine", "Subtropical", "Savanna", "Rainforest", "Boreal", "Grassland", "Aquatic", "Xeric", "Hedgerows", "Montane", "Deciduous", "Evergreen", "Steppe", "Prairie", "Tundra", "Wetland" };

    MOGarden.FillStable(20, plantNames, regions);

    //MOGarden.Print(5);
    MOGarden.Print(MOGarden.Search("Alpine"));

    UsefulClass Ouroboros;

    //Ouroboros.PrintZoo(Chu);
    //Ouroboros.ZooPrivateData(Chu);

	return 0;
}