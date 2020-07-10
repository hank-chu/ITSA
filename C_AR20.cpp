#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
    int a = 0,b[128],c[128],i = 0,fal = 0;
    for(i = 0;i<128;i++) {
        c[i] = 0;
    }
    cin >> a;
    for(i = 0;i<a;i++) {
        cin >> b[i];
        c[b[i]] = c[b[i]] + 1;
    }
    for(i = 0;i<a;i++) {
        if(c[i] == 2) {
            fal = 1;
        }
    }
    if(fal == 1) {
        cout << "0" << endl;
    }else{
        cout << "1" << endl;
    }
}
