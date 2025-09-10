
#include <iostream>
using namespace std;

int main() {
    int a = 189;
    char b = 'B';
    float A = a;
    float n1 = A/3;
    int n2 = b;
    float n3 = (A + b)/5;
    char n4 = A/10 - 1 +b;

    int N1 = n1 * 10;

    cout << N1/10 << "."<<N1%10<< " ";
    cout << n2 << " ";
    cout << n3 << " ";
    cout << n4 << " ";
    return 0;
}
