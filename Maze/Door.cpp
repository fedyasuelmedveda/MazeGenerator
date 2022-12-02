#include"Door.h"

Door::Door(Room* rIn, Room* rOut) :Connection(rIn, rOut) {}
string Door::GetType() const {
	return "Door";
}