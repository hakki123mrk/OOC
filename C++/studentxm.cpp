/*C++ program to create student class, read and print N student's details 
(Example of array of objects).*/
 
#include <iostream>
using namespace std;
 
#define MAX 10
 
class student
{
        char  name[30], usn[10];
        int marks[8];

        //member function to get student's details
        public:
        void getDetails();
        //member function to print student's details
        void avg(student);
};
 
//member function definition, outside of the class
void student :: getDetails(){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter USN: ";
    cin >> usn;
    cout << "Enter marks in each subject" <<endl;
    for(int i = 0; i < 8; i++) {
        cout << "Subject " << (i+1) << " :";
        cin >> marks[i];
    }
}

void student :: avg(student s) {
        int avg, sum = 0;
        for(int i = 0; i < 8; i++) {
            sum += marks[i]+s.marks[i];
        }
        avg = sum/16;
        cout << "Average Marks :" << avg ;        
}

  
int main()
{
    student s1, s2;       //array of objects creation
    s1.getDetails();
    s2.getDetails();
    s1.avg(s2);
}