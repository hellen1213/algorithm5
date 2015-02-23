#ifndef NODE_H_
#define NODE_H_

class Node{

public:
	int info;
	Node *next;
public:
	Node();
	Node(int infoIn, Node* nextIn);
	getNext();
	setNext(Node* nextIn);
	getInfo();
	setInfo(int infoIn);
	~Node();

};

#endif //NODE_H_
