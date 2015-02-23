#include "Node.h"

Node::Node(){

}

Node::Node(int infoIn, Node* nextIn){
	info = infoIn;
	next = nextIn;
}

Node::getNext(){
	return next;
}

void Node::setNext(Node* nextIn){
	next = nextIn;
}

int Node::getInfo(){
	return info;
}

void Node::setInfo(int infoIn){
	info = infoIn;
}

Node::~Node(){
	if(info != NULL)
		delete info;
}
