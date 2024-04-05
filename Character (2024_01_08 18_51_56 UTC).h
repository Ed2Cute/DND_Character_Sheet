#ifndef Character
#define Character

#include <iostream>
#include <string>

class CharacterDeets {
private:
	//Character details
	std::string charName, charSpecies, charClass, charBackground;
	int level, speed, armorClass, hitPoints, initiative, proficiencyBonus, strScore, conScore, dexScore, intScore, wisScore, chaScore,
		strMod, conMod, dexMod, intMod, wisMod, chaMod;
	bool strProf, dexProf, conProf, intProf, wisProf, chaProf;

public:
	CharacterDeets(); //Default Constructor
	CharacterDeets(std::string, std::string, std::string, std::string, /*int, int, int, int, int,*/ int, int, int, int, int, int/*, int, int, int, int, int, int, bool, bool, bool, bool, bool, bool*/); //Full Constructor

	//Set character info via player choices
	void setName(std::string);
	void setSpecies(std::string);
	void setClass(std::string);
	void setBackground(std::string);

	//Set character ability scores
	void setStrength(int);
	void setDexterity(int);
	void setConstitution(int);
	void setIntelligence(int);
	void setWisdom(int);
	void setCharisma(int);

	/*
	//Set character skill scores
	void setAcrobatics(int);
	void setAnimalHandling(int);
	void setArcana(int);
	void setAthletics(int);
	void setDeception(int);
	void setHistory(int);
	void setInsight(int);
	void setIntimidation(int);
	void setInvestigation(int);
	void setMedicine(int);
	void setNature(int);
	void setPerception(int);
	void setPerformance(int);
	void setPersuasion(int);
	void setReligion(int);
	void setSleightofHand(int);
	void setStealth(int);
	void setSurvival(int);
	*/

	//Retrieve character info
	std::string getName();
	std::string getSpecies();
	std::string getClass();
	std::string getBackground();

	//Get character stats
	int getStrength();
	int getDexterity();
	int getConstitution();
	int getIntelligence();
	int getWisdom();
	int getCharisma();

	//Get ability modifiers
	double getStrMod();
	double getDexMod();
	double getConMod();
	double getIntMod();
	double getWisMod();
	double getChaMod();

	//Get character skill scores
	int getAcrobatics();
	int getAnimalHandling();
	int getArcana();
	int getAthletics();
	int getDeception();
	int getHistory();
	int getInsight();
	int getIntimidation();
	int getInvestigation();
	int getMedicine();
	int getNature();
	int getPerception();
	int getPerformance();
	int getPersuasion();
	int getReligion();
	int getSleightofHand();
	int getStealth();
	int getSurvival();
};

#endif