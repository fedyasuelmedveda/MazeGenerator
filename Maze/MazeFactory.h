#pragma once
#include"Maze.h"
class MazeFactory {
public: 
	virtual Maze* CreateMaze(vector<vector<int>>* graph) = 0;
};