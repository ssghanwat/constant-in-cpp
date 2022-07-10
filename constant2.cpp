#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;
		
		Demo() : j(20)     // Using Member Initialization list
		{
			i=10;
			//j=20;    Not Allowed
			
		}
};
int main()
{
	Demo obj;
	cout<<"\n"<<obj.i;
	cout<<"\n"<<obj.j;
	
	return 0;
}