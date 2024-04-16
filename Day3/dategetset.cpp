/*Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. 
Create Default and Parameterized constructors. 
Create the object of this class in main method and invoke all the methods in that class. 
*/

#include<iostream>
using namespace std;

class Date{
    private:int date,month,year;
    
    public:
           Date(){
            this->date;
            this->month;
            this->year;
           }

           Date(int dd,int mm,int yy){
            date=dd;
            month=mm;
            year=yy;
           }

           int getdate(){
            return date;
           }
           void setdate(int dd){
            date=dd;
           }

           int getmonth(){
            return month;
           }
           void setmonth(int mm){
            month=mm;
           }

           int getyear(){
            return year;
            }
            void setyear(int yy){
                year=yy;
            }
    
    void display(){
        cout<<"Date:"<<date<<"/"<<month<<"/"<<year<<endl;
    }


};

int main()
{
    cout<<"Default constructor"<<endl;
    Date d1;
    //d1.display();
    cout<<"Parametrized constructor"<<endl;
    Date d2(25,11,2023);
    d2.display();

    cout<<"Upadated Date: "<<endl;
    d1.setdate(17);
    d1.setmonth(01);
    d1.setyear(2024);
    d1.display();
    return 0;
}