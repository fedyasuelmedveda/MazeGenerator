#include"Manager.h"
#include<iostream>
Maze* Manager::CreateMaze(MazeFactory* factory) {
	vector<vector<int>>* graph = new vector<vector<int>>;
	return factory->CreateMaze(ReadGraph());
}
vector<vector<int>>* Manager::ReadGraph() {
	int size,numberOfEdges = 0;
	cin >> size >> numberOfEdges;
	vector<vector<int>>* graph = new vector<vector<int>>(size);
	for (int i = 0; i < numberOfEdges; i++) {
		int in, out = 0;
		cin >> in >> out;
		(*graph)[in].push_back(out);
	}
	return graph;
}