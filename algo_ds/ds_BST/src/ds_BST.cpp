#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;
int selection_sort(int arr[]);
int main(void)
{
	int arr[100];
    selection_sort(arr);

		return 0;
}
int selection_sort(int arr[])
{

	int elements;
		cout<<"enter total elements in array"<<endl;
		cin>>elements;

		cout<<"enter "<<elements<<" elements in array"<<endl;
		for(int i=0;   i<elements;  ++i)
		{
			cin>>arr[i];
		}
		  cout<<"elements in array:   "<<endl;
			for(int i=0;   i<elements;  ++i)
			{
				cout<<setw(4)<<left<<arr[i];

			}

	int cnt;
	for(int i=0; i<elements; ++i)
	{
		cnt=0;
		for(int j=i+1; j<elements ; ++j)
		{
			if(arr[i] == arr[j])
				cnt ++;
		}
		if(cnt == 0)
		{
			cout<<"\n non-repeating element is: "<<arr[i]<<endl;
		    return  0;
		}
	}

return 0;

}
