#include<iostream>
using namespace std;

int main(){
    int x,y;
    char op;
    cout <<"Enter the value of first operand:";
    cin >> x;

    cout <<" Enter the value of second operand:";
    cin >> y;

    cout <<" Enter the operation you want to perform:";
    cin >> op;

    switch (op){
        case '+': cout<< "addition of two operand is : " << (x+y) <<endl;
        break;

        case '-': cout<< "subtraction of two operand is : " << (x-y) <<endl;
        break;

        case'*': cout<< "multiplication of two operand is : " << (x*y) <<endl;
        break;

        case'/': cout<< "division of two operand : " << (x/y) <<endl;
        break;
    }
}

