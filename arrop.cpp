#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"how many element you want to add im array";
	cin>>size;
	int arr[size];
	
	
	cout<<"Enter the array element:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"enter the "<<i<<" the element";
		cin>>arr[i];
	}
	
	cout<<"the array element befor swaping are:";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"the array element afyter swaping are:";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nthe second lowest elemnt is"<<arr[1]<<endl;
	cout<<"\nthe second Maximum elemnt is"<<arr[size-2]<<endl;
	return 0;
}
