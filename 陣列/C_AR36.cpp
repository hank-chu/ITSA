#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
    int a  =0,b = 0;
    cin >> a >> b;
    if(a == 1) {
        if(b>=21) {
            cout << "Aquarius" << endl;
        }else{
            cout << "Capricorn" << endl;
        }
    }else if(a == 2) {
        if(b>=19) {
            cout << "Pisces" << endl;
        }else{
            cout << "Aquarius" << endl;
        }
    }else if(a == 3) {
        if(b>=21) {
            cout << "Aries" << endl;
        }else{
            cout << "Pisces" << endl;
        }
    }else if(a == 4) {
        if(b>=21) {
            cout << "Taurus" << endl;
        }else{
            cout << "Aries" << endl;
        }
    }else if(a == 5) {
        if(b>=22) {
            cout << "Gemini" << endl;
        }else{
            cout << "Taurus" << endl;
        }
    }else if(a == 6) {
        if(b>=22) {
            cout << "Cancer" << endl;
        }else{
            cout << "Gemini" << endl;
        }
    }else if(a == 7) {
        if(b>=23) {
            cout << "Leo" << endl;
        }else{
            cout << "Cancer" << endl;
        }
    }else if(a == 8) {
        if(b>=24) {
            cout << "Virgo" << endl;
        }else{
            cout << "Leo" << endl;
        }
    }else if(a == 9) {
        if(b>=24) {
            cout << "Libra" << endl;
        }else{
            cout << "Virgo" << endl;
        }
    }else if(a == 10) {
        if(b>=24) {
            cout << "Scorpio" << endl;
        }else{
            cout << "Libra" << endl;
        }
    }else if(a == 11) {
        if(b>=23) {
            cout << "Sagittarius" << endl;
        }else{
            cout << "Scorpio" << endl;
        }
    }else if(a == 12) {
        if(b>=22) {
            cout << "Capricorn" << endl;
        }else{
            cout << "Sagittarius" << endl;
        }
    }
}
