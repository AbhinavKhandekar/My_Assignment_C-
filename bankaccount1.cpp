/*Create a class named 'BankAccount' with the following data members
1 - Name of depositor
2 - Address of depositor
3 - Type of account
4 - Balance in account
5 - Number of transactions*/
#include <iostream>
#include<string>
using namespace std;
//Class creation
class BankAccount{
	//Access modifier 
	public:
		string Name;
		string adress;
		string accountType;
		double balance,transaction;
	};
	int main(){
		//Object Creation of Given Class
	BankAccount obj1;
	obj1.Name="Abhinav";
	obj1.adress="AT/post Solapur";
	obj1.accountType="Saving account";
	obj1.balance=25000;
	obj1.transaction=15;
	
	//Display BankHolder Details
	        cout<<"Name of depositor : "<<obj1.Name<<endl;
			cout<<"Address of depositor : "<<obj1.adress<<endl;
			cout<<"Type of account : "<<obj1.accountType<<endl;
			cout<<"Balance in account : "<<obj1.balance<<endl;
			cout<<"Number of transactions : "<<obj1.transaction<<endl;

return 0;
}

