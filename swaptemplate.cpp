#include<iostream>
using namespace std;

template<class T>
void swap(T a,T b)
{
	cout<<"The number before swap a="<<a<<" b="<<b<<endl;
	T temp=a;
	a=b;
	b=temp;
	cout<<"The number after swap a="<<a<<" b="<<b<<endl;
}

 int main()
 {
 	swap(13,7);
 	return 0;
 }
