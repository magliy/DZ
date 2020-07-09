#include <iostream>
using namespace std;

int f(int a,int b) {
    int c=0;
    while (b>0) {
        c=c+a;
        b=b-1;
    }
    return c;
}

int F(int d) {
    int fact=1;
    while (d>0)  {
        fact=fact*d;
        d=d-1;
    }
    return fact;
}
   
 int main() {
   cout<< F(3);

     return 0;
 }
