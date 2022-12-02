#include"Room.h"
int Room::GetNumber() const {
	return this->number;
}
vector<pair<Connection*, Room*>>* Room::GetNeighbours() const {
	return this->neigbours;
}

Room::Room(int number) {
	this->number = number;
	this->neigbours = new vector<pair<Connection*, Room*>>;
}
Room::~Room() {
	delete this->neigbours;
}

string Room::GetType() const {
	return "Room";
}

void Room::AddNeigbour(Connection* c) {
	neigbours->push_back(make_pair(c, c->GetRoomOut()));
}