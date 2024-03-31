#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    printf(1,"Unix v6 was released in the year %d\n", getyear());
    printf(1,"Size of my address space %d bytes\n", getmysize());
    exit();
}