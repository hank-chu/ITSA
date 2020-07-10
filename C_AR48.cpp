#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
    char line[1024];
    int i = 0;
    int c[5];
    cin >> line;
    for(i = 0;i<4;i++) {
        if(i == 0) {
            c[2] = (int)((line[i]-48+7)%10);
        }else if(i == 1){
            c[3] = (int)((line[i]-48+7)%10);
        }else if(i == 2){
            c[0] = (int)((line[i]-48+7)%10);
        }else if(i == 3){
            c[1] = (int)((line[i]-48+7)%10);
        }
    }
    for(i = 0;i<4;i++) {
        cout << c[i];
    }
    cout << endl;
}
