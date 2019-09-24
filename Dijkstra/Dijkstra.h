#pragma once
#include "Node.h"
#include <iostream>
#include <windows.h>

using namespace std;

class Dijkstra
{
public:
	Dijkstra();
	~Dijkstra();
	void setObstacle(int x, int y, int width, int height);
	void startDijkstraSearch(int start_position_x,int start_position_y, int goal_position_x,int goal_position_y);
	void display();

private:
	Node map_[100][100];
	int searched_area_;
	void getPath(int goal_x,int goal_y);

	void changePositionDistance(int x,int y);
};

