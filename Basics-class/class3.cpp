#include<iostream>
using namespace std;
class Detail
{
 public:
 int phone;
 string name;
 string address;
 void display();//declaring a function
 Detail(int phone, string name,string address)
 {
           //this() function when argument and variable name are same
	   //else will throw an error
	   this->phone=phone;
           this->name=name;
           this->address=address;
           
 }
};
//function calling using scope resolution.
void Detail::display() //function-defined outside the class 
 {
  cout<<"\n"<<" "<<name<<" "<<address<<" "<<phone;
 }

int main()
{
 Detail Anil=Detail(123,"Anil","Greenway");
 Anil.display();
 Detail Amal=Detail(123456,"Amal","Coimbatore");
 Amal.display();
}
