#include <iostream>
#include <iomanip>

int ft_whatIs(std::string input);

void  ft_infOrNan(std::string s)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if ((s.compare(0, s.length(), "nan") == 0) || s.compare(0, s.length(), "+nan") == 0 || s.compare(0, s.length(), "-nan") == 0)
    {
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
    }
    if (s.compare(0, s.length(), "-inf") == 0 || s.compare(0, s.length(), "-inff") == 0)
    {
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
    }
    if ((s.compare(0, s.length(), "+inf") == 0) || s.compare(0, s.length(), "inf") == 0 || s.compare(0, s.length(), "+inff") == 0 || s.compare(0, s.length(), "inff") == 0)
    {
    std::cout << "float: inff" << std::endl;
    std::cout << "double: inf" << std::endl;
    }
}

void  printInt(std::string s)
{
  //std::cout << "--INT--" << std::endl;
  int n = std::stoi(s);

    if (n <= 31 )
    std::cout << "char: Non displayable" << std::endl;
  if (n > 32 && n < 127)
    std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
  if (n >= 128)
    std::cout << "char: impossible" << std::endl;

  std::cout << "int: " << static_cast<int>(n) << std::endl;
  std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(n) << "f" << std::endl;
  std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void  printDouble(std::string s)
{
  //std::cout << "--DOUBLE--" << std::endl;
  double n = std::stod(s);

  if (n <= 31 )
    std::cout << "char: Non displayable" << std::endl;
  if (n > 31 && n < 127)
    std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
  if (n >= 128)
    std::cout << "char: impossible" << std::endl;

  if (n > 2147483647  || n < -2147483648)
    std::cout << "int: impossible" << std::endl;
  else
    std::cout << "int: " << static_cast<int>(n) << std::endl;

  std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(n) << "f" << std::endl;
  std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void  printFloat(std::string s)
{
  //std::cout << "--FLOAT--" << std::endl;
  double n = std::stod(s);

  if (n <= 31 )
    std::cout << "char: Non displayable" << std::endl;
  if (n > 31 && n < 127)
    std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
  if (n >= 128)
    std::cout << "char: impossible" << std::endl;

  if (n > 2147483647  || n < -2147483648)
    std::cout << "int: impossible" << std::endl;
  else
    std::cout << "int: " << static_cast<int>(n) << std::endl;
  std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(n) << "f" << std::endl;
  std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void  printChar(std::string s)
{
  //std::cout << "--CHAR--" << std::endl;
  int n = int(s[0]);


    if (n <= 31 )
    std::cout << "char: Non displayable" << std::endl;
  if (n > 32 && n < 127)
    std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
  if (n >= 128)
    std::cout << "char: impossible" << std::endl;

  std::cout << "int: " << static_cast<int>(n) << std::endl;
  std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(n) << "f" << std::endl;
  std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void  printNull()
{
  //std::cout << "--NULL--" << std::endl;
  std::cout << "char: impossible" << std::endl;
  std::cout << "int: 0" << std::endl;
  std::cout << "float: 0.0f" << std::endl;
  std::cout << "double: 0.0" << std::endl;
}

int main(int ac, char **av)
{
  if (ac != 2)
  {
    std::cout << "You must give 1 argument" << std::endl;
    return (1);
  }
  std::string s(av[1]);
  
  if ((s.compare(0, s.length(), "inf") == 0) || (s.compare(0, s.length(), "-inf") == 0)
    || (s.compare(0, s.length(), "+inf") == 0) || (s.compare(0, s.length(), "nan") == 0)
    || (s.compare(0, s.length(), "-nan") == 0) || (s.compare(0, s.length(), "-inff") == 0)
    || (s.compare(0, s.length(), "+inff") == 0) || (s.compare(0, s.length(), "+nan") == 0) || (s.compare(0, s.length(), "inff") == 0))
  {
    ft_infOrNan(s);
    return 0;
  }
    int choice = ft_whatIs(s);

    switch (choice)
    {
      case 0:
        printNull();
        break;
      case 1:
        printInt(s);
        break;
      case 2:
        printDouble(s);
        break;
      case 3:
        printFloat(s);
        break;
      case 4:
        printChar(s);
    }
    return 0;
}
