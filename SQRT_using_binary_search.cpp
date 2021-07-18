#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
// #include <bits/stdc++.h>
using namespace std;


float binarysearch(float number, int L, int R) 
{
    float mid = ( L + R ) / 2;
    if ( L > R )
    {
        cout << "1 " << mid << " " << endl;
        return -1;
    }
    if ((( mid * mid ) <= number) && (( (mid+1) * (mid+1) ) > number))
    {
        cout << "2 " << mid << " " << endl;
        return mid;
    }
    if (( mid * mid ) < number)
    {
        cout << "3 " << mid << " " << endl;
        return binarysearch(number, mid, R);
    }    
    else
    {
        cout << "4 " << mid << " " << endl;
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
    cout<<binarysearch(number, 0, number) << "\n";
	return 0;
}
