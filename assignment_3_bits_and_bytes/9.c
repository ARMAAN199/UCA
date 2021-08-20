/* hackerrank Question
 *
 *Author - Armaan Jain 1910990432
 *Assignment: Assignment2_Bits_Bytes
 */
 
 //At this point I've only got it partially done. I'll upload as soon as I'm done. In less than 12 hours probably. 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* to_binary(int n)
{
    static char bin[5];
    for (int i = 4; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            bin[4-i] = '1';
        else
            bin[4-i] = '0';
    }
    // printf("%s ",bin);
    return bin;
}

int todecimal(char* s)
{
int i,N,decimal_number=0,p=0;
N=6;
for(i=N-1;i>=0;i--)
{
    if(s[i]=='1')
    {
        decimal_number+=pow(2,p);
    }
    p++; 
}
printf("%d ", decimal_number);
return decimal_number;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    while(n--)
    {
      char str[205];
      scanf("%s",str);
      // fgets(str, 205, stdin);
      printf("%s\n",str);
        int size = strlen(str);
        int arr[size];
     for(int i=0;i<size;i++)
     {
         if(str[i]>='A' && str[i]<='Z')      
         arr[i] = str[i]-65;
         if((str[i]>='0' && str[i]<='9'))
         arr[i] = str[i]-24;
         if(str[i]=='=')
         arr[i] = 0;
     }
     char bin_string[(size*5)+(8-((size*5)%8))];
     for(int i=0;i<size;i++)
     {
         printf("%d ",arr[i]);
         strcat(bin_string, to_binary(arr[i]));
         // printf("%s ",bin_string);
     }   
     int new_size = strlen(bin_string);
        
     new_size = (new_size/6);
     if(strlen(bin_string)%6)
         new_size++;
     int six_bit_bin_arr[new_size];
        
     int m=0;   
     for(int i=0;i<new_size;i++)
     {
         char six_bit_bin[6];
         for(int k=0;k<6;k++)
         {
             six_bit_bin[k] = bin_string[m];
             m++;
         }
         todecimal(six_bit_bin);
     }          
    }
    return 0;
}
