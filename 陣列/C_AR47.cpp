#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
void display(int *a){
    int i = 0;
    for(i = 0;i<10;i++) {
        if(i == 9) {
            cout << a[i];
        }else{
            cout << a[i] << " ";
        }
    }
    printf("\n");
}

void reverse(int *a){
    int tmp[10],i = 0;
    for(i = 0;i<10;i++) {
        tmp[i] = a[10-i-1];
    }
    display(tmp);
}

int main(){
    int a[10],i = 0;
    for(i = 0;i<10;i++) {
        cin >> a[i];
    }
    reverse(a);
}
