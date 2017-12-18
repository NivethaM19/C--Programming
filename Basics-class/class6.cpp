#include<iostream>
using namespace std;
class Detail
{
 public:
 int phone;
 static int id;//defined as static variable
 string name;
 string address;
 void display();
 Detail(int phone, string name,string address)
 {
           this->phone=phone;
           this->name=name;
           this->address=address;
           id++;
 }

 
};
int  Detail::id=0;//while declaring  variables satic
void Detail::display()
 {
  cout<<"\n"<<id<<" "<<name<<" "<<address<<" "<<phone;
 }

int main()
{
 Detail Anil=Detail(123,"Anil","Greenway");
 Anil.display();
 Detail Amal=Detail(123456,"Amal","Coimbatore");
 Amal.display();
}
