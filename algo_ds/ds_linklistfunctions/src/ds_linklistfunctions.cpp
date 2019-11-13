#include<iostream>
#include<iomanip>
using namespace std;
#include<cstdlib>
class list;
class node
{
private:
	int data;
	node *next;
public:
    node(int data);

    friend class list;

};
node::node(int data)
{
	this->data=data;
	this->next=NULL;

}
class list
{
private :

	int cnt;
	node *head;
public:
	list(void);
	bool is_list_empty(void);
	int get_cnt(void)const;
    void add_node_at_last_position(int data);
    void  add_node_at_first_position(int data);
    void add_node_at_specific_position( int data,int pos);
    void delete_node_at_first_position(void);
    void delete_node_at_last_position();
    void delete_node_at_specific_position(int pos);
         ~list(void);
    void free_list(void);
    void  displayvalues();
};
list::list(void)
{
	this->head=NULL;
	this->cnt=0;
}
int list::get_cnt(void)const
{
	return(this->cnt);
}
bool list::is_list_empty(void)
{
	return (this->head==NULL);

}
void list::add_node_at_last_position(int data)
{

	node *newnode=new node(data);//add new node dynamically
	if(is_list_empty())
	{
		head=newnode;
		this->cnt++;
	}
	else
	{
		node *trav=head;

				while(trav->next!=NULL)
					trav= trav->next;
					trav->next=newnode;
				this->cnt++;

	}
}
void list::add_node_at_first_position(int data)
{
	node *newnode=new node(data);
	if(is_list_empty())
	{
		head=newnode;
		this->cnt++;
	}
	else
	{
		newnode->next=head;
		head=newnode;
		this->cnt++;
	}
}
void list::add_node_at_specific_position(int data,int pos)
{
	if(pos==1)
		add_node_at_first_position(data);
	else
		if(pos==get_cnt()+1)
		add_node_at_last_position(data);
		else
	{
		node *newnode=new node(data);
		node *trav=head;
		int i=1;

		while(i<pos-1)
		{
         i++;
         trav=trav->next;
		}
		newnode->next=trav->next;
		trav->next=newnode;
		this->cnt++;
	}
}
void list::delete_node_at_first_position(void)
{
	if(!is_list_empty())
	{
		if(head->next==NULL)
		{
			delete head;
			head=NULL;
			this->cnt=0;
		}
		else
		{
			node *temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			this->cnt--;
		}
	}
		else
			cout<<"list is empty!!!"<<endl;
}
void list::delete_node_at_last_position()
{
	if( !is_list_empty())
	{
    if(head->next==NULL)
    {
    delete head;
    head=NULL;
    this->cnt=0;
	}
	else
	{
	node *trav=head;
	while(trav->next->next!=NULL)
		trav=trav->next;
	delete trav->next;
	trav->next=NULL;
	this->cnt--;
}
	}
	else
	cout<<"list is empty...."<<endl;

}
void list::delete_node_at_specific_position(int pos)
{
	if(pos==1)
		delete_node_at_first_position();
	else
		if(pos==get_cnt())
			delete_node_at_last_position();
		else
		{
			node *trav=head;
		    int i=1;
		    while(i<pos-1)
		    {
		    	i++;
		    	trav=trav->next;
		    }
		    node *temp=trav->next;
		    trav->next = trav->next->next;
		    delete temp;
		    temp=NULL;
		    this->cnt--;
		}
}
void list::free_list(void)
{
	while(!is_list_empty())
	delete_node_at_last_position();
	cout<<"list freed successfully"<<endl;
}
list::~list(void)
{
	if(!is_list_empty())
		free_list();
	else
		cout<<"list is empty..."<<endl;
}

void list::displayvalues()
{
   if( !is_list_empty())
   {

	node *trav = head;
	cout<<"no.of nodes in list are:  "<<get_cnt()<<endl;
	cout<<"list is: ";
	while(trav !=NULL)
	{
		cout<<trav->data<<" ->";
		trav = trav->next;
	}
	cout<<"null"<<endl;
   }
	else
		cout<<"list is empty "<<endl;
}



int menu_list(void)
{
int choice;
cout<<"0 Exit"<<endl;
cout<<"1 ADDLAST"<<endl;
cout<<"2 ADDFIRST"<<endl;
cout<<"3 ADDPOS"<<endl;
cout<<"4 DELLAST"<<endl;
cout<<"5 DELFIRST"<<endl;
cout<<"6 DELPOS"<<endl;
cout<<"7 DISPLAY"<<endl;
cout<<"Enter your choice...."<<endl;
cin>>choice;
return choice;
}

int main(void)
{
	list l1;
	int data, pos,choice;

	while(1)
	{
		choice=menu_list();
		switch(choice)
		{
		case 0:
			l1.~list();
			break;

		case 1:
			cout<<"enter the data...."<<endl;
			cin>>data;
			l1.add_node_at_last_position(data);
			break;
		case 2:
			cout<<"enter the data...."<<endl;
			cin>>data;
			l1.add_node_at_first_position(data);
			break;
		case 3:
			while(1)
			{
				cout<<"enter the position..."<<endl;
				cin>>pos;
				if(pos>=1 &&pos<= l1.get_cnt()+1)
					break;
				cout<<"invalid position...."<<endl;
			}
			cout<<"enter the data..."<<endl;
			cin>>data;
			l1.add_node_at_specific_position(data,pos);
			break;
		case 4:
			l1.delete_node_at_first_position();
			break;

		case 5:
			l1.delete_node_at_last_position();
			break;
		case 6:
			while(1)
			{
				cout<<"enter the position.."<<endl;
				cin>>pos;
				if(pos>=1 && pos<= l1.get_cnt())
					break;
				cout<<"invalid position...."<<endl;
			}
			l1.delete_node_at_specific_position(pos);
			break;
		case 7:
			l1.displayvalues();
			break;
		}

	}
	return 0;

}




