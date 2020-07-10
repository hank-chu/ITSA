#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(void){
 int c[100], i = 0;
 for(i = 0;i<6;i++) {
   cin >> c[i];
 }
 for(i = 5;i>=0;i--) {
   cout << c[i];
   if(i>0) {
       cout << " ";
   }
 }
 cout << endl;
 return 0;
}
