//Ask the user to input two numbers and a mathematical operator()
#include <iostream>
using namespace std;
int main(){
    int a , b;
    char opr;
    cout<<"Enter first no.: ";
    cin>>a;

    cout<<"Enter an operator: ";
    cin>>opr;

    
    cout<<"Enter second no.: ";
    cin>>b;



    switch(opr){
        case '+': cout<<"Result: "<<a+b<<endl;
        break;
        case '-': cout<<"Result: "<<a-b<<endl;
        break;
        case '/': cout<<"Result: "<<a/b<<endl;
        break;
        case '*': cout<<"Result: "<<a*b<<endl;
        break;
    }
    return 0;
}