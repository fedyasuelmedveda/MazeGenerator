//#include"MapSite.h"
#pragma once
using namespace std;
#include"MapSite.h"
#include"Connection.h"
class Connection;
class Room : public MapSite {
public:
	Room(int number);
	~Room();
	int GetNumber() const;
	vector<pair<Connection*, Room*>>* GetNeighbours() const;
	void AddNeigbour(Connection* c);
	string GetType() const;
private:
	vector<pair<Connection*, Room*>>* neigbours;
	int number;
};