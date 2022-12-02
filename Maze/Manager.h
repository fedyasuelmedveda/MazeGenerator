#pragma once
#include"MazeFactory.h"
#include"Maze.h"
class Manager {
public:
	Maze* CreateMaze(MazeFactory* factory);
	vector<vector<int>>* ReadGraph();
};