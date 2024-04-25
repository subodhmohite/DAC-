


#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Book{
	private:
	        char name[20];
	
	public:
		   void setdata(char* nm)
		   {
		   	strcpy(name,nm);
		   	
		   }
		   
		   void display()
		   {
		   	cout<<"The Book name is:"<<name<<endl;
		   	
		   }
		
};

int main()
{
	char name[20];
	cout<<"Enter book name"<<endl;
	gets(name);
	
	Book b1;
	b1.setdata(name);
	b1.display();
	
	//write
	ofstream out("demo.txt",ios::binary|ios::app);
	out.write((char*)&b1,sizeof(Book));
	
	//read
	Book b2;
	ifstream in("demo.txt",ios::binary|ios::out);
	while (in.read((char*)&b2,sizeof(Book)))
	{
	 b2.display();
    }
	return 0;
	
	
}

















































