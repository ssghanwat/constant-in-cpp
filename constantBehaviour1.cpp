#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;
		
		Demo(int a,int b) : j(b)
		{
			i=a;
		}
		
		void fun()
		{
			cout<<"\nInside fun";
			i++;       //Allowed
			//j++;     Not Allowed
		}
		
		void gun() const
		{
			cout<<"\nInside gun";
			i++;       //Not Allowed
			//j++;     Not Allowed
		}
};

int main()
{
	Demo obj(11,21);
	
	return 0;
}