#include"SimpleDFSFactory.h"
#include<iostream>
#include<random>
#include<chrono>
Maze* SimpleDFSFactory::CreateMaze(vector<vector<int>>* graph) {
	Maze* newMaze = new Maze();
	int size = graph->size();
	bool mark[100];
	bool* p = mark;
	for (int i = 0; i < size; i++) {
		mark[i] = false;
	}
	Dfs(newMaze, mark, graph, 0);
	return newMaze;
}

void SimpleDFSFactory::Dfs(Maze* newMaze, bool mark[], vector<vector<int>>* graph, int a) {
	mark[a] = true;
	
	map<int, Room*> rooms = newMaze->GetRoomsByNumber();
	if (rooms.find(a) == rooms.end())
		newMaze->AddRoom(new Room(a));
	vector<int> neighbours = *(new vector<int>);
	//cout << "Zashel" << endl;
	//cout << a << endl;
	//cout << graph->size() << endl;
	for (int i = 0; i < (*graph)[a].size(); i++) {
		
		neighbours.push_back((*graph)[a][i]);
	}
	
	random_device rd;
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	default_random_engine rng(seed);
	shuffle(neighbours.begin(), neighbours.end(),rng);
	for (int i = 0; i < neighbours.size(); i++) {
		int b = neighbours[i];
		if (mark[b] == false) {
			newMaze->AddRoom(new Room(b));
			map<int, Room*> rooms = newMaze->GetRoomsByNumber();
			newMaze->AddConnection(new Door(rooms[a], rooms[b]));
			newMaze->AddConnection(new Door(rooms[b], rooms[a]));
			Dfs(newMaze, mark, graph, b);
			
		}
		else {
			map<int, Room*> rooms = newMaze->GetRoomsByNumber();
			newMaze->AddConnection(new Wall(rooms[a], rooms[b]));
			newMaze->AddConnection(new Wall(rooms[b], rooms[a]));
		}
	}
}