#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float number, number2, total, total2;
  int choice;

	cout << "Enter a number: " << endl;
	cin >> number;
	
	cout << "Enter a second number: " << endl;
	cin >> number2;

	cout << "Enter 1 your choice (1/2/3)" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Square Root" << endl;
	cout << "6. Sqaure" << endl;
	cout << "7. Cube Root" << endl;
	cout << "8. Cube" << endl;
	cout << "9. Power" << endl;

	cin >> choice;

	switch (choice) 
	{
		case 1:
		total = number + number2;
		cout << "The sum of " << number << " plus " << number2 << " is: " << total << endl;
		break;
	
		case 2:
		total = number - number2;
		cout << "The difference of " << number << " minus " << number2 << " is: " << total << endl;
		break;

		case 3:
		total = number * number2;
		cout << "The product of " << number << " times " << number2 << " is: " << total << endl;
		break;
	
		case 4:
		if(number == 0 || number2 == 0)
		cout << "Enter a number greater than 0";
		else
		total = number / number2;
		cout << "The quotient of " << number << " times " << number2 << " is: " << total << endl;
		
    case 5:
		total = sqrt(number);
    total2 = sqrt(number2);
    cout << "The square root of the first number is " << total << endl;
    cout << "The square root of the second number is " << total2 << endl;
	  
    case 6:
		total = pow(number, number2);
    cout << "The square of the two numbers is: " << total << endl;

    case 7:
		total = cbrt(number);
    total2 = cbrt(number2);
    cout << "The cube root of the frist number is: " << total << endl;
    cout << "The cube root of the second number is: " << total << endl;
  
    // case 8:
		// total = cube

    // case 9:
		// total = power
      
    // Input Validation
	
	}

	return 0;
}
# cs110b
# cs110b
# cs110b_wk1
# cs110b_wk1
# cs110b_wk1
