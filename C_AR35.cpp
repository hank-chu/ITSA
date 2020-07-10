#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
    int a  =0,b = 0;
    cin >> b;
    a = b -2007;
    a = abs(a); 
    a  = a % 12;
    if(b < 2007) {
        a = 12 - a;
    }
    if(a == 1) {
        cout << "rat" << endl;
    }else if(a == 2) {
        cout << "ox" << endl;
    }else if(a == 3) {
        cout << "tiger" << endl;
    }else if(a == 4) {
        cout << "rabbit" << endl;
    }else if(a == 5) {
        cout << "dragon" << endl;
    }else if(a == 6) {
        cout << "snake" << endl;
    }else if(a == 7) {
        cout << "horse" << endl;
    }else if(a == 8) {
        cout << "sheep" << endl;
    }else if(a == 9) {
        cout << "monkey" << endl;
    }else if(a == 10) {
        cout << "rooster" << endl;
    }else if(a == 11) {
        cout << "dog" << endl;
    }else if(a == 0) {
        cout << "pig" << endl;
    }
}

