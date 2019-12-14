//
//  main.cpp
//  Day 6 - Hackerrank
//
//  Created by Sarahi Cardenas Trejo on 11/20/19.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void test_cases(int T){
    
}
void string_case(string S, string S1, string S2){
    
}

int main() {

    int T;
    cin >> T;//number of lines
    while (1 <= T  && T <= 10){
    for(int i = 0; i < T ; --T){
        string S, S1, S2;
        cin >> S;
        for (int j = 0; j < S.size(); j++){
            if (j%2 == 0){
                S1 = S1 + S[j];
            }else{
                S2 = S2 + S[j];
            }
        }
        cout << S1 << " " << S2 << endl;
    }
    }
    
    
    
    return 0;
}















