#include "Dijkstra.h"

Dijkstra::Dijkstra()
	:searched_area_(0)
{
}

Dijkstra::~Dijkstra()
{
}

void Dijkstra::setObstacle(int x,int y,int width,int height)
{
	for (int i = x; i < x + width; i++)
	{
		for (int j = y; j < y + height; j++)
		{
			map_[i][j].setState(1);
		}
	}
}

void Dijkstra::startDijkstraSearch(int start_position_x, int start_position_y, int goal_position_x, int goal_position_y)
{
	map_[start_position_x][start_position_y].setDistance(0);
	while (map_[goal_position_x][goal_position_y].getDistance() == 10000)
	{
		for (int x = start_position_x - searched_area_; x <= start_position_x + searched_area_; x++)
		{
			int y = start_position_y - searched_area_;
			if ((x < 0) || (x >= 100) || (y < 0) || (y >= 100))
			{}
			else
			{
				changePositionDistance(x, y);
			}

			y = start_position_y + searched_area_;
			if ((x < 0) || (x >= 100) || (y < 0) || (y >= 100))
			{}
			else
			{
				changePositionDistance(x, y);
			}
		}

		for (int y = start_position_y - searched_area_; y <= start_position_y + searched_area_; y++)
		{
			int x = start_position_x - searched_area_;
			if ((y < 0) || (y >= 100) || (x < 0) || (x >= 100))
			{}
			else
			{
				changePositionDistance(x, y);
			}

			x = start_position_x + searched_area_;
			if ((y < 0) || (y >= 100) || (x < 0) || (x >= 100))
			{}
			else
			{
				changePositionDistance(x, y);
			}
		}

		searched_area_++;
	}

	getPath(goal_position_x,goal_position_y);
}

void Dijkstra::changePositionDistance(int x, int y)
{
	if (map_[x][y].getState() == 1)
	{
		return;
	}

	int x0, y0;
	float distance;
	x0 = x - 1;
	y0 = y - 1;
	if ((x0 >= 0) && (x0 < 100) && (y0 >= 0) && (y0 < 100))
	{
		distance = map_[x][y].getDistance() + 1.41421;
		if (distance <= map_[x0][y0].getDistance())
		{
			if (map_[x0][y0].getState() == 0)
			{
				map_[x0][y0].setDistance(distance);
				map_[x0][y0].setPreviousNode(&map_[x][y]);
			}
		}
	}

	x0 = x - 1;
	y0 = y;
	if ((x0 >= 0) && (x0 < 100) && (y0 >= 0) && (y0 < 100))
	{
		distance = map_[x][y].getDistance() + 1.0;
		if (distance <= map_[x0][y0].getDistance())
		{
			if (map_[x0][y0].getState() == 0)
			{
				map_[x0][y0].setDistance(distance);
				map_[x0][y0].setPreviousNode(&map_[x][y]);
			}
		}
	}

	x0 = x - 1;
	y0 = y + 1;
	if ((x0 >= 0) && (x0 < 100) && (y0 >= 0) && (y0 < 100))
	{
		distance = map_[x][y].getDistance() + 1.41421;
		if (distance <= map_[x0][y0].getDistance())
		{
			if (map_[x0][y0].getState() == 0)
			{
				map_[x0][y0].setDistance(distance);
				map_[x0][y0].setPreviousNode(&map_[x][y]);
			}
		}
	}

	x0 = x;
	y0 = y - 1;
	if ((x0 >= 0) && (x0 < 100) && (y0 >= 0) && (y0 < 100))
	{
		distance = map_[x][y].getDistance() + 1.0;
		if (distance <= map_[x0][y0].getDistance())
		{
			if (map_[x0][y0].getState() == 0)
			{
				map_[x0][y0].setDistance(distance);
				map_[x0][y0].setPreviousNode(&map_[x][y]);
			}
		}
	}

	x0 = x;
	y0 = y + 1;
	if ((x0 >= 0) && (x0 < 100) && (y0 >= 0) && (y0 < 100))
	{
		distance = map_[x][y].getDistance() + 1.0;
		if (distance <= map_[x0][y0].getDistance())
		{
			if (map_[x0][y0].getState() == 0)
			{
				map_[x0][y0].setDistance(distance);
				map_[x0][y0].setPreviousNode(&map_[x][y]);
			}
		}
	}

	x0 = x + 1;
	y0 = y - 1;
	if ((x0 >= 0) && (x0 < 100) && (y0 >= 0) && (y0 < 100))
	{
		distance = map_[x][y].getDistance() + 1.41421;
		if (distance <= map_[x0][y0].getDistance())
		{
			if (map_[x0][y0].getState() == 0)
			{
				map_[x0][y0].setDistance(distance);
				map_[x0][y0].setPreviousNode(&map_[x][y]);
			}
		}
	}

	x0 = x + 1;
	y0 = y;
	if ((x0 >= 0) && (x0 < 100) && (y0 >= 0) && (y0 < 100))
	{
		distance = map_[x][y].getDistance() + 1.0;
		if (distance <= map_[x0][y0].getDistance())
		{
			if (map_[x0][y0].getState() == 0)
			{
				map_[x0][y0].setDistance(distance);
				map_[x0][y0].setPreviousNode(&map_[x][y]);
			}
		}
	}

	x0 = x + 1;
	y0 = y + 1;
	if ((x0 >= 0) && (x0 < 100) && (y0 >= 0) && (y0 < 100))
	{
		distance = map_[x][y].getDistance() + 1.41421;
		if (distance <= map_[x0][y0].getDistance())
		{
			if (map_[x0][y0].getState() == 0)
			{
				map_[x0][y0].setDistance(distance);
				map_[x0][y0].setPreviousNode(&map_[x][y]);
			}
		}
	}
}

void Dijkstra::display()
{
	for (int i = 0; i < 100; i++)
	{
		for(int j = 0;j < 100;j++)
		{
			if ((i % 1 == 0) && (j % 1 == 0))
			{
				if (map_[i][j].getState() == 0)
				{
					cout << '/' << " ";
				}
				else if (map_[i][j].getState() == 1)
				{
					cout << '*' << " ";
				}
				else if (map_[i][j].getState() == 5)
				{
					cout << '8' << " ";
				}
			}
		}
		if(i % 1 == 0)
		{
			cout << endl;
		}
	}
}

void Dijkstra::getPath(int goal_x,int goal_y)
{
	Node* path_node;
	path_node = &map_[goal_x][goal_y];
	while(path_node)
	{
		path_node->setState(5);
		path_node = path_node->getPreviousNode();
	}
}
