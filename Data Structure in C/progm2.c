#include<stdio.h>
#include<stdlib.h>
char str[50],pat[20],rep[20],res[50];
int c=0,m=0,i=0,j=0,k,flag=0;
void stringmatch(){
    while(str[c]!='\0'){
        if(str[m]==pat[i]){
            i++;
            m++;
            if(pat[i]=='\0'){
                flag=1;
                for(k=0;rep[k]!='\0';k++,j++){
                    res[j]=rep[k];
                }
                i=0;
                c=m;
            }
        }
        else{
            res[j]=str[c];
            j++;
            c++;
            m=c;
            i=0;
        }
    }
    res[j]='\0';
}
void main(){
    printf("Enter the main string:");
    gets(str);
    printf("Enter the pattern string:");
    gets(pat);
    printf("Enter the replace string:");
    gets(rep);
    printf("The string before pattern match is:%s\n",str);
    stringmatch();
    if(flag==1)
    printf("The string after pattern match and replace is:%s\n",res);
    else
    printf("The pattern is not found in main string");
}