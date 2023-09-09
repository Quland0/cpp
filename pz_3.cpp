#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double  a = 0.1, b = 1.2, h = 0.1;
    
    for(double x = a; x<=b;x+=h){
        double y=0;

    
        for(int n = 1; n <= 20; n++){
            y += n*pow(x, n-1)/sin(2*n+x);
        }
        cout << y << endl;
    }
}
