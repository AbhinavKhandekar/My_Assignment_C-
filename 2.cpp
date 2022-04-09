#include <iostream>
using namespace std;

int main(){
	double num[6]={1,2,3,4,5,6};
	double sum=0;
	double avg;
	
	cout<<"The numbers are :: "<<endl;
	
	for(int i=0;i<=5;i++){
		cout<<num[i]<<" ";
		sum=sum+num[i];
	}
	// print the sum
    cout << "\nTheir Sum = " << sum << endl;

    // find the average
    avg = sum / 6;
    cout << "Their Average = " << avg << endl;

return 0;
}

