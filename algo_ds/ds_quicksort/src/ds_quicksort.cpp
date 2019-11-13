#include<iostream>
#include<iomanip>
using namespace std;
#define SIZE 9
#define swap(a,b) {int t=a; a=b; b=t;}

void quick_sort( int arr[],int left,int right);
void display_arr_element(int arr[]);
int main(void)
{

	int arr[SIZE]={60,40,50,30,20,70,10,80,90};
	display_arr_element(arr);
	quick_sort(arr,0,SIZE-1);
	display_arr_element(arr);
	return 0;
}

void quick_sort( int arr[],int left,int right)
{
	if(left>=right)
		return;

	int i=left;
	int j=right;

	while(i<j)
	{
		while(i<=j && arr[i]<=arr[left])
			i++;

		while(arr[j]>arr[left])
			j--;

		if(i<j)
			swap(arr[i],arr[j]);
	}


	swap(arr[j],arr[left]);

	quick_sort(arr,left,j-1);
	quick_sort(arr,j+1,right);
}
 void display_arr_element(int arr[])
 {
	 cout<<"array elements are:  "<<endl;
	 for(int i=0; i<SIZE; ++i)
		 cout<< setw(4) << left << arr[i];
	 cout<<endl;

 }
