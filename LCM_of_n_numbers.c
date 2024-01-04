#include <stdio.h>

// Function to find the GCD (Greatest Common Divisor) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the LCM (Least Common Multiple) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to find the LCM of numbers in an array
int findLCM(int nums[], int size) {
    int result = nums[0];

    for (int i = 1; i < size; i++) {
        result = lcm(result, nums[i]);
    }

    return result;
}

int main() {
    int size;

    
    scanf("%d", &size);

    int nums[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findLCM(nums, size);

    printf("%d
", result);

    return 0;
}