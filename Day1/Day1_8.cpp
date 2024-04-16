/*Write a  program to input angles of a triangle and check whether triangle is valid or not.*/

#include<iostream>
using namespace std;

int main()
{
	int angle1,angle2,angle3,total;
	cout<<"Enter the Three Angles:";
	cin>>angle1>>angle2>>angle3;
	total=angle1+angle2+angle3;
	if(total==180)
	{
		cout<<"The Triangle is Valid";
	}
	else
	cout<<"The Triangle is not vaild";
	return 0;
}
