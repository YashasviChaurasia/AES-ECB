#include<stdio.h>
void prt(int n,int m){
    // int k=m+n;
    // printf("%i %i \n",m,n);
    // char c='A';
    // printf("%c\n",c);
    int y=7;
    int*p=&y;
    int z=2;
    int *p4=&z;
    printf("%p sexyyy %p \n",p,p4);
    printf("%p let see\n",p4+4);
    *(p4+4)=9;
    printf("%i\n",y);

    int x=y++;
    int z2=++y;
    printf("%i %i %i\n",y,x,z2);

    //strings
    char s[]="asdfghj";
    char * str="fgh";

    // p=&y;
    // printf("hiiii %p\n",p);
    int arr[5]={1,3,9,5,7};
    int *p2;
    
    p2=arr;//also the pointer stores the start of an array which is also an address
    printf("%p %p\n",p2,p2+1);//adds 1 type of data 
    p2[0]=99;
    *(arr+3)=90;
    printf("%p %p %i %i\n",p2,arr,*p2,*(p2+3));


    // return k;
}
int main(int argc,char** argv){
    printf("Start of Code \n");
    printf("%i\n",argc);
    for(int i=0;i<argc;i++){
        printf("%s \n",argv[i]);// first argument is name of file itself
    }
    // /prt(4,5);
   
}
