/*Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.
*/

#include<iostream>
using namespace std;

class student{
    private:int rollno, m1,m2, m3;
    double total,perc,grade;

    public: void acceptInfo()
    {
        cout<<"enter your roll no.:"<<endl;
        cin>>rollno;
        cout<<"Enter your marks of 3subjects out 100 each:";
        cin>>m1>>m2>>m3;
        total=m1+m2+m3;
        perc=(total*100)/300;
    }
    void display(){
        cout<<"Total marks out of 300:"<<total<<endl;
        cout<<"percentage:"<<perc<<endl;
        if(perc>=75 && perc<=100)
        {
            cout<<"grade is A";
        }
        else if(perc<75 && perc>=50 )
        {
            cout<<"grade is B";

        }
        else if(perc>=35 && perc<50)
        {
            cout<<"grade is c";
        }
        else if(perc>=0 && perc<35){
            cout<<"Fail";
        }
    }
};

int main()
{
    student s1;
    s1.acceptInfo();
    s1.display();

    return 0;
}