#ifndef Paladin
#define Paladin

#include "Character.h"

class Paladin : private CharacterDeets {
public:
	int hitDie = 10;
	bool lightArmorProf = true, mediumArmorProf = true, heavyArmorProf = true, shields = true, simpleWeapons = true, martialWeapons = true;
	std::string skills[6] = { "Athletics", "Insight", "Intimidation", "Medicine", "Persuasion", "Religion" };

	void chooseSkills();
};

#endif // !Paladin