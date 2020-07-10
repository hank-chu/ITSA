#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
 int a = 0,b = 0,i = 0,c = 0,t = 0,d = 0,g = 0,j = 0,z = 0,max = 0,value = 0;
 int **word;
 cin >> a;
 for(i = 0;i<a;i++) {
    max = 0;
    cin >> b;
    cin >> c;
    cin >> d;
    word = (int**)malloc(sizeof(int*) * b);
    for(j = 0;j<b;j++) {
        *(word+j) = (int*)malloc(sizeof(int) * c);
    }
    for(j = 0;j<b;j++) {
        for(z = 0;z<c;z++) {
            cin >> word[j][z];
        }
    }
    for(j = 0;j<b-d+1;j++) {
        for(z = 0;z<c-d+1;z++) {
            value = 0;
            for(g = 0;g<d;g++) {
                for(t = 0;t<d;t++) {
                    value = value + word[j+g][z+t];
                }
            }
            if(max < value) {
                max = value;
            }
        }
    }
    cout << max << endl;
 }
 return 0;
}   
