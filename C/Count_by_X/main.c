#include <stdio.h>
void count_by(unsigned x, unsigned n, unsigned result[n]) {
    int last;
    last = 0;
    for (int i = 0; i < n; i++)
    {
        result[i] = last+x;
        printf("%d\n", result[i]);
        last += x;
    }
    
  
}
int main(){
    int x = 2;
    int n = 5;
    int nums[n];
    count_by(x, n, nums);
    return 0;
}