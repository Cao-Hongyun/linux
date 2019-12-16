#include "mylib.h"

int main()
{
    int a[unumber];
    init(a,unumber);
    show(a,unumber);
    printf("max=%d",max(a,unumber));
    printf("sum=%d",sum(a,unumber));
    return 0;
}
