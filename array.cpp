#include<iostream>
using namespace std;

int main()

{
	int size;
	cout<<"Enter The Size of array to store the element in array:"<<endl;
	cin>>size;

	int arr[size];

	cout<<"Enter the array Elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The Array element are:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
		
	}
	
	for(int i=0;i<size;i++)
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
	cout<<endl;
	cout<<"After sorting the Array element are:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
	//cout<<"The 2nd lowest element of array is:"<<arr[1]<<endl;
	//cout<<"The 2nd Highest element of array is:"<<arr[size-2]<<endl;
    //cout<<"Jai Shree Ram"<<endl;
	return 0;
	
}
