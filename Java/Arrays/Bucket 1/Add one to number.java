public class Solution {
    public int[] plusOne(int[] B) {
        if(B.length == 1 && B[0] == 0)
        {
           int[] A = {1};
           return A; 
        }
        int k =0;
        while(B[k] ==0) k++;
        int[] A = new int[B.length - k];
        for(int l=0; l<B.length; l++)
        {
            A[l] = B[k];
            k++;
        }
        int carryforward = 0, temp;
        A[A.length-1]++;
        for(int i=A.length-1;i>=0;i--)
        {
            temp = A[i] + carryforward;
            if(temp >= 10) 
            {
                A[i]=temp%10;
                carryforward = temp/10;
            }
            else 
            {
                A[i]+=carryforward;
                carryforward =0;
                break;
            }
        }
        // System.out.println(carryforward);
        if(carryforward > 0)
        {
            int[] new_arr = new int[A.length+1];
            new_arr[0] = carryforward;
            for(int i=1; i<A.length;i++)
            {
                new_arr[i] = A[i];
            }
            return new_arr;
        }
        return A;
    }
}