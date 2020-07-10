#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    int i = 0,len= 0,value = 0;
    char line[1024];
    cin >> line;
    len = strlen(line);
    for(i=0;i<len;i++) {
       if(isalpha(line[i])) {
            if((line[i] <= 'z')&&(line[i] >='a')) {
                value = value + line[i] - 96;
            }
            else if((line[i] <= 'Z')&&(line[i] >='A')){
                value = value + line[i] - 64;
            }
       }
    }
    cout << value << endl ;
}
