#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int a = 0,i = 0,j = 0,max_index = 0;
    int score[1000][5];
    float rate = 0,max = 0;
    while(cin >> a){
            if(a == 0) {
                break;
            }
            max = 0;
            max_index = 0;
            for(j = 0;j<a;j++) {
                cin >> score[j][0];
                cin >> score[j][1];
                cin >> score[j][2];
            }
            for(i = 0;i<a;i++) {
                    rate =  (float)score[i][2] / score[i][1];
                    if(max < rate && score[i][1] >= 50) 
                    {            
                        max = rate;
                        max_index = i;
                    }
                    else if(max == rate){
                        if(score[i][2] > score[max_index][2]) 
                        {    
                            max = rate;
                            max_index = i;
                        }
                    }   
            }
            if(max == 0) 
            {   
                cout << "NULL" << endl;
            }
            else
            {
                cout << score[max_index][0] << endl; 
            }
    }
}

