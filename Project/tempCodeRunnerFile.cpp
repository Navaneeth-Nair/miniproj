#include <iostream>
#include <string>
using namespace std;

class students {
    
public:
    students(){}
    string std_name;
    string clg_name;
    string PRN;
    int getData() {
        
        cout << "Enter Your Name: ";
        cin>>std_name;
        cout << "Enter Your College Name: ";
        cin>>clg_name;
        cout << "Enter Your PRN: ";
        cin>>PRN;
        return 0;
    }

    void displayData() {
        char condition;
        cout << "Your Name is " << std_name << endl;
        cout << "Your PRN Number is " << PRN << endl;
        cout << "Your College Name is " << clg_name << endl;

        do {
            cout << "Is The Entered Data Correct? (y/n): ";
            cin >> condition;

            if (condition == 'n') {
                cout << "Let's Try Again Then" << endl;
                getData();
            } else if (condition != 'y') {
                cout << "Invalid Entry, Try Again" << endl;
            }

        } while (condition != 'y');

        cout << "Great!" << endl;
    }
};



int main() {
 students s;
 s.getData();
 s.displayData();
}

