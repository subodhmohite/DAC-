/*Write a program to swap two numbers*/

#include<iostream>
using namespace std;

int main()
{
	int num1,num2,temp;
	
	num1=7;
	num2=13;
	cout<<"Before Swapping num1:"<<num1<<" num2:"<<num2<<endl;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"After Swapping num1:"<<num1<<" num2:"<<num2;
	return 0;
}

