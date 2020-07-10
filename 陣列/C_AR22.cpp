#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
    char line[1024];
    int a = 0,i = 0,len = 0,cnt[26];
    cin.getline(line,1024);
    len = strlen(line);
    for(i = 0;i<26;i++) {
        cnt[i] = 0;
    }
    for(i = 0;i<len;i++) {
        if(isalpha(line[i])) {
            
            if((line[i] <= 'z')&&(line[i] >='a')) { 
                a = line[i]-97;
                cnt[a] = cnt[a] +1;
            }else if((line[i]<= 'Z')&&(line[i] >='A')){  
                a = line[i]-65;
                cnt[a] = cnt[a] +1;
            }
        }
    }
    for(i = 0;i<26;i++) {
        if(i!=25) {
            cout << cnt[i] <<" ";
        }else{
            cout << cnt[i];
        }
    }
    cout << endl;
}
