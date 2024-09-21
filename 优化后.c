#include <stdio.h>
// 递推方法实现斐波那契数列
int f(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0; 
    int b = 1; 
    int c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;    
        b = c;    
    }
    return c; 
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
