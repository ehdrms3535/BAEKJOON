#include <iostream>

using namespace std;

int main() {
  int a = 0;
  cin >> a;

  for (int i = 0; i < a; i++) {
    int b=0,c=0,d=1,t=1;
    cin >> b >> c; // cCb
    for (int j = b; j < c; j++){
      d=d*(j+1)/(t);
      t++;
    }
    cout <<d<<endl;
  }
}