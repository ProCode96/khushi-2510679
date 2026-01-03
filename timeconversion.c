#include <stdio.h>
int main()
{
    int hrs,tot_sec,rem_sec,min,rem_sec1;
    float dec_hrs;
    scanf("%d",&tot_sec);
    hrs=tot_sec/3600;rem_sec=tot_sec%3600;min=rem_sec/60;rem_sec1=rem_sec%60;
    
    printf("%02d:%02d:%02d",hrs,min,rem_sec1);
}