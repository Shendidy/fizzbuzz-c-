#include <iostream>

using namespace std;

int main()
{
  int number;

  cout << "Enter your number to use for FizzBuzz: ";
  cin >> number;
  int i = 1;

  while (i <= number) {
    cout << i << endl;
    i++;
  }

  return 0;
}