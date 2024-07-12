#include <stdio.h>
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int n;
    int process;
    printf("Enter Number: ");
    scanf("%d",&n);
    int fork();
    process = fork();
    if (process < 0){
    exit(0);
    printf("Failed to Create Child\n");
}
    else if (process == 0) {
    if(n > 0) {
    while(n > 0){
    printf("%d ",n);
    if(n == 1){
    break;
 }
    else if(n % 2 == 0){
    n = n / 2;
    }
        else{
        n = (3 * n) + 1;
        }
    }
}
        else {
        printf("Please enter a positive integer!\n");
        }
        exit(0);
        }
            else {
            wait(NULL);
            printf("\nParent process ended\n");
            }
return 0;
}