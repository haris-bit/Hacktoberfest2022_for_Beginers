#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	int z = a;
	a = b;
	b = z;
	
}


int main()
{
	
	int num1 = 100;
	int num2 = 200;
	swap(num1, num2);
	cout<<num1<<endl;
	cout<<num2<<endl;
	//references
	
	
	
	return 0;
}
