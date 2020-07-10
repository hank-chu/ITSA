#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int a;
    cin >> a;
    a = a % 256;
    cout << (char)a << endl;
}
