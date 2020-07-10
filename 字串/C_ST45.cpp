#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int i = 0,len = 0,j = 0,a = 0;
    char line[1024];
    cin >> a;
    for(i = 0;i<a;i++) {
    cin >> line;
     len = strlen(line);
    for(j = len-1;j>=0;j--) 
    {
        if(j == len-1) 
        { 
            cout << (char)(line[j]-32);
        }
        else if(j == 0)
        {
            cout << (char)(line[j]+32);
        }
        else
        {
            cout << (char)line[j];
        }
    }
    cout << endl;
    }
}
