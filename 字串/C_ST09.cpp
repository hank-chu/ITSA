#include<iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int i = 0,j = 0,a = 0,b = 0;
    cin >> a;
    cin >> b;
    for(i=0;i<b;i++) 
    {
       for(j=0;j<a;j++){
           cout << "*";
       }
       cout << endl;
    }
}
