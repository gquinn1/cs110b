/*
//Charlotte Wilhelm
//assignment: HW2
//file: Shape.cpp
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
  
int lineLength, j, k, i, spaces, symbols;
char symbol;

  cout << "This program will output a parallelogram \n";
  cout << "How long do you want each side to be? \n";
  cin >> lineLength;
  cout << "What symbol do you want to use? \n";
  cin >> symbol;
  
  cout << "Draw: \n";
  

for (i = 0; i < lineLength; i++)
{
    if(i <= lineLength/2) {
        spaces = 0;    
        symbols = i + 1; 
    } else {
        spaces = i - lineLength / 2;   
        symbols = lineLength - i; 
    }

    for(j = 0; j < spaces; j++) cout << ' ';

    for(k = 0; k < symbols; k++) cout << symbol;

    cout << '\n';
}

return 0;
}
