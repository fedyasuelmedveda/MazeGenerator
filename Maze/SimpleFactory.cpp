#include"SimpleFactory.h"

Maze* SimpleFactory::CreateMaze(vector<vector<int>>* graph) {
	int maxNumber = 5;
	Maze* newMaze = new Maze();
	for (int i = 0; i < maxNumber; i++) {
		newMaze->AddRoom(new Room(i));
	}
	map<int, Room*> roomsInMaze = newMaze->GetRoomsByNumber();
	for (int i = 0; i < maxNumber; i++) {
		for (int j = i + 1; j < maxNumber; j++) {
			newMaze->AddConnection(new Door(roomsInMaze[i], roomsInMaze[j]));
			newMaze->AddConnection(new Wall(roomsInMaze[j], roomsInMaze[i]));
		}
	}
	return newMaze;
}
