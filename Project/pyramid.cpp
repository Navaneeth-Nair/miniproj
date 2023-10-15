#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
    int height;
    cout<<"What should be the height of the pyramid: ";
    cin>>height;

    for (int i = 0; i < height + 1; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            cout<<" ";
        }
        
        for (int k = i; k >= 0; k--)
        {
            cout<<"#";
        }
        
        cout<< endl;
    }
    
}