#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	void print()
	{
		cout<<real<<"+i"<<imag<<endl;
	}
	Complex(int r,int i)
	{
		real=r;
		imag=i;
	}
};

int main()
{
	Complex c1(10,15);
	c1.print();
	// c1.real;

	return 0;
}