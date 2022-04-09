#include <iostream>
using namespace std;
//Assignment no 2- separate even and odd numbers in an array
int main(){
	int number[10],i;
	cout<<"enter 5 numbers :"<<endl;
	for(int i=0;i<5;i++)
	cin>>number[i];
	
	cout << "All even list is:";
    for (i = 0; i < 5; i++) {
        if (number[i] % 2 == 0)
            cout << number[i] << " ";
    }

    cout << "\nAll odd list is:";
    for (i = 0; i < 5; i++) {
        if (number[i] % 2 != 0)
            cout << number[i] << " ";
    }

return 0;
}

