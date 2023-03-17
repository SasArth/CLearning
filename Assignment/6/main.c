#include <stdio.h>
int main(){int n, c, op;n = 2;for (c = 31; c >= 0; c--){op = n >> c;if (op & 1){printf("1")};else{printf("0");}}return 0;}
