#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
printf("PID de main %d\n", getpid());
int x1 = fork();
if(x1==0){
printf("PID de fils 1 est %d\n", getpid());
printf("PPID de fils 1 est %d\n", getppid());
}
else{
int x2 = fork();
if(x2==0){
printf("PID de fils 2 est %d\n", getpid());
printf("PPID de fils 2 est %d\n", getppid());
}
else sleep(3);
}
return 0;
}
