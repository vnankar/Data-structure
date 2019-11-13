#include<iostream>
#include<string>
using namespace std;
class Student
{
private :
	int roll_no;
	string name;
	int age;
public:
	Student(void)
{
		cout<<"parameterless constructor"<<endl;
		cout<<"========================"<<endl;
		this->roll_no=0;
		this->name=" ";
		this->age=0;
}//end of parameterless
	Student(int roll_no,string name,int age)
	{
		cout<<"parameterize constructor"<<endl;
		this->roll_no=roll_no;
		this->name=name;
		this->age=age;
	}//end of parameterize
	void acceptrecord()
		{
		    cout<<"enter the student info:  "<<endl;
			cout<<"Enter roll_no  :    "<<endl;
			cin>>this->roll_no;
			cout<<"Enter name  :    "<<endl;
		    cin>>this->name;
			cout<<"Enter age  :    "<<endl;
		    cin>>this->age;

	}// end acceptrecord
void printrecord()
{
	cout<<"Roll_no is :   "<<this->roll_no<<endl;
	cout<<"Name is    :   "<<this->name<<endl;
	cout<<"Age is     :   "<<this->age<<endl;

}// end printrecord
void setroll_no(int roll_no)
	{
		this->roll_no=roll_no;
		return;
	}
int getroll_no(void)
	{
		return this->roll_no;
	}


};
int main(void)
{
	Student vishal;
	vishal.setroll_no(10);
	vishal.getroll_no();
	vishal.printrecord();
	cout<<"========================"<<endl;
	 int size;
      cout<<"Enter the array size:  "<<endl;
      cin>>size;
    cout<<"========================"<<endl;
	 Student *arr=new Student[size];
	 for (int i=0;i<size;++i)
	 {
		 arr[i].acceptrecord();
	 }
	for(int i=0;i<size;++i)
	{
		arr[i].printrecord();
	}
	if(arr!=NULL)
	{
		delete[]arr;
		arr=NULL;
	}


	return 0;


}
