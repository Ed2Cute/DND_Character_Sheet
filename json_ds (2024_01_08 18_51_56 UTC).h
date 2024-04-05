#include "Character.h"
#include <nlohmann/json.hpp>
using nlohmann::json;

namespace ns {
	void to_json(json& jsonCharacter, const CharacterDeets& c) {
		jsonCharacter = {
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
	}
	void from_json(const json& jsonCharacter, CharacterDeets& c) {
		jsonCharacter.at("name").get_to(c.getName());
	}
}