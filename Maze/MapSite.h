#pragma once
#include<vector>
#include<string>
using namespace std;
class MapSite {
public:
	//virtual void Enter() const = 0;
	virtual string GetType() const = 0;
};