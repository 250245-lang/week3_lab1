#include <iostream>
using namespace std;

int main() {
    float v0, v1, t;
    cout<<"Enter the value of v0 in meters/second: "<<endl;
    cin>>v0;
    cout<<"Enter the value of v1 in meters/second: "<<endl;
    cin>>v1;
    cout<<"Enter the value of t in seconds: "<<endl;
    cin>>t;
    cout<<"Acceleration: "<<(v1-v0)/t<<endl;
    return 0;
}