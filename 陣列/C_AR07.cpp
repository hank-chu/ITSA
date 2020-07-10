#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
 int a = 0,i = 0,g = 0,j = 0,z = 0,place = 0,block_num = 1;
 int word[9][9],tmp[10],fal = 0;
 char line[12],change[3];
 change[1] ='\0';
 for(j = 0;j<9;j++) {
    cin.getline(line,12);
    a = 0;
    for(z = 0;z<9;z++) {
        if(isdigit(line[a])) {
            change[0] = line[a];
            word[j][z] = atoi(change);
            a++;
        }
    }
    tmp[j] = 0;
 }
 tmp[9] =0;
 for(i = 0;i<9;i++) {   
     for(j = 0;j<9;j++) {
         place = word[i][j];
         if(tmp[place] == 0 && place != 0) {
             tmp[place] = 1;
         }else if(tmp[place] == 1 && place != 0){
             cout << "row" << i+1 << " #" << word[i][j] << endl;
             fal = 1;
             break;
         }
     }
     for(z = 0;z<10;z++) {
         tmp[z] = 0;
     }
 }
 for(j = 0;j<9;j++) {       
     for(i = 0;i<9;i++) {
         place = word[i][j];
         if(tmp[place] == 0 && place != 0) {
             tmp[place] = 1;
         }else if(tmp[place] == 1 && place !=0){
             cout << "column" << j+1 << " #" << word[i][j] << endl;
             fal = 1;
             break;
         }
     }
     for(z = 0;z<10;z++) {
         tmp[z] = 0;
     }
 }
 for(i = 0;i<7;i = i+3) {     
     for(j = 0;j<7;j = j+3,block_num++) {
         for(z = 0;z<3;z++) {
             for(g = 0;g<3;g++) {
                 place = word[i+z][j+g];
                 if(tmp[place] == 0 && place != 0) {
                     tmp[place] = 1;
                 }else if(tmp[place] == 1 && place !=0){
                     cout << "block" << block_num << " #" << place <<endl;
                     fal = 1;
                     tmp[place] = 2;
                     break;
                 }
             }
             if(tmp[place] == 2 && place != 0) {
                 break;
             }
         }
         
         for(z = 0;z<10;z++) {
         tmp[z] = 0;
     }
    }
 }
 if(fal == 0) {
     cout << "true" << endl;
 }
 return 0;
} 
