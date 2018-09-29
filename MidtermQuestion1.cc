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

return 0;
}
