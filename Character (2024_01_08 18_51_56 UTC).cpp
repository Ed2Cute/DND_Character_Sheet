#include "Character.h"
#include <math.h>

CharacterDeets::CharacterDeets() {
	charName = " ";
	charSpecies = " ";
	charClass = " ";
	charBackground = " ";
	level = 1;
	armorClass = 10;
	hitPoints = 1;
	initiative = 0;
	proficiencyBonus = 2;
	strScore = 10;
	conScore = 10;
	dexScore = 10;
	intScore = 10;
	wisScore = 10;
	chaScore = 10;
	strMod = 0;
	conMod = 0;
	dexMod = 0;
	intMod = 0;
	wisMod = 0;
	chaMod = 0;
	strProf = false;
	dexProf = false;
	conProf = false;
	intProf = false;
	wisProf = false;
	chaProf = false;
}

CharacterDeets::CharacterDeets(std::string name, std::string spec, std::string job, std::string bg, /*int lvl, int ac, int hp, int inish, int prof, */int str, int con, int dex,
		int intel, int wis, int cha/*, bool strP, bool dexP, bool conP, bool intP, bool wisP, bool chaP*/) {
	charName = name;
	charSpecies = spec;
	charClass = job;
	charBackground = bg;
	/*level = lvl;
	armorClass = ac;
	hitPoints = hp;
	initiative = inish;
	proficiencyBonus = prof;*/ //Commented to simplify for testing
	strScore = str;
	conScore = con;
	dexScore = dex;
	intScore = intel;
	wisScore = wis;
	chaScore = cha;
	/*
	strProf = strP;
	dexProf = dexP;
	conProf = conP;
	intProf = intP;
	wisProf = wisP;
	chaProf = chaP;*/ //Commented to simplify for testing
}

//Set character information
void CharacterDeets::setName(std::string nm) {
	charName = nm;
}
void CharacterDeets::setSpecies(std::string spec) {
	charSpecies = spec;
}
void CharacterDeets::setClass(std::string job) {
	charClass = job;
}
void CharacterDeets::setBackground(std::string bg) {
	charBackground = bg;
}

//Set character ability scores
void CharacterDeets::setStrength(int num) {
	strScore = num;
}
void CharacterDeets::setDexterity(int num) {
	dexScore = num;
}
void CharacterDeets::setConstitution(int num) {
	conScore = num;
}
void CharacterDeets::setIntelligence(int num) {
	intScore = num;
}
void CharacterDeets::setWisdom(int num) {
	wisScore = num;
}
void CharacterDeets::setCharisma(int num) {
	chaScore = num;
}

//Get character information
std::string CharacterDeets::getName() {
	return charName;
}
std::string CharacterDeets::getSpecies() {
	return charSpecies;
}
std::string CharacterDeets::getClass() {
	return charClass;
}
std::string CharacterDeets::getBackground() {
	return charBackground;
}

//Get character stats
int CharacterDeets::getStrength() {
	return strScore;
}
int CharacterDeets::getDexterity() {
	return dexScore;
}
int CharacterDeets::getConstitution() {
	return conScore;
}
int CharacterDeets::getIntelligence() {
	return intScore;
}
int CharacterDeets::getWisdom() {
	return wisScore;
}
int CharacterDeets::getCharisma() {
	return chaScore;
}

//Get ability modifiers
double CharacterDeets::getStrMod() {
	double temp = (getStrength() - 10.0) / 2.0;

	if (getStrength() < 10) {
		return round(temp);
	}
	else {
		return floor(temp);
	}
}
double CharacterDeets::getDexMod() {
	double temp = (getDexterity() - 10.0) / 2.0;

	if (getDexterity() < 10) {
		return round(temp);
	}
	else {
		return floor(temp);
	}
}
double CharacterDeets::getConMod() {
	double temp = (getConstitution() - 10.0) / 2.0;

	if (getConstitution() < 10) {
		return round(temp);
	}
	else {
		return floor(temp);
	}
}
double CharacterDeets::getIntMod() {
	double temp = (getIntelligence() - 10.0) / 2.0;

	if (getIntelligence() < 10) {
		return round(temp);
	}
	else {
		return floor(temp);
	}
}
double CharacterDeets::getWisMod() {
	double temp = (getWisdom() - 10.0) / 2.0;

	if (getWisdom() < 10) {
		return round(temp);
	}
	else {
		return floor(temp);
	}
}
double CharacterDeets::getChaMod() {
	double temp = (getCharisma() - 10.0) / 2.0;

	if (getCharisma() < 10) {
		return round(temp);
	}
	else {
		return floor(temp);
	}
}

//Get character skill scores
int CharacterDeets::getAcrobatics() {
	return getDexMod();
}
int CharacterDeets::getAnimalHandling() {
	return getWisMod();
}
int CharacterDeets::getArcana() {
	return getIntMod();
}
int CharacterDeets::getAthletics() {
	return getStrMod();
}
int CharacterDeets::getDeception() {
	return getChaMod();
}
int CharacterDeets::getHistory() {
	return getIntMod();
}
int CharacterDeets::getInsight() {
	return getWisMod();
}
int CharacterDeets::getIntimidation() {
	return getChaMod();
}
int CharacterDeets::getInvestigation() {
	return getIntMod();
}
int CharacterDeets::getMedicine() {
	return getWisMod();
}
int CharacterDeets::getNature() {
	return getIntMod();
}
int CharacterDeets::getPerception() {
	return getWisMod();
}
int CharacterDeets::getPerformance() {
	return getChaMod();
}
int CharacterDeets::getPersuasion() {
	return getChaMod();
}
int CharacterDeets::getReligion() {
	return getIntMod();
}
int CharacterDeets::getSleightofHand() {
	return getDexMod();
}
int CharacterDeets::getStealth() {
	return getDexMod();
}
int CharacterDeets::getSurvival() {
	return getWisMod();
}