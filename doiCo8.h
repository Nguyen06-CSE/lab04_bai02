#pragma once
#include<iostream>

using namespace std;

int chuyenBatPhan(int n) {
    int reserver = 0;
    int multiplier = 1; 

    while (n > 0) {
        int digit = n % 8;
        reserver += digit * multiplier; 
        multiplier *= 10; 
        n /= 8;
    }

    return reserver;  
}