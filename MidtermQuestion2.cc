#include <iostream>
using namespace std;

int main()
{
  int length;
  
  // User input - Array length
  cout << "How long do you want your array to be? " << endl;
  cin >> length;
  cout << endl;
  
  int array[length] = {};
  
  // User input - Elements
  cout << "Enter the elements of your array: " << endl;
  for(int i = 0; i < length; ++i)
    cin >> array[i];
  cout << endl;
  
  // Print the elements of the array
  cout << "These are the elements of your array: " << endl;
  for(int index = 0; index < length; ++index)
    cout << array[index] << ' ';
  cout << endl;
  
  // Print smallest and largest number
  int smallest = array[0];
  for (int i = 1; i < sizeof(array)/sizeof(array[0]); i++)
    if (array[i] = smallest)
       smallest = array[i];
  
  int largest = array[length];
  for (int j = 0; j < length; j++)
    if (array[j] > largest)
    largest = array[j];
  
  cout << "This is the smallest element in your array: " << endl;
  cout << smallest << endl;
  cout << "This is the largest element in your array: " << endl;
  cout << largest << endl;
  
  cout << endl;
  cout << endl;

return 0;
}
