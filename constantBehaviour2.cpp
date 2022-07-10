#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;                                       //constant characteristic
		
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
		
		void gun(int a,const int b) const                 //constant behaviour or function
		{
			int x=10;
			const int y=20;                                //constant local variable
			
			cout<<"\nInside gun";
			
			//i++;       //Not Allowed
			//j++;     Not Allowed
			
			x++;      //Allowed
			//y++;    Not Allowed
			
			a++;      //Allowed
			//b++;      //Not Allowed
		}
};

int main()
{
	Demo obj(11,21);
	
	
	return 0;
}