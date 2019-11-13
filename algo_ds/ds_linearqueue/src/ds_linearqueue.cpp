#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
#define SIZE 6

class queue
{
private:
	int arr[SIZE];
	int front;
	int rear;
public:
	queue(void)
{
		this-> front=-1;
		this->rear=-1;
}
	bool is_queue_full()
	{
		return(this->rear==SIZE-1);
	}
	bool is_queue_empty()
	{
		return(this->rear==-1 || this->front > this->rear);
	}

	void enqueue(int element)
	{
		this->rear++;
		this->arr[this->rear]=element;
		if(this->front==-1)
			this->front=0;
	}
	void dequeue(void)
	{
		this->front++;
	}
	int get_front(void)
	{
		return(this->arr[this->front]);
	}
};
int menu_list(void)
{
	int choice;
	cout<<"linear queue element --"<<endl;
	cout<<"0 EXIT"<<endl;
	cout<<"1 ENQUEUE"<<endl;
	cout<<"2 DEQUEUE"<<endl;
	cout<<"enter your choice.."<<endl;
	cin>>choice;
	return choice;
}
int main(void)
{
	queue q;
	int choice;
	int element;
	while(1)
	{
		choice=menu_list();
		switch(choice)
		{
		case 0:
			exit(0);
			break;
		case 1:
			if(!q.is_queue_full())
			{
			 cout<<"enter the element"<<endl;
			 cin>>element;
			 q.enqueue(element);
			 cout<<element  <<" elements are entered in queue  "<<endl;
			}
			else
				cout<<"queue is full"<<endl;

			break;
		case 2:
			   if(!q.is_queue_empty())
			   {
				  element= q.get_front();
			      q.dequeue();
			      cout<< element <<"elements are deleted from queue"<<endl;
			   }
			      else
			    cout<<"queue is empty...."<<endl;

				break;



		}

	}
	return 0;
}
