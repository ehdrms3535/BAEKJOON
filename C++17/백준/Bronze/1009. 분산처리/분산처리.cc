#include <cmath>
#include <iostream>
using namespace std;

int main() {
  long long a, b, c, d;
  int array[4];
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> b >> c;
    if (c==0){
      cout << 1 <<endl;
      continue;
    }
    for (int j = 1; j < 5; j++) {
      array[j - 1] = (int)pow(b, j) % 10;
      if (array[j - 1] == 0) {
        array[j - 1] = 10;
      }
      //cout << array[0] << " " << array[1] << " " << array[2] << " " << array[3] <<endl;
    }

    d = c % 4;
    //cout << d<< endl;
    switch (d) {
    case 0:
      cout << array[3] << endl;
      continue;
    case 1:
      cout << array[0] << endl;
      continue;
    case 2:
      cout << array[1] << endl;
      continue;
    case 3:
      cout << array[2] << endl;
      continue;
    }
  }
}
