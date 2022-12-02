#pragma once
#include"Door.h"
#include"Room.h"
#include"Wall.h"
#include<map>
class Maze {
public:
	Maze();
	~Maze();
	void AddRoom(Room*);
	void AddConnection(Connection*);
	vector<Room*> GetRooms() const;
	map<int, Room*> GetRoomsByNumber() const;
	vector<Connection*> GetConnection() const;
private:
	vector<Room*>* rooms;
	vector<Connection*>* connections;
	map<int, Room*>* roomsByNumber;
};