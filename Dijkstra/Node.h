#pragma once
#include <iostream>

using namespace std;
class Node
{
public:
	Node();
	~Node();
	void setState(int state);
	void setDistance(float distance);
	void setPreviousNode(Node* previous_node);
	Node* getPreviousNode();
	int getState();
	float getDistance();

private:
	int state_;
	float distance_;
	Node* previous_node_;
};

