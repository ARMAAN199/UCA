/*
 * Program calculates square root of a number using binary Search
 * 
 *  @Armaan Jain
 *  Language: CPP
 *  Assignment: 1 
 */

#include <iostream>
using namespace std;


double binarysearchdecimal(double number, double L, double R, double level) 
{
    double mid = ( L + R ) / 2;
    mid =  level!=1? (mid / level)+level : mid;
    // Truncating the double values down to the current precision value
    mid = (int(mid)*level);
    if ( L > R )
    {
        return -1;
    }
    if ((( mid * mid ) <= number) && (( (mid+level) * (mid+level) ) > number))
    {
        return mid;
    }
    if (( mid * mid ) < number)
    {
        return binarysearchdecimal(number, mid, R, level);
    }
    else
    {
        return binarysearchdecimal(number, L, mid, level);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	double number, level =0.1;
    int prec;
    cin >> number >> prec;
    double curr_sol = binarysearchdecimal(number, 0, number, 1);
    for(int i=0; i<prec; i++)
    {
        curr_sol = binarysearchdecimal(number, curr_sol, (curr_sol+(level*10)), level);
        level /= 10;
    }
    cout << curr_sol << endl;
	return 0;
}