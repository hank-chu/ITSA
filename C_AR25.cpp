#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
    char line[1024];
    int a = 0,i = 0,len = 0,cnt[128];
    cin.getline(line,1024);
    len = strlen(line);
    for(i = 0;i<128;i++) {
        cnt[i] = 0;
    }
    for(i = 0;i<len;i++) {
        a = line[i];
        if((a>32) && (a<128)) { 
            cnt[a] = cnt[a] +1;
        }
    }
    for(i = 127;i>=0;i--) {
        if(cnt[i]!=0) { 
            cout << i << " " << cnt[i] << endl;
        }      
    }
}
