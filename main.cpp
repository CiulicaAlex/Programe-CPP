#include <iostream>
int a[101][101];
int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cin >> a[i][j];
        }
    }
    int Sum1 = 0, Sum2 = 0, Sum3 = 0, Sum4 = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > i && i + j < n + 1) Sum1 += a[i][j];
            else if (j > i && i + j > n + 1) Sum2 += a[i][j];
            else if (i > j && i + j > n + 1) Sum3 += a[i][j];
            else if (i > j && i + j < n + 1) Sum4 += a[i][j];
        }
    }
    std::cout<<"Zona 1(A)=" << Sum1 << " " <<"Zona 2(B)="<< Sum2 << " " <<"Zona 3(C)="<< Sum3 << " " <<"Zona 4(D)="<< Sum4 << std::endl;
    char fill;
    if (Sum1 >= Sum2 && Sum1 >= Sum3 && Sum1 >= Sum4) fill = 'A';
    else if (Sum2 >= Sum1 && Sum2 >= Sum3 && Sum2 >= Sum4) fill = 'B';
    else if (Sum3 >= Sum1 && Sum3 >= Sum2 && Sum3 >= Sum4) fill = 'C';
    else fill = 'D';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << fill << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}