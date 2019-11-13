#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
# define SIZE 5

class stack
{
private:
	int arr[SIZE];
	int top;
public:
	stack(void)
{
		this->top=-1;
}
	bool is_stack_full(void)
	{
		return(this->top == SIZE-1);
	}
	bool is_stack_empty(void)
	{
		return(this->top == -1);

	}
	void push(int element)
	{
    this->top++;
    this->arr[this->top]=element;

	}
	void pop(void)
  {
		this->top--;

  }
	int peek(void)
	{
	return(this->arr[this->top]);
	}
};
int menu_list(void)
{
	int choice;
	cout<<"static stack element --"<<endl;
	cout<<"0 EXIT"<<endl;
	cout<<"1 PUSH"<<endl;
	cout<<"2 POP "<<endl;
	cout<<"enter your choice.."<<endl;
	cin>>choice;
	return choice;
}
int main(void)
{
	stack s;
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

			 if(!s.is_stack_full())
			 {
				 cout<<"enter the elements.."<<endl;
				 cin>>element;
				 s.push(element);
				 cout<< element  <<" elements are entered in stack "<<endl;
			 }
			 else

			 cout <<" stack is full "<<endl;



			break;
		case 2:
			   if(!s.is_stack_empty())
			   {
				  element= s.peek();
			      s.pop();
			      cout<< element <<"  elements are deleted from stack  "<<endl;
			   }
			      else
			    cout<< "  queue is stack...." <<endl;

				break;



		}

	}
	return 0;
}
