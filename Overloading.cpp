//absolute valus both int and float parameter // Overloading concept of Polymorphisim

#include<iostream>
using namespace std;

//Function with float type Parameter
float absolute(float var){
	cout<<"Called Absolute with float "<<endl;
	if(var<0.0)
	var=-var;
	return var;
}
//Function with int type Parameter
int absolute(int var){
	cout<<"Called Absolute with int "<<endl;
	if(var<0)
	var=-var;
	return var;
}

int main(){
	//call function with int type
	cout<<"Absolute vale of -5= "<<absolute(-5)<<endl;
	//call function with float type
	cout<<"Absolute vale of 5.5= "<<absolute(5.5f)<<endl;
	
	return 0;
}
