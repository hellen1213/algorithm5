#include "Course.h"
#include <string>
#include <iostream>
using namespace std;

Course::Course(){
	front = NULL;
	rear = NULL;
}

Course::~Course(){
	delete front;
}

bool Course::isEmpty(){
	return (front == NULL);
}

void Course::enqueue(int data){

	node *temp = new node();
	temp->info = data;
	temp-next = NULL;
	if(front == NULL){
		front = temp;
	}else{
		rear->next = temp;
	}
	rear = temp;
}

int Course::dequeue(){
	node *temp = new node();
	int value;
	if(front == NULL){
		cout<<"\nQueue is empty\n";
	}else{
		temp = front;
		value = temp->info;
		front = front->next;
		delete temp;
	}
	return value;
}

void Course::display()
{
	node *p = new node();
	p = front;
	if(front == NULL){
		cout<<"\n nothing to display\n";
	}else{
		while(p!= NULL){
			cout<<endl<<p-info;
			p = p->next;
		}
	}
}














