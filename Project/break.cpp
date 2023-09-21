#include <iostream>
using namespace std;

int main()
{
    int x;
  cout<<"1- Area Of Triagle. \n"
  <<"2- Area of Rectangle. \n"
  <<"3- Area of Circle. \n"
  <<"4- Exit Program. \n";
  cin>>x;

  switch (x)
  {
  case 1:
    int base;
    int height;
    int areat;

    cout<<"Enter The Base Of Triangle:";
    cin>>base;

    cout<<"Enter The Height Of Your Triangle: ";
    cin>>height;

    areat = 0.5*base*height;
    cout<< areat << " Is The Area Of The Triangle";
    break;

    case 2:
    int length;
    int breadth;
    int arear;

    cout<<"Enter The Length Of Rectangle:";
    cin>>length;

    cout<<"Enter The Breadth Of Rectangle:";
    cin>>breadth;

    arear = length*breadth;
    cout<< arear << " is the area of the rectangle of given length and breadth";
    break;

    case 3:
    int radius;
    int areac;

     cout<<"Enter The Radius Of Circle:";
     cin>>radius;

     areac = 3.14*radius*radius;
     cout<< areac << " is the area of the circle of given radius";
    break;

    case 4:
    return 0;

    default:
    cout<<"Entered Value Is Inavlid. Closing Program";
    return 0;
  }

  return 0;
  
}