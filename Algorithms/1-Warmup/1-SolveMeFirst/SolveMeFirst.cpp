#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solveMeFirst(int a, int b) {
  return a+b;
}

int main() {
  int num1, num2;
  int sum;
    bool okInput = true;
    do{
      cin>>num1>>num2;
        if(num1 < 1 || num1 > 1000 || num2 < 1 || num2 > 1000){
            okInput = false;
        }
    }while(!okInput);
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
