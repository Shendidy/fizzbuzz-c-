#include <iostream>

using namespace std;

int main()
{
  int number;

  cout << "Enter your number to use for FizzBuzz: ";
  cin >> number;
  int i = 1;

  while (i <= number) {
    if(i % 15 == 0){
      cout << "FizzBuzz" << endl;
    }
    else if(i % 5 == 0) {
      cout << "Fizz" << endl;
    }
    else if(i % 3 == 0) {
      cout << "Buzz" << endl;
    }
    else {
      cout << i << endl;
    }
    
    i++;
  }

  return 0;
}