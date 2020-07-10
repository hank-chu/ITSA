#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main(){
  int count = 0, b = 0,i = 0,j = 0,len = 0;
  char list[1000]; 
    cin >> b;
    for(j = 0;j<b;j++) {
            cin >> list;
            len = strlen(list);
            count = 0;
            for(i = 0;i<len;i++) {
                if(list[i] == 'a' || list[i] == 'e'||list[i] == 'i'||list[i] == 'o'||list[i] == 'u'||list[i] == 'A'||list[i] == 'E'||list[i] == 'I'||list[i] == 'O'||list[i] == 'U') 
                {
                    count++;
                }
            }
            cout << list << " "<< count << endl;
    }
}
