#include"Wall.h"
#include"Connection.h"
#include"Manager.h"
#include"SimpleFactory.h"
#include"SimpleDFSFactory.h"
#include<iostream>
int main() {
	Manager m;
	SimpleDFSFactory* s = new SimpleDFSFactory();
	//vector<vector<int>>* graph = m.ReadGraph();
	Maze* maze = m.CreateMaze(s);
	vector<Room*> r = maze->GetRooms();
	vector<Connection*> c = maze->GetConnection();
	//cout << r.size() << endl << maze->GetRooms().size() << endl;
	//cout << "Zashel" << endl;
	for (int i = 0; i < r.size();i++) {
		cout << r[i]->GetNumber() << endl;
	}

	for (int i = 0; i < c.size(); i++) {
		cout << c[i]->GetRoomIn()->GetNumber() << ' ' << c[i]->GetRoomOut()->GetNumber() << ' ' << c[i]->GetType() << endl;
	}
	//for (int i = 0; i < graph->size(); i++) {
	//	for (int j = 0; j < (*graph)[i].size(); j++) {
	//		cout << i << ' ' << (*graph)[i][j] << endl;
	//	}
	//}
}