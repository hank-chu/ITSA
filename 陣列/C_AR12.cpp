#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main()
{
 int N, a, b, c, num, count;
 int n[100] = { 0 };
 cin >> N;
 for (int i = 0; i < N; i++)
 {
  num = 0;
  count = 0;
  cin >> a >> b >> c;
  for (int j = 0; j < c; j++)
   n[j] = j + 1;
  for (int j = 0; j < c - 1; j++)
  {
   count = 0;
   if (j % 2 == 0)
   {
    while (count != b)
    {
     if (num < c - 1)
      num++;
     else
      num = 0;
     if (n[num] != 0)
      count++;
    }
    n[num] = 0;
   }
   else
   {
    while (count != a)
    {
     if (num > 0)
      num--;
     else
      num = c - 1;
     if (n[num] != 0)
      count++;
    }
    n[num] = 0;
   }
  }
  for (int i=0; i < c; i++)
  {
   if (n[i] != 0)
    cout << n[i] << endl;
  }
 }
}
