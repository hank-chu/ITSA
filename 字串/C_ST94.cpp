#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main(){
    char line[1024];
    int a = 0,i = 0,len = 0,j = 0;
            cin.getline(line,1024);
            len = strlen(line);
            for(i = 0;i<len;i++) {
                if(isalpha(line[i])) {
                        a++;
                }
                if(isdigit(line[i])) {
                        j++;
                }
            }
            cout << a << "," << j << endl;
}
