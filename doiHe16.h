#pragma once
#include<iostream>
using namespace std;

void chuyenThapLucPhan(int n) {
    cout << n << " chuyen sang he Thap Luc Phan la ";

    if (n == 0) {
        cout << "0" << endl;
        return;
    }
    else {
        string hexValue = "";  
        while (n > 0) {
            int x = n % 16;
            if (x >= 0 && x <= 9) {
                hexValue = char(x + '0') + hexValue;  
            }
            else {
                hexValue = char(x - 10 + 'A') + hexValue;  
            }
            n /= 16;
        }
        cout << hexValue << endl;  
    }
}

