//single Inheritance
#include <iostream>  
using namespace std;  
//base class
 class Animal {  
   public:  
 void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };  
   //derived class
   class Dog: public Animal    
   {    
       public:  
     void bark(){  
    cout<<"Barking...";   
     }    
   };   
int main(void) {  
    Dog d1;  //object creation
    d1.eat();  //calling 
    d1.bark();  
    return 0;  
}  



