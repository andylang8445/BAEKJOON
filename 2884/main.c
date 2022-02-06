#include <stdio.h>

int main()
{
    int h,m;
    int tot;
    scanf("%d %d",&h,&m);
    tot=m+(60*h)-45;
    if(tot<0)
        tot=24*60+tot;
    printf("%d %d",tot/60,tot%60);
    return 0;
}