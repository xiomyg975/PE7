#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    for (a=1;a<=500;a++){
        for(b=1;b<=500;b++){
            c=1000-b-a;
            if ((a*a+b*b-c*c==0) && (a<b)){cout<<"a:  "<< a <<" b: " <<b<<" c: " << c << endl ;
            cout << "A x B x C : " << a*b*c << endl ;}
    }
    }
    return 0;
}

