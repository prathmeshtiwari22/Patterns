#include <stdio.h>

int main() {
    int num=1;
    for(int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
                printf(" %d ",num);
                num++;
        }
        printf("\n");
    }
    return 0;
}
// 1
// 2 3
// 4 5 6
// 7 8 9 10 
// 11 12 13 14 15
