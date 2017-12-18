#include<iostream>
using namespace std;
class Detail
{
 public:
 	int phone;
 	string name;
	string address;
	
	//constructor Detail is created with the name same as that of the class name
	Detail(string n,string ad,int ph)
	{
		//passing argument values to the initial variables
		phone=ph;
		name=n;
		address=ad;
	}
	
	//anything declared inside the class is an method (i.e)here display is an method 
	void display()
	{
		cout<<"\n"<<name<<"\n"<<address<<"\n"<<phone;
	}
};
int main()
{
	Detail Akshaya=Detail("Akshaya","Greenway",1234567);//passing the values to the constructor. 
	Detail Vinoth=Detail("Vinoth","Telemart",135655617);
	Akshaya.display();
	Vinoth.display();
	return 0;
}
