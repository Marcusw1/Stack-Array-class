// Author: Marcusw1

#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>
using namespace std;

class Stack{

  private:
  	int next_empty_index;
  	int size;
  	int* the_stack;
	
  public:
	Stack(int);
	~Stack();
	void push(int);
	void pop();
	void peek();
	bool empty();
	bool full();
};
#endif
