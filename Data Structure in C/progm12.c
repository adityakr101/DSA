#include<stdio.h>
#include<stdlib.h>
int key[20],n,m;
int *ht,index;
int count=0;
void insert(int key){
    index=key%m;
    while(ht[index]!=-1){
        index=(index+1)%m;
    }
    ht[index]=key;
    count++;
}
void display(){
    int i;
    if(count==0){
        printf("hash Table is Empty");
        return;
    }
    printf("\n Hash Table contents are:\n");
    for(i=0;i<m;i++)
    printf("\n T[%d]->%d",i,ht[i]);
}
void main(){
    int i;
    printf("Enter the no. of Employee Records(N):");
    scanf("%d",&n);
    printf("Enter the two digit memory locations(m) for hash Table:");
    scanf("%d",&m);
    ht=(int *)malloc(m*sizeof(int));
    for(i=0;i<m;i++)
    ht[i]=-1;
    printf("Enter the four digit key values(k) for N Employee Records:\n");
    for(i=0;i<n;i++)
    scanf("%d",&key[i]);
    for(i=0;i<n;i++){
        if(count==m){
            printf("\n -----hash Table is full.cannot insert record %dkey---",i+1);
            break;
        }
        insert(key[i]);
    }
    display();
}