#include"Connection.h"

Connection::Connection(Room* rIn, Room* rOut) {
	this->roomIn = rIn;
	this->roomOut = rOut;
}
string Connection::GetType() const {
	return "Connection";
}
Room* Connection::GetRoomIn() const {
	return this->roomIn;
}

Room* Connection::GetRoomOut() const {
	return this->roomOut;
}