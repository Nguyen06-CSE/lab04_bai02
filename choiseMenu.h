#pragma once
#include<iostream>
#include"doiCo2.h"
#include"doiCo8.h"
#include"doiHe16.h"
#include"doiCo7.h"


using namespace std;

void choise(int chon, int n) {
    switch (chon) {
    case 1: {
        chon = 2;
        string str = chuyenNhiPhan(n);
        cout << str << endl;
        break;
        }
            
    case 2: {
        chon = 8;
        int x = chuyenBatPhan(n);
        cout << n << " doi sang he bat phan la " << x << endl;
        break; 
        }
            
    case 3: {
        chon = 16;
       chuyenThapLucPhan(n);
        
        break;
        }
            
    case 4: {
        chon = 7;
        int z = doiCo7(n);
        cout << n << " doi sang he co 7 la " << z << endl;
        break;
        }
        default:
            cout << "Lua chon khong hop le!\n";
         
        }
}
