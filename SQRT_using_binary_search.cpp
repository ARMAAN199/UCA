#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
// #include <bits/stdc++.h>
using namespace std;


int binarysearch(int number, int L, int R) 
{
    if ( L > R )
    {
        return -1;
    }
    int mid = ( L + R ) / 2;
    if (( mid * mid ) == number)
    {
        return mid;
    }
    if (( mid * mid ) < number)
    {
        return binary_search(number, mid, R);
    }    
    else
    {
        return binary_search(number, L, mid);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int number, prec;
    cin >> number, prec;
    
	return 0;
}
