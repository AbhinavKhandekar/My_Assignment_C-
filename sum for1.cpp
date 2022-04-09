#include <iostream>
using namespace std;
//sum of natural numbers

int main(){
	int number;
	
	cout<<"Enter Number to find sum of ";
	
	cin>>number;
	
	
	int sum;
	
	for(int counter=1;counter<=number;counter++)
	{
		cout<<" Sum is "<< sum<<" counter is  "<<counter<<endl;    
		sum=sum+counter;
	}
	
	cout<<"Addition is :"<<sum;

return 0;
}

