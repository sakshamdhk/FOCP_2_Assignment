//write a c++ program to implement a class called circl ethat has private member variables for radius. Include member functions to calculate the circle's area and circumference. 

#include<iostream>
using namespace std;
class rectangle{
    private: float length, width;
    public:
    void length(){
        cout<<"Enter value"<<endl;
        cin>> length;

    }
    void width(){
        cout<<"Enter value"<<endl;
        cin >> width;

    
    }
    void perimeter () {
        cout<<"perimeter = " 2 * (length + width);
    
}
    void area () {
        cout<<"area = " length * width;

;
int main (){
    rectangle r;
    r.length();
    r.width();
    r.perimeter();
    r.area();

    return 0;
}
