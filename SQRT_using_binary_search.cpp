#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
// #include <bits/stdc++.h>
using namespace std;


float binarysearch(float number, int L, int R, float level) 
{
    float mid = ( L + R ) / 2;
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
        return binarysearch(number, mid, R, level);
    }
    else
    {
        cout << "MORE " << mid << " " << endl;
        return binarysearch(number, L, mid, level);
    }
}

float binarysearchdecimal(float number, float L, float R, float level) 
{
    // float mid = ( L + R ) / 2;
    // cout << "MID" << (floor(((( L + R ) / 2) / level)))*level << endl;
    float midterm = ( L + R ) / 2;
    printf("%f\n", midterm);
    float leveled = (midterm / level)+level;
    printf("%f\n", leveled);
    int floorval = int(leveled);
    printf("%d\n", floorval);
    float mid = (floorval * level);
    printf("%f\n", mid);
    // float mid = (int(((( L + R ) / 2.0) / level)))*level ;
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
	float number;
    int prec;
    cin >> number;
    cin >> prec;
    // cout<<binarysearch(number, 0, number, 1) << "\n";
    float curr_sol = binarysearch(number, 0, number, 1);
    double level = 0.1;
    for(int i=0; i<prec; i++)
    {
        curr_sol = binarysearchdecimal(number, curr_sol, (curr_sol+(level*10)), level);
        level /= 10;
        cout << "OUTPUT =" <<curr_sol << endl;
    }
	return 0;
}
