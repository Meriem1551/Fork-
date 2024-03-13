#include <stdio.h>
int main(){
int x1=fork();
if(x1==0){
for(int i=1; i<500; i++){
printf("%d\n", i);
}
}else{
int x2=fork();
sleep(2);
if(x2==0){
for(int i=501; i<1000; i++){
printf("%d\n", i);
}
}
}
}
