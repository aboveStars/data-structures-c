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
        cout << "Please input your choice: " << endl;

        int value = 0;
        cin >> value;
        if(value == -1) break;

        Student* temp = (Student*)realloc(students, sizeof(Student) * (currentSize + 1));

        if(temp == nullptr) {
            cout << "Memory allocation error" << endl;
            return -1;
        }
        students = temp;

        students[currentSize].age = value;
        students[currentSize].grade = value * 0.5;

        currentSize++;
    }

    for(int i=0; i< currentSize && students != nullptr; i++) {
        cout << "Age: " << students[i].age << " Grade: " << students[i].grade << endl;
    }

    free(students);

    return 0;
}
