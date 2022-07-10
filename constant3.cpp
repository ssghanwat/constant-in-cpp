#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;
		
		Demo() : j(20)     
		{
			i=10;
		}
		
		Demo(int a,int b) :j(b)
		{
			i=a;
		}
};
int main()
{
	Demo obj(11,21);
	cout<<"\n"<<obj.i;
	cout<<"\n"<<obj.j;
	
	obj.i++;
	cout<<"\nAfter increased"<<obj.i;
	
	cout<<"\n"<<obj.j+1;
	//obj.j++;                                  Not Allowed
	//cout<<"\nAfter increased"<<obj.j;
	
	return 0;
}