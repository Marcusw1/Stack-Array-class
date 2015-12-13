//Marcusw1

#include "stack.h"

Stack::Stack(int stack_size){
  size = stack_size;
  the_stack = new int[size];
  next_empty_index = -1;
}

Stack::~Stack(){
  delete[] the_stack;
}

void Stack::push(){
  if(!full()){
   next_empty_index++;
   the_stack[next_empty_index] = new_element;
  }
}

void Stack::pop(int new_element){
  if(!empty()){
  	the_stack[next_empty_index] = NULL;
  	next_empty_index--;
  }   
}

void Stack::peek(){
  if(!empty())
    cout << the_stack[0];	
}

bool Stack::empty(){
  if(next_empty_index == -1)
  	return true;
  else
  	return false;
}

bool Stack::full(){
  if(next_empty_index == stack_size)
  	return true;
  else 
  	return false;
}
