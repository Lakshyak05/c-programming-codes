#include<iostream>
using namespace std ;
int main () {
    int a=10;
    int b = 4;
    int c = 8;
    if (a>b && a>c){
    cout<<a<<endl;
    }
    if (b>a && b>c) {
        cout<<b<<endl;
    }
    if (c>a && c>b) {
        cout<<c<<endl;
    }
    return 0;
}