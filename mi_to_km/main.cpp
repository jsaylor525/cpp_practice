#include <stdlib.h>
#include <iostream>

float toKilometersFromMiles(float miles);

int main(int argc, char const *argv[])
{
  /* code */
  std::cout << "Convert miles to kilometers applcation!" << std::endl;
  std::cout << "Enter the number of miles: ";
  float miles;
  std::cin >> miles;
  float kilometers = toKilometersFromMiles(miles);
  std::cout << "Converted " << miles << " miles to " << kilometers << " kilometers." << std::endl;
  return 0;
}

float toKilometersFromMiles(float miles){
  return miles * 1.60934;
}