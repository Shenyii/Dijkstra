#include "Node.h"

Node::Node()
	:state_(0),distance_(10000),previous_node_(NULL)
{
}

Node::~Node()
{
}

void Node::setState(int state)
{
	state_ = state;
}

void Node::setDistance(float distance)
{
	distance_ = distance;
}

void Node::setPreviousNode(Node* previous_node)
{
	previous_node_ = previous_node;
}

Node* Node::getPreviousNode()
{
	return previous_node_;
}

int Node::getState()
{
	return state_;
}

float Node::getDistance()
{
	return distance_;
}
