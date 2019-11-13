#include<iostream>
#include<iomanip>
using namespace std;
#define SIZE 9
#define SWAP(a,b) {int t=a;a=b;b=t;}

void display_array_elements(int arr[]);
void bubble_sort(int arr[]);

 int main(void)
{
int arr[SIZE]={90,80,70,60,50,40,30,20,10};
display_array_elements(arr);
bubble_sort(arr);
display_array_elements(arr);
return 0;

}
void bubble_sort(int arr[])
{
	int  iterations=0;
	 int comparisons=0;
	for(int it=0; it<SIZE-1;++it)
	{
		iterations ++;
		for ( int pos=0;pos<SIZE-it-1;pos++)
		{
			comparisons ++;

        if(arr[pos]>arr[pos+1])
		SWAP (arr[pos],arr[pos+1])
		}


	cout<<"after iterations"<<iterations<<endl;  display_array_elements(arr);
	}
	cout<<endl;
	cout<<"iterations are:  "<<iterations<<endl;
	cout<<"comparisons are:  "<<comparisons<<endl;
}
 void display_array_elements(int arr[])
{
cout<<"array elements are :   "<<endl;
for(int i=0; i<SIZE;  ++i)
	cout<< setw(4) << left << arr[i];
cout<<endl;
}
