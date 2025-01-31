//WAP that calculates the area and perimeter of rectangle using user-provided length and width. Use constants where necessary.
#include <iostream>
using namespace std;
int main(){
    int l , b;
    cout<<"Enter Length: "<<endl;
    cin>>l;

    cout<<"Enter Width: "<<endl;
    cin>>b;

    int area , perimeter;
    cout<<"Area = "<<l*b<<endl;
    cout<<"Perimeter = "<<  2*(l+b) <<endl;
    return 0;
}