﻿#include<iostream>
using namespace std;



bool CheckSprim(int n) {

	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;

}

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        // Nếu chia hết cho 100, phải chia hết cho 400
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;  // Năm nhuận
            }
            else {
                return false;  // Không phải năm nhuận
            }
        }
        else {
            return true;  // Năm nhuận
        }
    }
    else {
        return false;  // Không phải năm nhuận
    }
}


int main() {





	return 0;
}
