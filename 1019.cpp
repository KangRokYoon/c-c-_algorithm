# include <stdio.h>
int yyyy, hh, mm;
int main() {
    scanf("%d.%d.%d", &yyyy,&hh,&mm);
    printf("%04d.%02d.%02d",yyyy, hh, mm);
    return 0;
};