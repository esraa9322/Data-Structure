#include<iostream>
using namespace std;
int firstPower(int a, int n) {
    int result;
    if (n == 0){
        return 1 ;
        }
    else{
        result = (a * firstPower(a, n - 1));

        return result;
        }
}
int secondPower(int a , int n){
int result;
    if (n == 0){
        result=1;
        return result;
    }

    else if (n % 2 == 0){
         result=secondPower(a, n / 2) * secondPower(a, n / 2);
    return result;}
    else{

        result= a * secondPower(a, n / 2) * secondPower(a, n / 2);
        return result;
}}

int main() {
    int base, power ;
    cout <<"Enter the base and the power" << endl;
    cin >> base >> power;
    cout <<firstPower(base,power)<<endl;
    cout <<secondPower(base,power)<< endl;
}





















