#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;


int main(){
int a, b;
cin >> a>> b;
if (b%a==0){
    cout<< "1";
}
else if(a%b==0){
    cout<< "1";
}
else{
    cout<< "2";
}
return 0;
}