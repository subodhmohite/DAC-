/*Write a program, which accepts annual basic salary of an employee and calculates and displays the 
Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20% 
 > 3,00,000 Tax = 30% */
 
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	double basic_salary,tax;
 	cout<<"Enter the Annual Basic Salary of Employee:"<<endl;
 	cin>>basic_salary;
 	if(basic_salary<150000)
 	{
 		cout<<"The Tax=0";
 		
	 }
	 else if(basic_salary>=150000 && basic_salary<=300000)
	 {
	 	tax=basic_salary*20/100;
	 	cout<<"Tax="<<tax;
	 }
	 else if(basic_salary>300000)
	 {
	 	tax=basic_salary*30/100;
	 	cout<<"Tax="<<tax;
	 }
	 return 0;
 }
