#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size;

    int vector[size];
    float counter[3] = {0.0, 0.0, 0.0};


    for(int i = 0; i < size; i++){
        cin >> vector[i];
        if(vector[i] > 0){
            counter[0]++;
        }else if(vector[i] == 0){
            counter[2]++;
        }else{
            counter[1]++;
        }
    }

    printf("%f\n", (counter[0]/size));
    printf("%f\n", (counter[1]/size));
    printf("%f\n", (counter[2]/size));



    return 0;
}
