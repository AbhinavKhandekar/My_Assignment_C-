#include <iostream>
using namespace std;
//Average Numbers using for loop
int main(){
   int num;
  float input, sum=0, avg;
  cout<<"Enter 5 Number : ";
   cin >> num; 

    for(int i = 1; i < num; i++){
      cin >> input;
      sum += input;
    }

  avg = sum / num;
  cout << "average = " << avg << endl;

return 0;
}

