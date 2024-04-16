/*Write a program to accept an integer and check if it is even or odd.*/

#include<iostream>
using namespace std;

int main()
{
	int i;
	cout<<"Enter the Integer:"<<endl;
	cin>>i;
	if(i%2==0)
	{
		cout<<"The integer is Even"<<endl;
	}
	else
	{
		cout<<"The integer is odd";
	
	}
	return 0;
	
}

