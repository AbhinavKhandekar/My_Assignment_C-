#include<iostream>
using namespace std;
class Count{
	private:
		int value;
	public:
	    count(){
	    	value=10;
		}	
		
	void operator ++(){
		cout<<"Calling prifix function "<< endl;
		value++;
	}	
	
		void operator ++(int){
		cout<<"Calling postfix function "<< endl;
		value++;
	}
	void display(){
		cout<<"Count : "<<value<<endl;
	}	
};

int main(){
	Count count1;
	++count1;
	
	count1.display();
	
	Count count2;
	count2++;
	
	count2.display();
	
	return 0;
	
}
