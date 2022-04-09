//Multipale Inheritance
#include <iostream>
using namespace std;
//base class 1
class A  
{  
    protected:  
     int a;  
    public:  
    void get_a(int n)  
    {  
        a = n;  
    }  
};  
  //base class2
class B  
{  
    protected:  
    int b;  
    public:  
    void get_b(int n)  
    {  
        b = n;  
    }  
};  
//derived class
class C : public A,public B  
{  
   public:  
    void display()  
    {  
        std::cout << "The value of a is : " <<a<< std::endl;  
        std::cout << "The value of b is : " <<b<< std::endl;  
        cout<<"Addition of a and b is : "<<a+b;  
    }  
};  
int main()  
{  
   C c;  //derived class object
   c.get_a(10);  
   c.get_b(20);  
   c.display();  
  
    return 0;  
}  
