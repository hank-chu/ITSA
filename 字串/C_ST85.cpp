#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main(){
    char line[1024];
    int a = 0,i = 0,len = 0;
    cin.getline(line,1024);
    len = strlen(line);
    if(line[len-1] == '\n') {
        line[len-1] = '\0';
    }
    for(i = 0;i<len;i++) {
        if(line[i] == '/') {
            if(line[i+1] == 'n' || line[i+1] == 'a'|| line[i+1] == 'b'|| line[i+1] == '/'||line[i+1] == 't') 
            {
                a++;
                if(line[i+1] == '/') 
                {
                    i++;
                }
            }
        }
    }
    cout << a << endl;
}
