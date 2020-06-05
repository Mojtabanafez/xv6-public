#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int a = fork();
    
    if (a == 0)
    {
        if(fork()){
            malloc((int)getpid() * 1700 * (sizeof(int)));
            if (fork())
            {
                malloc((int)getpid() * 1008 * (sizeof(int)));
                while (1){}
                
            }
            else
            {
                malloc((int)getpid() * 1800 * (sizeof(int)));
                while (1){}
            }
        }else{
            malloc((int)getpid() * 1090 * (sizeof(int)));
            if (fork())
            {
                malloc((int)getpid() * 1030 * (sizeof(int)));
                while (1){}
            }
            else
            {
                malloc((int)getpid() * 1100 * (sizeof(int)));
                while (1){}
            }
        }

       
    }
    malloc((int)getpid() * 1000 * (sizeof(int)));
    exit();
}