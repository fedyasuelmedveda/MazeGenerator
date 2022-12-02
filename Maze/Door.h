#pragma once
#include"Connection.h"

class Door : public Connection {
public:	
	Door(Room* rIn, Room* rOut);
	string GetType() const;
};