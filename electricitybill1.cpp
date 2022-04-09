/*Write  program to input electricity unit charge and calculate 
the total electricity bill according to the given condition:
For first 75 units Rs. 1/unit
For next 150 units Rs. 2/unit
For next 250 units Rs. 3/unit*/
#include <iostream>
using namespace std;

int main(){
	double unit,bill;
	int charge;
	cout<<"enter used units by customer"<<endl;
	cin>>unit;
	
	if(unit<=75){
		cout<<"Bill is "<<unit*1<<endl;
	}else if (unit>75 && unit<=150){
		cout<<"Bill is : "<<unit*2-75<<endl;
	}else if(unit>150 && unit<=250){
		cout<<"Bill is : "<<unit*3-75-150;
	}

return 0;
}

