#include <iostream>
#include <cmath>
using namespace std;

int addition();
int subtraction();
int multiplication();
int division();
int squareRoot();
int square();
int cubeRoot();

float addition(float number, float number2)
{
    float total;
  	total = number + number2;
		cout << "The sum of " << number << " plus " << number2 << " is: " << total << endl;
    return total;
}

float subtraction(float number, float number2)
{
    float total;
		total = number - number2;
		cout << "The difference of " << number << " minus " << number2 << " is: " << total << endl;
    return total;
}

float multiplication(float number, float number2)
{
    float total;
  	total = number * number2;
		cout << "The product of " << number << " times " << number2 << " is: " << total << endl;
    return total;
}

float division(float number, float number2)
{
    float total;
  	if(number == 0 || number2 == 0)
		cout << "Enter a number greater than 0";
		else
		total = number / number2;
	  cout << "The quotient of " << number << " times " << number2 << " is: " << total << endl;
    return total;
}

float squareRoot(float number, float number2)
{
    float total, total2;
  	total = sqrt(number);
    total2 = sqrt(number2);
    cout << "The square root of the first number is " << total << endl;
    cout << "The square root of the second number is " << total2 << endl;
    return total, total2;
}

float square(float number, float number2)
{
    float total;
  	total = pow(number, number2);
    cout << "The square of the two numbers is: " << total << endl;
    return total;
}

float cubeRoot(float number, float number2)
{
    float total, total2;
		total = cbrt(number);
    total2 = cbrt(number2);
    cout << "The cube root of the first number is: " << total << endl;
    cout << "The cube root of the second number is: " << total2 << endl;
    return total, total2;
}

int main()
{
  float number, number2;
  int choice;

	cout << "Enter a number: " << endl;
	cin >> number;
	
	cout << "Enter a second number: " << endl;
	cin >> number2;

	cout << "Enter your choice (1/2/3/4/5/6/7)" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Square Root" << endl;
	cout << "6. Sqaure" << endl;
	cout << "7. Cube Root" << endl;
  cout << " " << endl;
  cout << "Your Choice: " << endl;

	cin >> choice;
  cout << " " << endl;

	switch (choice) 
	{
		case 1:
    addition(number, number2);
		break;
	
		case 2:
    subtraction(number, number2);
		break;

		case 3:
    multiplication(number, number2);
		break;
	
		case 4:
    division(number, number2);
    break;
		
    case 5:
    squareRoot(number, number2);
    break;
	  
    case 6:
    square(number, number2);
    break;

    case 7:
    cubeRoot(number, number2);
    break;
	}

	return 0;
}

