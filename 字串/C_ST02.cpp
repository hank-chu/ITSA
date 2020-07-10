#include<iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int a; 
    int i = 0,len = 0,j = 0;
    string line;
	cin >> a;
	for(i = 0;i<a;i++) {
	 cin >> line;
     len = line.size();
	 for(j = len-1;j>=0;j--) {
         cout << line[j];
	 }
     cout << endl ;
	}
}
