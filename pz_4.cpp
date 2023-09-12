//вариант 11
#include <iostream>
using namespace std;

int main()
{
     int x, y;
      cout<<"введите a и b (int) через пробел: ";
      cin >> x >> y;
    
    int *t = new int();
    *t = x;
 
    int *b = &y;
 
    x = *b;
    y = *t;
 
    
    cout <<"a = " << x << endl;
    cout << "b = "<< y << endl;
    delete t;
}
