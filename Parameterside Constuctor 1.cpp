#include <iostream>
using namespace std;
//Parameterside Constuctor
class Complex{
	int a,b;
	public:
		Complex (int x, int y){
			a=x;
			b=y;
		}
		void printData(){
			cout<<"Your Number is : "<<a<<"+"<<b<<"i"<<endl;
		}
};
int main(){
	Complex c1(4,5);
	c1.printData();

return 0;
}

