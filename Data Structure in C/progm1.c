#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct day{
    char *name;
    int *date;
    char *activity;
};
void createcal(struct day *calendar){
    int i;
    for(i=0;i<7;i++){
        calendar[i].name=(char *)malloc(10*sizeof(char));
        calendar[i].date=(int *)malloc(10*sizeof(int));
        calendar[i].activity=(char *)malloc(10*sizeof(char));
    }
}
void readcal(struct day *calendar){
    int i;
    for(i=0;i<7;i++){
        printf("Enter the Name of the day %d:",i+1);
        scanf("%s",calendar[i].name);
        printf("Enter the Date of the day %d:",i+1);
        scanf("%d",&calendar[i].date);
        printf("Enter the Activity of the day %d:",i+1);
        scanf("%s",calendar[i].activity);
        printf("\n");
    }
}
void display(struct day *calendar){
    printf("Calendar:\n");
    int i;
    for(i=0;i<7;i++){
        printf("Day %d Name:%s\n",i+1,calendar[i].name);
        printf("Day %d Date:%d\n",i+1,calendar[i].date);
        printf("Day %d Activity:%s\n",i+1,calendar[i].activity);
        printf("\n");
    }
}
int main(){
    struct day *ptr=(struct day *)malloc(7*sizeof(struct day));
    createcal(ptr);
    readcal(ptr);
    display(ptr);
    free(ptr);
    return 0;
}