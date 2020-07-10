#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main() {  
    string line;  
    getline(cin,line);    
    int len = line.size();       
     char result[len];        
     strcpy(result, line.c_str()); 
     for(int i = 0;i < len;i++)    
     {  
        if(result[i] != 32 && result[i] != 9) 
        {  
            if(i == len-1)  
            {  
                cout << result[i] << endl;  
            }  
            else  
            {  
                cout << result[i];  
            }  
        }  
     }  
    return 0;  
}  
