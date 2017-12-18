
#include <iostream>
using namespace std;
class FormDetail
{
public:
	string name;
	string address;
	int phone;

	//displays the ouptut on calling
	void display()
	{
 		cout<<"\n"<<name<<"\n"<<address<<"\n"<<phone;
	}
};
int main()
{
 //data given separately
 //no use of constructors

 FormDetail Akshaya; //object Akshaya created for the class 
 Akshaya.name="Akshaya";
 Akshaya.address="GreenWay";
 Akshaya.phone=1234567;
 
 //display function called
 Akshaya.display();
 
 FormDetail Vinoth;
 Vinoth.name="Vinoth";
 Vinoth.address="Telemart";
 Vinoth.phone=135655617;
 Vinoth.display();

 return 0;
}
