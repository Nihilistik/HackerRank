#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    bool okInput = true;
    int size;
    int diagonal, iDiagonal;
    int invertIndex;

    do{
        cin >> size;
        if(size < 1 || size > 100){
            okInput = false;
        }
    }while(!okInput);


    //Loading data-
    okInput = true;
    int matrix[size][size];

    for(int i = 0; i < size; i++){
        for(int n = 0; n < size; n++){
            do{
                cin >> matrix[i][n];
                if (matrix[i][n] < -100 || matrix[i][n] > 100){
                    okInput = false;
                }
            }while(!okInput);
        }
    }

    diagonal = 0;
    iDiagonal = 0;
    invertIndex = size - 1;

    for(int i = 0; i < size; i++){
        diagonal += matrix[i][i];
        iDiagonal += matrix[i][invertIndex];
        invertIndex--;
    }

    cout <<  abs(diagonal - iDiagonal);


    return 0;
}
