/*1.Write a program to print the name,salary and date of joining of 10 employees in a company. 
Use array of objects.*/
#include <iostream>
#include<string>
using namespace std;

int main(){
	cout<<"Name of Employee :"<<endl;
	char *names[10] = {"john", 
                    "Peter",  
                    "Marco",  
                    "Devin",  
                    "Ronan"};  
for(int i=0;i<5;i++)  
    {  
        std::cout << names[i] << std::endl;  
    } 
	 
    cout<<"****************************************************"<<endl;
    cout<<"Salary of above Employee"<<endl;
	int salary[10]={25000,30000,15000,200000,350000};
	for (int i=0;i<5;i++){
		cout<<salary[i]<<"  "<<endl;
	}
	cout<<"*****************************************************"<<endl;
	cout<<"Joining date of above employee"<<endl;
	char *date[10]={"5 jan 2020",
	                "7 feb 2021",
					"10 mar 2020",
					"14 apr 2021",
					"5 june 2021"};
	for (int i=0;i<5;i++){
		cout<<date[i]<<endl;
	}				
	
	

return 0;
}

