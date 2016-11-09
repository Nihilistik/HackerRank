#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int total = 0;
    int len;
    cin >> len;

    int v[len];

    for(int i = 0; i < len; i++){
        cin >> v[i];
        total += v[i];
    }

    cout << total << endl;

    return 0;
}