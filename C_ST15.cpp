#include<iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
  int i = 0,a = 0,j = 0;
    cin >> a;
    for(i = 1;i<a;i++) 
    {
        for(j = 0;j<i;j++) {
            cout << j+1 ;
        }
        for(j = a;j>i;j--) {
            cout << j;
        }
        cout << endl;
    }
}
