#include <iostream>
using namespace std;
//Write a Program to print the marks scored by a student in 10 subjects
//Array assignment no.1 student marks
int main(){
	int subject[10]={75,70,72,76,80,60,62,55,68,71};
	cout<<"student marks in 10 subject"<<endl;
	for (int i=0;i<10;i++){
		cout<<"\nStudent marks is ::"<<" "<<subject[i]<<endl;
	}

return 0;
}

