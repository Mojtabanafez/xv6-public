#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int a = fork();
    if(a==0){
        fork();
        fork();
        while (1)
        {
        }
    }
}