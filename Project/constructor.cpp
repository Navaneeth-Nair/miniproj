#include <iostream>
using namespace std;

class students{

    public:
    string name;
    int roll_no;
    int marks[5];
    string subject[5] = { "English", "Maths" , "Physics", "Geography" , "Chemistry" };

    //default constructor

    students(){
        cout << "Please Enter Your Name: ";
        cin >> name;
        cout << "Please Enter Your Roll No: ";
        cin >> roll_no;
        for (int i = 0; i < 5; i++)
        {
            cout<< "Please Enter Your Marks In" + subject[i] + ": ";
            cin >> marks[i];
        }
    }
    //parametrized constructor
    students(float percentage, float attendance){
        int total_marks;
        int days;
       for (int i = 0; i < 5; i++)
       {
        total_marks += marks[i];
       }
        percentage = total_marks/50 *100;

        cout<<"How Many Days Did You Attend In 30 Days: ";
        cin >> days;
        attendance = days/30 *100;
        float percent = percentage;
        float attend = attendance;

    }
    //copy constructor

    students(students &s){
        string names = s.name;
        int rollno = s.roll_no;
        cout << "This Is Your Name: " << names << ". This Is Your Roll No: " << rollno << ".";
    }
};