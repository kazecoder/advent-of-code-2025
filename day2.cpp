#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::ifstream input{"Input.txt"};
  std::string strInput{};

  input >> strInput;

  std::cout << strInput << "\n";
  
  std::string first_num = "";
  std::string second_num = "";

  for(int i = 0; i < strInput.length();i++)
  {
    std::cout << strInput[i] << "\n";
  }
  

 }
