#include<iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
  int i = 0,a = 0,j = 0,b = 0;
    cin >> a;
    cin >> b;
    if(a < b) 
    {
        for(i = a;i<b+1;i++) {
            for(j = 0;j<i;j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else 
    {
        for(i = a;i>b-1;i--) {
            for(j = 0;j<i;j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

