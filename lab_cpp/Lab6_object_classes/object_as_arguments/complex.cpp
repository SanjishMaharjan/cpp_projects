// C++ program to Add two complex numbers
#include<iostream>
using namespace std;

//  Defining Complex class
class Complex {

	// Declaring variables
	public:
		int real, imaginary;

	Complex() // Empty constructor so that later C3 can be called to store sum
	{
	}

	// Constructor to accept real and imaginary part which goes as argument
	Complex(int Real1, int Imaginary1)
	{
		real = Real1;
		imaginary =Imaginary1;
	}

	// Defining addComp() method for adding two complex number
	Complex addComp(Complex C1, Complex C2)
	{
		Complex num;
		num.real = C1.real + C2.real;   // adding real part of complex numbers
		num.imaginary = C1.imaginary + C2.imaginary; // adding Imaginary part of complex numbers
		return num;
	}
};

int main()
{
	
	Complex C8(2,5);   // First Complex number
	Complex C6(9, 5);  // Second Complex number
	Complex C3;    // To store the sum of numbers
			//printing value of complex numbers
	cout<<"First complex is "<<C8.real<<" + i"<< C8.imaginary<<endl;
	cout<<"Second complex is "<<C6.real<<" + i"<< C6.imaginary<<endl;
	
	C3 = C3.addComp(C8, C6); // calling addComp() method

	// printing the sum
	cout<<"Sum of complex number : "<< C3.real << " + i"	<< C3.imaginary;

     return 0;			
}
					
