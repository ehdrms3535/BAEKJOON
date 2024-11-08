#include <iostream>

using namespace std;

int array[10001];
void fibo(int n) {
  int a=1;
  int b=0;
  int c;
  int d;
  array[0]=1;
  array[1]=1;
  if (n == 0) {
    array[1]=0;
    array[0]=1;

  } else if (n == 1) {
    array[1]=1;
    array[0]=0;

  }
  else if(n==2){
    array[1]=1;
    array[0]=1;

  }

  for(int i=2; i<n; i++){
    c=array[1];
    d=array[0];
    array[1]=array[1]+a;
    array[0]=array[0]+b;
    a=c;
    b=d;

    }
  cout << array[0] <<" " <<array[1]<< endl;
  return;
}

int main() {
  int a;
  int b;
  cin >> a;

  for (int i = 0; i < a; i++) {
    cin >> b;
    fibo(b);
  }
}

// 동적계획법 사용 하면 시간 많이 줄일 수 있음.

