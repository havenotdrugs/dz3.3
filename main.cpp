#include <iostream>
using namespace std;

int main() {
  int numbers[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  for (int i = 19; i >= 10; i--) {
     cout << numbers[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 10; i++) {
    if (numbers[i] % 2 == 0) cout << numbers[i] << " ";
  }
}
