#include<stdio.h>

char dec_to_hex(char cp){
    int n=(int)cp;
    int tens=n/16;
    int ones=n-(16*tens);
    char c;
    switch(ones) {

    case 10:
            c='a';
            break;
    case 11:
            c='b';
            break;
    case 12:
            c='c';
            break;
    case 13:
            c='d';
            break;
    case 14:
            c='e';
            break;
    case 15:
            c='f';
            break;
    default: sprintf(c,"%i",ones);
            break;
}
    // char str[1];

    // snprintf(str,1,"%i\n",tens);
    printf("%c %i %i ",c,tens,ones);

    return cp;
}

int main(int argc,char** argv){
    for(int i=1;i<argc;i++){
        // char c = argv[i][0];
        // int n=(int)c;
        // int tens=n/16;
        // int ones=n-(16*tens);
        
        // char s[2];
        // s[0]=s[0]+tens;


        // int hex=0x1;
        // hex=hex;      
        // printf("%d hi %02x \n",ones,hex);
        dec_to_hex('y');
    }
    int p=4;
    char *c;

    sprintf(c,"%i",p);
    printf("%s\n",c);
    // dec_to_hex('y');
}
