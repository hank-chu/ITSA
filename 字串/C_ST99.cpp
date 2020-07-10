#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main(){
    char line[1024];
    int a = 0,i = 0,tmp = 0,len = 0,cnt[26],max = 0,j = 0,max_index = 0;
    cin >> a;
    cin.getline(line,1024);
    for(j = 0;j<a;j++) {
        max = 0;
        fgets(line,1024,stdin);
        len = strlen(line);
        for(i = 0;i<26;i++) {
            cnt[i] = 0;
        }
        for(i = 0;i<len;i++) {
            if(isalpha(line[i])) {
                if((line[i] <= 'z')&&(line[i] >='a')) { 
                    tmp = line[i]-97;
                    cnt[tmp] = cnt[tmp] +1;
                }
            }
        }
        for(i = 0;i<26;i++) {
            if(max < cnt[i]) {
                max = cnt[i];
                max_index = i;
            }
        }
        cout << (char)(max_index+97) << " " << max << endl;

    }
}
