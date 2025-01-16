/**
 * @file main.cpp
 * @author Michael Floyd
 * @date 2025-01-16
 * @brief Git Test
 * 
 * Figuring out how emacs and git work together
 */


#include <iostream>

using namespace std;

/**
 * adds together numbers from 1 to n
 * 
 * @param int n to hold a number
 * @return int sum which is all the numbers added to n
 *
 */
int sum (int n);

/**
 * multiplys together numbers from 1 to n
 *
 * @param int n to hold a number
 * @return int product which is all the numbers mutiplied 
 *   together
 *
 */
int product (int n);

int main() {
  int number;
  cout << "Hello World!" << endl;

  cout << "Pick a number? ";
  cin >> number;

  cout << "Your sum is " << sum(number) << endl;

  cout << "Your product is " << product(number) << endl;
  
  return 0;
}

int sum (int n) {
  int sum = n;
  for (int i = 0; i < n; i++) {
    sum += i;
  }
  return sum;

} 
int product (int n) {
  int product = n;
  for (int i = 1; i < n; i++) {
    product = product * i;
  }
  return product;
}

