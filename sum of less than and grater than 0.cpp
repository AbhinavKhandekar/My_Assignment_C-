#include <iostream>
using namespace std;
//Assgnment no-3 find the sum of numbers less than 0 and numbers greater than 0 in an given array 

int main(){
	int n;
	int number [n],sum = 0;
 cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    for (int i = 1; i <= n; --i) {
        sum += i;
	}
}
    cout << "Sum = " << sum;

return 0;
}

