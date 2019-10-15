#include "mylib.h"
#include <stdlib.h>
#include <dlfcn.h>
#include <stdio.h>
int main()
{
    int a[unumber];
    void *handle;
    int (*f1)(),(*f2)();
    void (*f3)(),(*f4)();
    char* error;

    handle = dlopen("/home/rlk/linuxprogram/week6/code/dynamiclib/libdynamic.so",RTLD_LAZY);

    if(!handle)
    {
        fprintf(stderr,"%s\n",dlerror());
        exit(1);
    }

    f1=dlsym(handle,"max");
    if((error=dlerror())!=NULL)
    {
        fprintf(stderr,"%s\n",dlerror());
        exit(1);
    }

    f2=dlsym(handle,"sum");   
    if((error=dlerror())!=NULL)
    {
        fprintf(stderr,"%s\n",dlerror());
        exit(1);
    }

    f3=dlsym(handle,"show");
    if((error=dlerror())!=NULL)
    {
        fprintf(stderr,"%s\n",dlerror());
        exit(1);
    }

    f4=dlsym(handle,"init");
    if((error=dlerror())!=NULL)
    {
        fprintf(stderr,"%s\n",dlerror());
        exit(1);
    }

    f4(a,unumber);
    f3(a,unumber);
    printf("max=%d\n",f1(a,unumber));
    printf("sum=%d\n",f2(a,unumber));
    
    if(dlclose(handle)<0)
    {
        fprintf(stderr,"%s\n",dlerror());
        exit(1);
    }
    return 0;
}
