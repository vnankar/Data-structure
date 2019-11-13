
#include<iostream>
using namespace std;
#include<iomanip>

#define SIZE 5


void accept_array_elements(int arr[]);
void display_array_elements(int arr[]);
int array_sum(int arr[]);
int rec_array_sum(int arr[],int i);
bool linear_search(int arr[],int key);

int comparisons=0;
bool linear_search(int arr[],int key)
{
	comparisons=0;
	for(int i=0;i<SIZE;++i)
	{
		comparisons++;
		if(arr[i]==key)
			return true;
	}
	return false;

}
void accept_array_elements(int arr[])
{
	cout<<"enter array elements:  "<<endl;
	for(int i=0;i < SIZE; ++i)
	{
		cout<< "enter arr["<<i<<"] : ";
		cin>>arr[i];
	}
}
void display_array_elements(int arr[])
{
	cout<< "entered array elements are:  ";
	for(int i=0;i<SIZE;++i)

		cout<<setw(4)<<left<<arr[i];
	    cout<<endl;

}
int array_sum(int arr[])
{
	int sum=0;
	for(int i=0;i<SIZE;++i)
	sum+= arr[i];
	return sum;
}
int rec_array_sum(int arr[],int i)
{
	if(i==SIZE)
		return 0;
	return(arr[i]+rec_array_sum(arr,i+1));
}

int main(void)
{
	int arr[SIZE]={10,20,30,40,50};
    //display_array_elements( arr);
     cout<<"sum :"<<array_sum(arr)<<endl;
   //cout<<"sum : "<<rec_array_sum(arr,0)<<endl;

    int key;
    cout<<"enter the key:   ";
    cin>>key;


    if(linear_search(arr, key) )
    {
    	cout<<"key exists in array :  "<<key<<endl;
    	cout<<"no.of comparisons are:  "<<comparisons<<endl;

    }
    else
    {
    	cout<<"key does not exits in an array"<<endl;
    	cout<<"no.of comparisons are:   "<<endl;
    }
    return 0;
}




