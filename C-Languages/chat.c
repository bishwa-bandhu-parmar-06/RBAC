#include<stdio.h>

int main() {
    int n1, n2, hcf, temp, lcm;
    printf("Enter the value of n1 and n2: ");
    scanf("%d %d", &n1, &n2);
    
    // Calculate HCF
    while (n2 != 0) {
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }
    hcf = n1;
    printf("HCF is %d\n", hcf);
    
    // Calculate LCM
    lcm = (n1 * n2) / hcf;
    printf("LCM is %d\n", lcm);
    
    return 0;
}
