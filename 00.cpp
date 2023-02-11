#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::cout << "What course are you studying?\n";
  getline (std::cin, name);
  std::cout << "Hello " << name << "!\n";
}