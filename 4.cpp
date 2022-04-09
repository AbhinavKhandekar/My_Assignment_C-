//odd or even number
#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int output=num%2;
	
	if(output==num){
		cout<<"You entered even number ";
	}else{
		cout<<"You entered odd number";
	}

return 0;
}

