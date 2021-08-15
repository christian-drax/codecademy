#include <iostream>

int main() {
  
  double height, weight;
  double bmi;
  
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  // Now ask the user for their weight and calculate BMI
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;

  bmi = weight / (height * height);
  std::cout << "Your BMI is " << bmi << "\n";
  
  int age = 28;
 
 std::cout << "Hello, I am ";
 std::cout << age;
 std::cout << " years old\n";
  
  
  
  
  
  
  
  
  
  return 0;

}