#include<iostream>
#include<iomanip>
using namespace std;

#define SIZE 8
void display_array_element(int arr[]);
void insertion_sort( int arr[]);

int main(void)
{
	int arr[SIZE]={75,55,60,70,80,90,85,65};
	display_array_element(arr);
	cout<<"==================="<<endl;
	insertion_sort(arr);
	display_array_element(arr);
	cout<<"==================="<<endl;
	return 0;
}
void insertion_sort( int arr[])
{
  int iterations=0;
  int while_cnt=0;

  for(int i=1; i<SIZE; ++i)
  {
	  int key=arr[i];
	  int j=i-1;
	  iterations ++;
	  while(j>=0 && key < arr[j])
	  {
		  arr[j+1]=arr[j];
		  j--;
		  while_cnt ++;
	  }
	  arr[j+1]=key;
  }
cout<<"iterations are:  "<<iterations<<endl;
cout<<"while count:  "<<while_cnt;
cout<<endl;
cout<<"==================="<<endl;
}

void display_array_element(int arr[])
{
	cout<<"array elements are:  "<<endl;
	for(int i=0; i<SIZE; ++i)
		cout<< setw(4) << left << arr[i];
	cout<<endl;
}
