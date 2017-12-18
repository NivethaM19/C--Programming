#include<iostream>
using namespace std;
class Detail
{
 public:
 int phone;
 int id=0;//initialised
 string name;
 string address;
 void display();
 Detail(int phone, string name,string address)
 {
           this->phone=phone;
           this->name=name;
           this->address=address;
           id++;// should increment during each function call
 }

 
};

void Detail::display()
 {
  cout<<"\n"<<id<<" "<<name<<" "<<address<<" "<<phone;
 }

int main()
{
 Detail Anil=Detail(123,"Anil","Greenway");
 Anil.display();// displays id as 1
 Detail Amal=Detail(123456,"Amal","Coimbatore");
 Amal.display();// displays id as 1
}

output:
1 Anil Greenway 123
1 Amal Coimbatore 123456
//id value not incremented so declare int id as static(refer next prog)

