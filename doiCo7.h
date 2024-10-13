#pragma once


#include<iostream>

using namespace std;

int doiCo7(int n) {
    int reserver = 0;
    int multiplier = 1;  

    while (n > 0) {
        int digit = n % 7;
        reserver += digit * multiplier;  
        multiplier *= 10; 
        n /= 7;
    }

    return reserver;  
}

