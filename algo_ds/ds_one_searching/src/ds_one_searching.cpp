#include<iostream>
#include<iomanip>
using namespace std;
#define SIZE 8
int comparison=0;
bool binary_search(int arr[],int key);
void display_array_elements(int arr[]);
bool updated_linear_search(int arr[],int key);
bool rec_binary_search(int arr[],int left,int right,int key);

bool binary_search(int arr[],int key)
{
	int left=0;
	int right=SIZE-1;
	comparison=0;
	while(left<=right)
	{
		int mid=(left+right)/2;
		comparison ++;
		if(key==arr[mid])
			return true;
	     if(key<arr[mid])
	    	 right=mid-1;
	     else
	    	 left=mid+1;

	}
	return false;
}
void display_array_elements(int arr[])
{
	cout<<"array elements are :  ";
	for(int i=0;i<SIZE;++i)
	cout<<setw(4)<<left<<arr[i];
	cout<<endl;

}

bool updated_linear_search(int arr[],int key)
{
	for(int i=0;i<SIZE && key>=arr[i];++i)
	{
		comparison ++;
		if(arr[i]==key)
			return true;
	}
	return false;
}
bool rec_binary_search(int arr[],int left,int right,int key)
{
	if(left>right)
		return false;
	comparison++;
	int mid=(left+right)/2;
	if(key==arr[mid])
		return true;
	if(key<arr[mid])
		return rec_binary_search(arr,left,mid-1,key);
	else
		return rec_binary_search(arr,mid+1,right,key);


}


int main(void)
{
	int arr[SIZE]={10,20,30,40,50,60,70,80};
     display_array_elements(arr);
	int key;
	cout<<"key elements are :  ";
	cin>>key;
	//if(binary_search(arr,key))
	if( updated_linear_search(arr,key) )
	//if(rec_binary_search(arr,0,SIZE-1,key))
	{
		cout<<"key is there in array  :   "<<key<<endl;
	cout<<"comparisons ::  "<<comparison<<endl;
	}
	else
	{
		cout<<"key is not there in array  :   "<<endl;
		cout<<"comparisons ::  "<<comparison<<endl;
	}
	return 0;
}
