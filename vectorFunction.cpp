#include <iostream>
#include <vector>

// Define first_three_multiples() here:

std::vector<int> first_three_multiples(int num)
{
  std::vector<int> a;
  a.push_back(num);
  a.push_back(num*2);
  a.push_back(num*3);

  return a;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}