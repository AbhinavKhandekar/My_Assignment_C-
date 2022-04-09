#include <iostream>
using namespace std;

int main(){
	double cPrice,sPrice;
	
	cout<<"Enter cost price of product"<<endl;
	cin>>cPrice;
	
	cout<<"Enter selling price of product"<<endl;
	cin>>sPrice;
	
	if(cPrice>sPrice){
		cout<<"Loss of Product"<<endl;
	}else if(cPrice<sPrice){
		cout<<"Profit of Product";
	}

return 0;
}

