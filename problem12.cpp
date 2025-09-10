#include <iostream>
using namespace std;

int main() {
    int number_of_admitted_students = 241;
    int first = number_of_admitted_students/11;
    int last = number_of_admitted_students%11;
    cout << "In first group: "<< first << endl;
    cout << "In last group: "<< last << endl;
    return 0;
}