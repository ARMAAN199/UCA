#include <iostream>
using namespace std;

double binarysearchdecimal(double number, double L, double R, double level) 
{
    // double mid = ( L + R ) / 2;
    // cout << "MID" << (floor(((( L + R ) / 2) / level)))*level << endl;
    double mid = ( L + R ) / 2;
    mid =  level!=1? (mid / level)+level : mid;
    mid = (int(mid)*level);
    printf("%f\n", mid);
    // double mid = (int(((( L + R ) / 2.0) / level)))*level ;
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