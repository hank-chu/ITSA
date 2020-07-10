#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
 int a[6],i = 0,cnt = 0;
 for(i = 0;i<6;i++) {
     cin >> a[i];
 }
 for(i = 0;i<6;i++) {
     cnt = cnt + (a[i]*a[i]*a[i]);
 }
 cout << cnt << endl;
 return 0;
}
