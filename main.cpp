#include <iostream>

using namespace std;

typedef struct{
    int age;
    double grade;
} Student;

int main(){

    Student* students = nullptr;
    int currentSize = 0;

    while(true) {

        cout << "Please enter an age for " << currentSize + 1 << ". student (-1 to exit): " << endl;

        int age = 0;

        while (true) {
            cin >> age;

            if(cin.fail()) {
                cin.clear();
                cin.ignore();
                cout << "Omgggg! Please enter an age (int) for " << currentSize + 1 << ". student (-1 to exit): " << endl;
            } else {
                break;
            }
        }

        if(age == -1) break;

        double grade = 0;
        cout << "Please enter a grade for " << currentSize + 1 << ". student" << endl;

        while(true) {
            cin >> grade;

            if(cin.fail()) {
                cin.clear();
                cin.ignore();
                cout << "Broooo! Please enter a grade for " << currentSize + 1 << ". student" << endl;
            } else {
                break;
            }
        }

        Student* temp = (Student*)realloc(students, sizeof(Student) * (currentSize + 1));

        if(temp == nullptr) {
            cout << "Memory allocation error" << endl;
            return -1;
        }

        students = temp;

        students[currentSize].age = age;
        students[currentSize].grade = grade;

        currentSize++;
    }

    for(int i=0; i< currentSize && students != nullptr; i++) {
        cout << "Age: " << students[i].age << " Grade: " << students[i].grade << endl;
    }

    free(students);

    return 0;
}
