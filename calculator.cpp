#include <iostream>
#include<cmath>

using namespace std;

double add(double a, double b){
    return a+b;
}
double subtract(double a, double b){
    return a-b;
}
double multiply(double a, double b){
    return a*b;
}
double divide(double a, double b){
    if(b==0){
        cout<<"Error: division by zero is not allowed."<<endl;
        return NAN;
    }
    return a/b;
}

int main() {
    double num1,num2;
    char operatorChar;

    cin>>num1>>num2>>operatorChar;
    double result;
    switch(operatorChar){
        case '+':
        result = add(num1, num2);
        cout<<result<<endl;
        break;
        case '-':
        result = subtract(num1, num2);
        cout<<result<<endl;
        break;
        case '*':
        result = multiply(num1, num2);
        cout<<result<<endl;
        break;
        case '/':
        result = divide(num1, num2);
        if(!isnan(result)){
        cout<<result<<endl;
        }
        break;
        default:
        cout<<"Invalid operator. Please enter of +,-, ,/."<<endl;
    }

	return 0;
}
