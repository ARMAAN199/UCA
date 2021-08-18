/* inversion
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 integers
 *Assignment: Assignment2_Bits_Bytes
 */

/* 
/* Return x with the n bits that begin at position p inverted (i.e. turn 0 /* into 1 and vice versa)
/* and the rest left unchanged. Consider the indices of x to begin with the /* lower -order bit   numbered
/* Legal ops: ~ & ^ | << >>
/* as zero
*/

int invert(int x, int p, int n)
{
    return   x ^ (~(~0 << n) << (p + 1 - n));
}


int main(){
    int x,p,n;
    scanf("%d", &x);
    scanf("%d", &p);
    scanf("%d", &n);
    printf("%d",invert(x,p,n));  
}