// Default Constuctor 
#include <iostream>
using namespace std;
class Simple{
	int data1;
	int data2;
	int data3;
	public:
		Simple(int a,int b=7,int c=8){
			data1 = a;
			data2=b;
			data3=c;
		}
		void printData();
};

void Simple::printData(){
	cout<<"The Value of Data is : "<<data1<<" , "<<data2<<" and "<<data3<<endl;
}
int main(){
	Simple s(1);//Default Constuctor
	s.printData();

return 0;
}

