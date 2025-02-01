#include<stdio.h>
#include<math.h>
void tower(int n,int source,int temp,int destination){
    if(n==0)
    return;
    tower(n-1,source,destination,temp);
    printf("\n Move destination %d from %c to %c",n,source,destination);
    tower(n-1,temp,source,destination);
}
void main(){
    int n;
    printf("Enter the no. of destination:");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("\n\n The Total no. of moves are:%d",(int)pow(2,n)-1);
}