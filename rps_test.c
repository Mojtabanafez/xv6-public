#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int a = fork();

    printf(1, "%d \n", (int)getpid());
   // growproc(222000);
    if (a == 0)
    {
        fork();
        fork();
        while (1)
        {
        }
   }
   exit();
}