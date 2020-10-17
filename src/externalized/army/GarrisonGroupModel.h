#pragma once

#include "Strategic_AI.h"

#include "JsonObject.h"
#include "rapidjson/document.h"

#include <map>
#include <vector>

class GarrisonGroupModel
{
public:
	static GARRISON_GROUP deserialize(JsonObjectReader& obj, const std::map<std::string, uint8_t>& armyCompMapping);
	static void validateData(const std::vector<GARRISON_GROUP>& garrisonGroups);
};
