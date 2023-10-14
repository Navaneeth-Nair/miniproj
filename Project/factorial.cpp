#include <iostream>
using namespace std;

int main(){
 int x;
 long factorial = 1.0;

 cout<<"Enter Your Integer: ";
 cin>>x;

 if (x<0)
 {
    cout<<"A Factorial Cannot Be Calculated For Negative Integers.";
    return 0;
 }
 else {
    for (int i = 1; i <= x; ++i)
    {
        factorial *= i;
    }
    cout << "Factorial of " << x << " = " << factorial;     
 }
}
