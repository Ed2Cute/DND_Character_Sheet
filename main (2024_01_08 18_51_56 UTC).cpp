#include "Character.h"
#include <random>
#include <vector>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

void makeNewChar();
void printCharacter(CharacterDeets);
void rollStats();
void serializeCharacters(CharacterDeets);

std::vector<CharacterDeets> allChars;

int main() {
	CharacterDeets newChar;
	char yesOrNo;
	int objChoice;
	std::string characterName;
	std::cout << "Would you like to make a new character? y/n: ";
	std::cin >> yesOrNo;

	//Create default character to populate list
	CharacterDeets newToon("Exit", "Human", "Paladin", "Noble", 10, 10, 10, 10, 10, 10);
	allChars.push_back(newToon);

	while (yesOrNo == 'y') {
		makeNewChar();
		std::cout << "Make another? y/n: ";
		std::cin >> yesOrNo;
	}
	

	/*string temp; //Placeholder string for setting character data
	int num; //Placeholder integer for setting character scores
	CharacterDeets newChar; //Placeholder character object

	//Setting the name
	std::cout << "Enter name: ";
	std::cin >> temp; //Note: temp is overwritten to conserve variables
	newChar.setName(temp);

	//Setting the species
	std::cout << "Enter species: ";
	std::cin >> temp;
	newChar.setSpecies(temp);

	//Setting the class
	std::cout << "Enter class: ";
	std::cin >> temp;
	newChar.setClass(temp);

	//Setting the background
	std::cout << "Enter background: ";
	std::cin >> temp;
	newChar.setBackground(temp);

	rollStats();

	std::cout << std::endl << "Enter Strength: ";
	std::cin >> num;
	newChar.setStrength(num);
	std::cout << "Enter Dexterity: ";
	std::cin >> num;
	newChar.setDexterity(num);
	std::cout << "Enter Constitution: ";
	std::cin >> num;
	newChar.setConstitution(num);
	std::cout << "Enter Intelligence: ";
	std::cin >> num;
	newChar.setIntelligence(num);
	std::cout << "Enter Wisdom: ";
	std::cin >> num;
	newChar.setWisdom(num);
	std::cout << "Enter Charisma: ";
	newChar.setCharisma(num);*/

	//Viewing current characters
	std::cout << "\nWhich character would you like to view the stats of? \n";
	for (int i = 0; i < allChars.size(); i++) {
		std::cout << i << ". " << allChars[i].getName() << std::endl;
	}
	std::cin >> objChoice;
	while (objChoice != 0) {
		printCharacter(allChars[objChoice]);
		std::cout << "Pick another option: ";
		std::cin >> objChoice;
	}

	for (int i = 0; i < allChars.size(); i++) {
		serializeCharacters(allChars[i]);
	}

	return 0;
}

void makeNewChar() {
	std::string name, species, job, background; //"toon" is the object name where "name" is the name of the character
	int strength, dexterity, constitution, intelligence, wisdom, charisma;

	//Set Character name
	std::cout << "Enter name: ";
	std::cin >> name;

	//Setting the species
	std::cout << "Enter species: ";
	std::cin >> species;

	//Setting the class
	std::cout << "Enter class: ";
	std::cin >> job;

	//Setting the background
	std::cout << "Enter background: ";
	std::cin >> background;

	rollStats();
	std::cout << std::endl << "Enter Strength: ";
	std::cin >> strength;

	std::cout << "Enter Dexterity: ";
	std::cin >> dexterity;

	std::cout << "Enter Constitution: ";
	std::cin >> constitution;
	
	std::cout << "Enter Intelligence: ";
	std::cin >> intelligence;
	
	std::cout << "Enter Wisdom: ";
	std::cin >> wisdom;
	
	std::cout << "Enter Charisma: ";
	std::cin >> charisma;

	CharacterDeets toon(name, species, job, background, strength, dexterity, constitution, intelligence, wisdom, charisma);
	allChars.push_back(toon);
}

void printCharacter(CharacterDeets c) {
	std::cout << std::endl;
	std::cout << "Name: " << c.getName() << std::endl;
	std::cout << "Species: " << c.getSpecies() << std::endl;
	std::cout << "Class: " << c.getClass() << std::endl;
	std::cout << "Background: " << c.getBackground() << std::endl;
	std::cout << "STR: " << c.getStrength() << std::endl;
	std::cout << "DEX: " << c.getDexterity() << std::endl;
	std::cout << "CON: " << c.getConstitution() << std::endl;
	std::cout << "INT: " << c.getIntelligence() << std::endl;
	std::cout << "WIS: " << c.getWisdom() << std::endl;
	std::cout << "CHA: " << c.getCharisma() << std::endl;
	std::cout << "Acrobatics: " << c.getAcrobatics() << std::endl;
	std::cout << "Animal Handling: " << c.getAnimalHandling() << std::endl;
	std::cout << "Arcana: " << c.getArcana() << std::endl;
	std::cout << "Athletics: " << c.getAthletics() << std::endl;
	std::cout << "Deception: " << c.getDeception() << std::endl;
	std::cout << "History: " << c.getHistory() << std::endl;
	std::cout << "Insight: " << c.getInsight() << std::endl;
	std::cout << "Intimidation: " << c.getIntimidation() << std::endl;
	std::cout << "Investigation: " << c.getInvestigation() << std::endl;
	std::cout << "Medistd::cine: " << c.getMedicine() << std::endl;
	std::cout << "Nature: " << c.getNature() << std::endl;
	std::cout << "Perception: " << c.getPerception() << std::endl;
	std::cout << "Performance: " << c.getPerformance() << std::endl;
	std::cout << "Persuasion: " << c.getPersuasion() << std::endl;
	std::cout << "Religion: " << c.getReligion() << std::endl;
	std::cout << "Sleight of Hand: " << c.getSleightofHand() << std::endl;
	std::cout << "Stealth: " << c.getStealth() << std::endl;
	std::cout << "Survival: " << c.getSurvival() << std::endl;
}

void rollStats() {
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(8, 17); // define the range
	std::string choice;

	std::cout << "Would you like to roll for stats? y/n: ";
	std::cin >> choice;

	while (choice == "y") {
		for (int n = 0; n < 6; ++n) {
			std::cout << distr(gen) << ' '; // generate numbers
		}
		std::cout << "\nWould you like to roll again ? y/n : ";
		std::cin >> choice;
	}
}


void serializeCharacters(CharacterDeets c) {
	std::ofstream f(c.getName() + "-CharacterFile.json");
	json jsonCharacter = { 
		{"name", c.getName()},
		{"species", c.getSpecies()},
		{"class", c.getClass()},
		{"background", c.getBackground()},
		{"strength", c.getStrength()},
		{"dexterity", c.getDexterity()},
		{"constitution", c.getConstitution()},
		{"intelligence", c.getIntelligence()},
		{"wisdom", c.getWisdom()},
		{"charisma", c.getCharisma()},
	};
	f << jsonCharacter;
}