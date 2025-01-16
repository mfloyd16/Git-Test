
#include <iostream>

using namespace std;

int sum (int n);

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

