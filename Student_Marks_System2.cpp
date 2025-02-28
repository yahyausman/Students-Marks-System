#include <iostream>
#include <string>
using namespace std;
int main()
{

    const int size = 10;
    int roll_no[size] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    string name[size] = {"Ali", "Sara", "Kashif", "Mehran", "Kamran", "Gul", "Mehak", "Sadaf", "Zia", "Sameer"};
    int birth_year[size] = {2001, 2002, 2001, 2003, 2001, 2004, 2003, 2003, 2005, 2000};
    int obt_marks[size] = {850, 900, 870, 890, 705, 876, 950, 650, 800, 700};
    float percentage[size];
    char grade[size];
    int age[size];
    int current_year = 2025;

    for (int i = 0; i < size; i++)
    {
        age[i] = current_year - birth_year[i];
        percentage[i] = static_cast<float>(obt_marks[i]) / 1000.0 * 100.0;
        
        if (percentage[i] >= 90.0)
        {
            grade[i] = 'A';
        }
        else if (percentage[i] >= 80.0 && percentage[i] < 90.0)
        {
            grade[i] = 'B';
        }
        else if (percentage[i] >= 70.0 && percentage[i] < 80.0)
        {
            grade[i] = 'C';
        }
        else if (percentage[i] >= 60.0 && percentage[i] < 70.0)
        {
            grade[i] = 'D';
        }
        else
        {
            grade[i] = 'F';
        }
        cout << "Student Roll No: " << roll_no[i] << endl;
        cout << "Student Name: " << name[i] << endl;
        cout << "Age: " << age[i] << " years" << endl;
        cout << "Obtained Marks: " << obt_marks[i] << endl;
        cout << "Percentage: " << percentage[i] << " %" << endl;
        cout << "Grade: " << grade[i] << endl;
        cout << "---------------------------------" << endl;
    }

    return 0;
}