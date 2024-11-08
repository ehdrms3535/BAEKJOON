#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int a;
  int x1,x2,y1,y2,r1,r2;
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >>x1 >> y1 >> r1 >> x2 >> y2 >>r2;
    if(pow(x1-x2,2)+pow(y1-y2,2)<=pow(r1,2) || pow(x1-x2,2)+pow(y1-y2,2)<=pow(r2,2))
    {
     if(x1==x2&&y1==y2){
       if(r1==r2){
       cout << "-1" << endl;
       }
       else{
         cout << "0" <<endl;
       }
     }
      else if(sqrt(pow(x1-x2,2)+pow(y1-y2,2))+r1==r2||sqrt(pow(x1-x2,2)+pow(y1-y2,2))+r2==r1){
       cout << "1" << endl;
     } 
      else if (sqrt(pow(x1-x2,2)+pow(y1-y2,2))+r1<r2||sqrt(pow(x1-x2,2)+pow(y1-y2,2))+r2<r1){
        cout << "0" <<endl;
      }
      else{
        cout << "2" << endl;
      }
    }
    else{
      if(sqrt(pow(x1-x2,2)+pow(y1-y2,2))==r2+r1){
        cout << "1" << endl;
      }
      else if(sqrt(pow(x1-x2,2)+pow(y1-y2,2))<r2+r1){
        cout << "2" << endl;
      }
      else{
        cout << "0" << endl;
      }
    }
  }
}