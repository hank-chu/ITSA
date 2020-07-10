#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main() {  
    int cnt; 
    int st, et, result = 0;  
    int t[25];  
    fill(t,t+25,0);  
    cin >> cnt;  
    for(int j = 0;j < cnt;j++)  
    {  
        cin >> st >> et;  
        for(int i = st;i < et;i++)  
        {  
            t[i]++;  
        }  
    }  
    for(int k = 0;k < 25;k++)  
    {  
        if(t[k] > result)  
        {  
            result = t[k];  
        }  
    }  
    cout << result << endl;  
    return 0;  
}  
