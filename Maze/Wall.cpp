#include"Wall.h"

Wall::Wall(Room* rIn, Room* rOut, int strength) :Connection(rIn, rOut),strength(strength){};
string Wall::GetType() const {
	return "Wall";
}
int Wall::GetStrength() const {
	return this->strength;
}