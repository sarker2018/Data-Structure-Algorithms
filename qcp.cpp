

/*
define class Queue
define size

bool Isfull
bool IsEmpty

enQueue()
deQueue()

Display

main function

*/


#include <iostream>
#define size 5
using namespace std;
//int size = 5;

class Queue{
	private:
	int items[size], front, rear;
	
	public:
	Queue(){
		front = -1;
		rear = -1;
	}
	bool isFull(){
		if(front == 0 && rear == size-1){
			cout << "\nThe Queue is Full";
			return true;
		}else
			return false;
	}
	bool isEmpty(){
		if(front ==-1){
			return true;
			
		}else
			return false;
	}
	void enQueue(int element){
		if(isFull()) cout << "The Queue is Full" << endl;
		else{
			if(front==-1) front = 0;
			else{
				rear++;
				items[rear] = element;
				cout << "\nInserted "<< element <<endl; 
			}
				
			
			
		}
	}
	int deQueue(){
		int element;
		if(isEmpty()){
			 cout << "Empty Queue "<< endl;
			 return (-1);
		}
		else{
			element = items[front];
			if (front >= rear){
				front = -1;
				rear = -1;
			}else
				front++;
			cout << "\nDeleted "<< element << endl;
		}return element;
	}
	
	void display(){
		if(isEmpty()){
			cout << "\n\nEmpty Queue\n";
		
			
		}else{
			cout << "\n\nFront Index: "<<front;
			cout <<"\n\nItems ";
			for(int i=front; i<=rear;i++){
				cout << items[i]<< " ";
				
				
			}cout << "\n\nRear index" << rear <<endl;
		}
	}
};


int main(){
	Queue q;
	q.deQueue();
	q.enQueue(5);
	q.enQueue(6);
	q.enQueue(7);
	q.enQueue(8);
	q.enQueue(9);
	
	
	q.enQueue(10);
	q.display();
	q.deQueue();
	
	q.display();
	return 0;
	
}