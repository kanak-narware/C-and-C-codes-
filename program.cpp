#include<iostream>
#define PI 3.14
using namespace std;
int main() {
    float radius, area, circumference;
    cout<<"Enter the value of radius: ";
    cin>> radius;
    area = PI*radius*radius;
    circumference = 2*radius*PI;
    cout<<"Area of circle is"<<area<<endl;
    cout<<"Circumference of circle is"<<circumference<<endl;
    return 0;
}
