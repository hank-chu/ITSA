#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int i = 0,j = 0,len = 0;
    char *list = new char(400);
    cin.getline(list,1024);
    len = strlen(list);
    if(list[len-1] == '\n') 
    {
        list[len-1] = '\0';
    }
    for(i = 0;i<len;i++) 
    {
        if(list[i]!='\0') 
        {
            for(j = 0;j<2;j++) 
            {
                cout << (char)list[i];
            }
        }
    }
    cout << endl;
}

