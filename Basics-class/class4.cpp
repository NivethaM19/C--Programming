#include<iostream>
using namespace std;
class Detail
{
 public:
 int phone;
 string name;
 string address;
 Detail(int phone, string name,string address)
 {
           //this() function when argument and variable name are same
	   this->phone=phone;
           this->name=name;
           this->address=address;
           
 }
void display() //method-defined inside the class
 {
  cout<<"\n"<<" "<<name<<" "<<address<<" "<<phone;
 }
};

int main()
{
 Detail Anil=Detail(123,"Anil","Greenway");
 Anil.display();
 Detail Amal=Detail(123456,"Amal","Coimbatore");
 Amal.display();
 return 0;
}
