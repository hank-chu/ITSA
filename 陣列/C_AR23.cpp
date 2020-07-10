#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
    char line[1024],line2[1024];
    cin >> line >> line2;
    char *ptr = strstr(line2, line);
    if (ptr != NULL){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl; 
    }

    return 0;
}
