#include "mylib.h"

int main()
{
    int a[unumber];
    init(a,unumber);
    show(a,unumber);
    printf("max=%d\n",max(a,unumber));
    printf("sum=%d\n",sum(a,unumber));
    return 0;
}
