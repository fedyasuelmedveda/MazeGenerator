#pragma once
using namespace std;
#include"MapSite.h"
#include"Room.h"
class Room;
class Connection : public MapSite {
public:
	Connection(Room* rIn, Room* rOut);
	Room* GetRoomIn() const;
	Room* GetRoomOut() const;
	string GetType() const;
protected:
	Room* roomIn;
	Room* roomOut;
};