#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    unsigned char temp[] = {0x09,0x00};
    short left;
    memcpy(&left,temp,2);
    printf("%d\n",left);

    char** pData = new char*[10];
    for(int i=0;i<10;i++){
        pData[i] = new char[1024];
        strcpy(pData[i],"lj");
    }

    for(int i=0;i<10;i++){
        printf("%s\n",pData[i]);
    }

    
   return 0;
}
