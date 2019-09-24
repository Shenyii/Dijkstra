#include <iostream>
#include "Dijkstra.h"

using namespace std;

int main()
{
	cout << "begin Dijkstra search program." << endl;
	Dijkstra dijkstra;
	dijkstra.setObstacle(40, 10, 30, 70);
	dijkstra.setObstacle(20, 60, 30, 10);
	dijkstra.startDijkstraSearch(20, 40, 25, 90);
	dijkstra.display();
	return 0;
}