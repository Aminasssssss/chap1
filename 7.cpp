#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;


int main(){
int  b;
cin >> b;
int k, l, m;

k=b%10;
l=(b/10)%10;
m=(b/100)%10;
int summ=0;
summ=(k+l+m);
cout<< summ;



return 0;
}