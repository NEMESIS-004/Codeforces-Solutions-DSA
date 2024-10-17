#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c, d;
    scanf("%d:%d", &a, &b);
    scanf("%d:%d", &c, &d);
    int k = (60 * a + 60 * c + b + d) / 2;
    printf("%02d:%02d", k / 60, k % 60);
    return 0;
}