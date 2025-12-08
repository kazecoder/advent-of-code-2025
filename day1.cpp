#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::string input_data {};
  
  std::ifstream inf{"Input.txt"}; 
  
  int dial = 50;
  int value = 0;
  char direction = 'L';
  int password = 0;

  if(!inf)
  {
    std::cerr << "Input.txt could not be opened for reading\n";
    return 1; 
  }

  while(std::getline(inf,input_data))
  {
    direction = input_data[0];
    value = std::stoi(input_data.substr(1));
    
    switch(direction)
    {
      case 'L':
        dial = (dial - value) % 100;
        break;

      case 'R':
        dial = (dial + value) % 100;
        break;

      default:
        break;
    }

    if(dial == 0 )
    {
      password++;
    }
  }

  std::cout << "Password: " << password;
}
