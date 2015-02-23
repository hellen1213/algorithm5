#include<stdlib.h>
#include<stdio.h>
#include <vector>
using namespace std;

struct node{
	int info;
	node *next;
};


class Course{

public:
	Course();
	~Course();
	bool isEmpty();
	void enqueue(int);
	int dequeue();
	void display();

private:
	node *front;
	node *rear;

};
