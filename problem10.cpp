#include <iostream>
using namespace std;

int main() {
    float distance, efficiency, price;
    cout<<"The distance to drive: "<<endl;
    cin>>distance;
    cout<<"The fuel efficiency of the car in miles per gallon: "<<endl;
    cin>>efficiency;
    cout<<"Price per gallon: "<<endl;
    cin>>price;
    cout<<"The cost of driving is $"<<distance/efficiency * price<<endl;
    return 0;
}