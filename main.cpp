#include <iostream>
#include <cmath>

int main() {
  
  // user input for variables in equation
  double a;
  double b;
  double c;
  std::cout <<"Enter a number for the variable a: ";
  std::cin >> a;
  std::cout <<"Enter a number for the variable b: ";
  std::cin >> b;
  std::cout << "Enter a number for the variable c: ";
  std::cin >> c;

  // getting the roots of the equations
  double root1;
  double root2;
  // the postive root
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  // the negative root
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  // display values
  std::cout << "The postive root value is " << root1 << "\n";
  std::cout << "The negative root value is " << root2 << "\n";


}
