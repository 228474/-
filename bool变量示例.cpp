#include <stdio.h>
#include <stdbool.h>

// ����������Ƿ�Ϊ����
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// ����������Ƿ�Ϊ������
bool is_palindrome(int num) {
    int reversed = 0;
    int original = num;
    while (num > 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

// �������ҳ���Χ�ڵĻ�������
void find_palindrome_primes(int a, int b) {
    if (a < 5) {
        a = 5;
    }
    for (int num = a; num <= b; num++) {
        if (is_palindrome(num) && is_prime(num)) {
            printf("%d\n", num);
        }
    }
}

int main() {
    
    int a,b;
    scanf("%d %d",&a,&b);

    //printf("���������б�:\n");
    find_palindrome_primes(a, b);

    return 0;
}

