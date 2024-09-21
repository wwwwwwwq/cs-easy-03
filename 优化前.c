#include <stdio.h>
// 递归函数计算斐波那契数列第n项
int f(int n) {
    if (n <= 1) {
        return n;
    }
    return f(n - 1) + f(n - 2);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n",f(n));
    return 0;
}