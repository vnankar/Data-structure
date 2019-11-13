#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
 class list;
 class node
 {
 private:
	 int data;
	 node *next;
 public:
	node(int data)
 {
		this->data=data;
		this->next=NULL;
 }
	friend class list;
 };
 class  list
 {
 private:
	 int cnt;
	 node *head;
public:
	 list(void)
{
		 this->head=NULL;
		 this->cnt=0;
}
bool is_list_empty(void)
{
 return(this->head==NULL);

 }
int get_cnt(void)const
{
	return (this->cnt);
}

void add_node_at_last_position(int data)
{
	node *newnode=new node(data);
	if(is_list_empty())
	{
		head=newnode;
		newnode->next=head;
		this->cnt++;
	}
	else
	{
		node *trav=head;
		while(trav->next!=head)
	    trav=trav->next;
		trav->next=newnode;
		newnode->next=head;
		this->cnt++;
	}
}

void add_node_at_first_position(int data)
{
	node *newnode=new node(data);
	if(is_list_empty())
	{
		head=newnode;
		newnode->next=head;
		this->cnt++;
	}
	else
	{
		node *trav=head;
		while(trav->next!=head)
		trav=trav->next;
		newnode->next=head;
		head=newnode;
		trav->next=head;
		this->cnt++;
	}
}
void delete_node_at_first_position(void)
{
	if(!is_list_empty())
	{
	if(head==head->next)
	{
		delete head;
		head=NULL;
		this->cnt--;
	}
	else
	{
		node *trav=head;
		while(trav->next!=head)
			trav=trav->next;
		head=head->next;
		delete trav->next;
		trav->next=head;
		this->cnt--;
	 }
}
	else
		cout<<"list is empty..."<<endl;


}
void delete_node_at_last_position()
{
	if(!is_list_empty())
	{
		if(head==head->next)
		{
		delete head;
		head=NULL;
		this->cnt--;
	    }
	else
	{
		node *trav=head;
		while(trav->next->next!=head)
		trav=trav->next;
		delete trav->next;
		trav->next=head;
		this->cnt++;

	   }
	}
	else
		cout<<"list is empty...."<<endl;
}
void display_list(void)
{
	if(!is_list_empty())
	{
		node *trav=head;
		cout<<"list is:  "<<endl;
		do
		{
			cout<<setw(4)<<left<<trav->data;
			trav=trav->next;

		}while(trav!=head);
			cout<<endl;
	}
		else
		cout<<"list is empty...."<<endl;
	}
~list(void)
{
	if(!is_list_empty())
	 free_list();
	else
		cout<<"list is empty...."<<endl;
}
private:
void free_list(void)
{
	while(!is_list_empty())
		delete_node_at_last_position();
	  //delete_node_at_last_position();
	cout<<"list freed successfully..."<<endl;
}

};
 int main(void)
 {
	 list l1;
	 /*l1.add_node_at_last_position(10);
	 l1.add_node_at_last_position(20);
	 l1.add_node_at_last_position(30);
	 l1.add_node_at_last_position(40);
	 l1.add_node_at_last_position(50);
	 l1.display_list();*/
	     l1.add_node_at_first_position(10);
	 	 l1.add_node_at_first_position(20);
	 	 l1.add_node_at_first_position(30);
	 	 l1.add_node_at_first_position(40);
	 	 l1.add_node_at_first_position(50);
	 	 l1.delete_node_at_last_position();
	 	 l1.display_list();
	 return 0;
 }
