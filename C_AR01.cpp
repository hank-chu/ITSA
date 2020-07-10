#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
 int a,b = 1,i = 0,cnt = 0,index = 0,count = 0;
 char word[100],tmp[1000],pr[100][100];
 cin.getline(word,100);
 b = strlen(word);
 if(word[b-1] == '\n') {
     word[b-1] = '\0';
 }
 while(word[count]!='\0' && count < b) {
     index = 0;
  while(isspace(word[count])) {
      count++;
  }
  while(!isspace(word[count]) && count < b) {
      tmp[index] = word[count];
      tmp[index+1] = '\0';  
      index++;
      count++;
    }
    strcpy(pr[cnt],tmp);
    cnt++; 
 }
 for(i = cnt-1;i>=0;i--) {
     if(i>0) {
         cout << pr[i] << " ";
     }else{
         cout << pr[i] << endl;
     }
 }
}
