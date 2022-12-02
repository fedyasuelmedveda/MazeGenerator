#pragma once
#include"Connection.h"
class Wall : public Connection {
public:
	Wall(Room* rIn, Room* rOut, int strength = 1);
	int GetStrength() const;
	string GetType() const;
private:
	int strength;
};