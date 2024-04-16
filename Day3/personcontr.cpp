/*Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class Person{
    private:string name;
            int age;
             string city;
            
    public: Person(){
        name="NULL";
        age=0;
        city="NULL";
    }
     Person(string n,int a,string c){
        name=n;
        age=a;
        city=c;
     }
    
    string getname(){
        return name;
    }
    void setpname(string n){
    name=n;
    } 
    
    int getage(){
        return age;
    }
    void setage(int a){
        age=a;
    }

    string getcity(){
        return city;
    }
    void setcity(string c){
        city=c;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"City:"<<city<<endl;
    }


};

int main()
{
    cout<<"Default Contsructor"<<endl;
    Person p1;
    //p1.display();
    cout<<endl;

    cout<<"Updated info"<<endl;
    p1.setpname("Vaishnavi");
    p1.setage(22);
    p1.setcity("Navi Mumbai");
    p1.display();
    cout<<endl;
    
    Person p2("Subodh",23,"Navi Mumbai");
    p2.display();

    return 0;
}
