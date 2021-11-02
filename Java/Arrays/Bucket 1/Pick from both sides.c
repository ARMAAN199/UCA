int solve(int* A, int n1, int B) {
    int curr_max = 0, i;
    for(i=0; i<B; i++)
    {
        curr_max += A[i];
    }
    int max = curr_max;
    // printf("%d", max);
    for(i=0; i<B; i++)
    {
        curr_max = curr_max - A[B-i-1] + A[n1-1-i];
        // printf("%d   %d\n   %d\n", A[B-i-1], A[n1-1-i], curr_max);
        if(curr_max>max) max = curr_max;
    }
    return max;

}
