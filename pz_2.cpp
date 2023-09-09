#include <iostream>
#include <math.h>
using namespace std;

int main (){
  double x, y, s;
  cout<<"введите два числа через пробел: ";
   cin >> x >> y;

  if(x>y){
      for(int i=1; i<=20; i++)
        s=pow(abs(x-y), 1 / 3)+tan(x);
      cout << s;
  }
  else if(x<y){
      for(int i=1; i<=20; i++)
        s = pow((y-x), 3)+cos(x);
      cout << s;
  }
  else{
      for(int i=1; i<=20; i++)
        s=pow((x+y), 2)+pow(x, 3);
      cout << s;
  }

  return 0;
}
