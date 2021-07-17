#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
// #include <bits/stdc++.h>
using namespace std;


float binarysearch(float number, float L, float R) 
{
    if ( L > R )
    {
        cout << "cancelling <<<<< MID IS "<< endl;
        return -1;
    }
    float mid = ( L + R ) / 2;
    if (( mid * mid ) == number)
    {
        cout << "FOUND <<<<< MID IS " << mid << endl;
        return mid;
    }
    if (( mid * mid ) < number)
    {
        cout << "less <<<<< MID IS " << mid << endl;
        return binarysearch(number, mid, R);
    }    
    else
    {
        cout << "more <<<<< MID IS " << mid << endl;
        return binarysearch(number, L, mid);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	float number;
    int prec;
    cin >> number;
    cin >> prec;
    cout << binarysearch(number, 0, number) << "\n";
	return 0;
}
