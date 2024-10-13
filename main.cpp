#include<iostream>

using namespace std;

#include"printMenu.h"
#include"choiseMenu.h"


int main() {
	int n, chon;
	int tiep;
	do {
		print();
		cin >> chon;
		cout << "nhap so n: ";
		cin >> n;
		choise(chon, n);
		cout << endl << "ban co muon chuyen doi tiep (neu co bam 1, neu khong bam phim bat ki!)" << endl;
		cin >> n;

	} while (n == 1);
	
	
	
	
	return 0;
}