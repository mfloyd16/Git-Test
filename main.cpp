
#include <iostream>

using namespace std;

int sum (int n);

int main() {
  int number;
  cout << "Hello World!" << endl;

  cout << "Pick a number? ";
  cin >> number;

  cout << "Your sum is " << sum(number) << endl;
  
  return 0;
}

int sum (int n) {
  int sum = n;
  for (int i = 0; i < n; i++) {
    sum += i;
  }
  return sum;

} 
