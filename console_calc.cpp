#include <iostream>
#include <vector>
#include <sstream>
#include "split_string.cpp"

using namespace std;


double calc(double num1, char op, double num2){
    switch (op){
        case '+': // add
            return num1 + num2;
        case '-': //subtract
            return num1 - num2;
        case '*': // times
            return num1 * num2;
        case 'x': // times
            return num1 * num2;
        case '/': // divide
            return num1 / num2;
    }
}


int main(){
    string expression;

    cout << "Enter an expression you would like to calculate: ";
    getline(cin,expression);

    vector<string> split_expression = split(expression,' ');

    char expression_sign = split_expression[1][0];

    double result = calc(stod(split_expression[0]),expression_sign,stod(split_expression[2]));
    cout << result;
    return 0;
}