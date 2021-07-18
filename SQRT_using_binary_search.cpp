#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
// #include <bits/stdc++.h>
using namespace std;

double binarysearchdecimal(double number, double L, double R, double level) 
{
    // double mid = ( L + R ) / 2;
    // cout << "MID" << (floor(((( L + R ) / 2) / level)))*level << endl;
    double midterm = ( L + R ) / 2;
    midterm =  level!=1? (midterm / level)+level : midterm;
    midterm = int(midterm);
    double mid = (midterm * level);
    printf("%f\n", mid);
    // double mid = (int(((( L + R ) / 2.0) / level)))*level ;
    if ( L > R )
    {
        cout << "OUT " << mid << " " << endl;
        return -1;
    }
    if ((( mid * mid ) <= number) && (( (mid+level) * (mid+level) ) > number))
    {
        cout << "FOUND " << mid << " " << endl;
        return mid;
    }
    if (( mid * mid ) < number)
    {
        cout << "LESS " << mid << " " << endl;
        return binarysearchdecimal(number, mid, R, level);
    }
    else
    {
        cout << "MORE " << mid << " " << endl;
        return binarysearchdecimal(number, L, mid, level);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	double number;
    int prec;
    cin >> number;
    cin >> prec;
    // cout<<binarysearch(number, 0, number, 1) << "\n";
    double curr_sol = binarysearchdecimal(number, 0, number, 1);
    double level = 0.1;
    for(int i=0; i<prec; i++)
    {
        curr_sol = binarysearchdecimal(number, curr_sol, (curr_sol+(level*10)), level);
        level /= 10;
        cout << "OUTPUT =" <<curr_sol << endl;
    }
	return 0;
}