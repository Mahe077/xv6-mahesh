#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    // printf(1,"Unix v6 was released in the year %d\n", getyear());
    // printf(1,"Size of my address space %d bytes\n", getmysize());
    printf(1,"Start of kernel %p\n", getkernelstartaddr());
    printf(1,"End of kernel %p \n", getkernelendaddr());
    printf(1,"Addr of kernel variable %p\n", getkernelvariaddr());
    printf(1,"Addr of fork sys call %p\n", getsystemcalladdr());
    exit();
}