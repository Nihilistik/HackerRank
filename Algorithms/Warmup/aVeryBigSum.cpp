#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int totalSum = 0;    
    int size;
    bool okInput = true;
    do{
        cin >> size;
        if (size < 1 || size > 10){
            okInput = false;
        }
    }while(!okInput);
    okInput = true;
    
    int sumValues[size];
    
    for(int x = 0; x < size; x++){
        do{
            cin >> sumValues[x];
            if(sumValues[x] < 0 || sumValues[x] > pow(10.0, 10.0)){
                okInput = false;
            }
        }while(!okInput);
        okInput = true;
    }
    
    for(int x = 0; x < size; x++){
        totalSum += sumValues[x];
    }
    cout << totalSum << endl;
    
    return 0;
}