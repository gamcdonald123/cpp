#include <iostream>

int main()
{
  int num1 = 0, num2 = 0;

  std::cout << "Enter beginning number: " << std::endl;
  std::cin >> num1;
  std::cout << "Enter end number: " << std::endl;
  std::cin >> num2;

  int sum = 0, val = num1;
  
  while (val <= num2) {
    sum += val;
    ++val;
  }
  std::cout << "Sum of " << num1 << " to " << num2 << " inclusive: " << sum << std::endl;

  return 0;
}
