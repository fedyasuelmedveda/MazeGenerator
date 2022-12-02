#pragma once
#include"MazeFactory.h"

class SimpleFactory : public MazeFactory {
	 Maze* CreateMaze(vector<vector<int>>* graph);
};