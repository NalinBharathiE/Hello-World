#include <iostream.h>
using namespace std;
class student
{
    char name_of_student[50];
    int roll_no;
    float total_marks;
} s1[100];
void main()
{   int n,m;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    cout << "Enter information of students: " << endl;
    // storing information
    for(int i = 0; i < n; ++i)
    {
        s1[i].roll = i+1;
        cout << "For roll number" << s1[i].roll_no << "," << endl;
        cout << "Enter name: ";
        cin >> s1[i].name_of_student;
        cout << "Enter total marks: ";
        cin >> s1[i].total_marks;
        cout << endl;
    }
    cout<<"Enter the number of students whose information is to be displayed"<<endl;
    cin>>m;
    cout << "Information pertaining to the students: " << endl;
    // Displaying information
    for(int i = 0; i < m; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s1[i].name_of_student << endl;
        cout << "Marks: " << s1[i].total_marks << endl;
    }
   
}

https://guides.github.com/activities/hello-world/