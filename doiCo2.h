#pragma once
#include<iostream>
#include<string>
using namespace std;


string chuyenNhiPhan(int n) {
    string str = ""; 

    if (n == 0) {
        return "0";
    }

    // Tạo chuỗi nhị phân
    while (n > 0) {
        str = to_string(n % 2) + str;  
        n /= 2;  
    }

    return str;
}