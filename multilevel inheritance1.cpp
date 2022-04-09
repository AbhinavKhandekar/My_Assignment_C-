//multilevel inheritance
#include <iostream>  
using namespace std;  
//base class/parent class
 class Animal {  
   public:  
 void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };  
   //derived class1/child class
   class Dog: public Animal   
   {    
       public:  
     void bark(){  
    cout<<"Barking..."<<endl;   
     }    
   };   
   //derived class2/grandchild class
   class BabyDog: public Dog   
   {    
       public:  
     void weep() {  
    cout<<"Weeping...";   
     }    
   };   
int main(void) {  
    BabyDog d1;  //derived class2 >> object creation
    d1.eat();  
    d1.bark();  
     d1.weep();  
     return 0;  
}  

