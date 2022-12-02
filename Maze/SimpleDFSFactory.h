#pragma once
#include"MazeFactory.h"

class SimpleDFSFactory : public MazeFactory {
	Maze* CreateMaze(vector<vector<int>>* graph);
	void Dfs(Maze* newMaze, bool mark[], vector<vector<int>>* graph, int a);
};