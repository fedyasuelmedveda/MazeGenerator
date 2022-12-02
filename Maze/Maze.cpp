#include"Maze.h"
#include<iostream>
Maze::Maze() {
	this->connections = new vector<Connection*>;
	this->rooms = new vector<Room*>;
	this->roomsByNumber = new map<int, Room*>;
}
Maze::~Maze() {
	delete this->connections;
	delete this->rooms;
	delete this->roomsByNumber;
}
void Maze::AddRoom(Room* r) {
	this->rooms->push_back(r);
	this->roomsByNumber->insert(make_pair(r->GetNumber(), r));
}
void Maze::AddConnection(Connection* c) {
	this->connections->push_back(c);
}
vector<Room*> Maze::GetRooms() const {
	return *rooms;
}
map<int, Room*> Maze::GetRoomsByNumber() const {
	return *roomsByNumber;
}
vector<Connection*> Maze::GetConnection() const {
	return *connections;
}