#include <stdio.h>

int main(int argc, char *argv[]){
    
    int vet[] = {2,257,1025,48};
    int i;
    void *byte;

    byte = vet;
    for(i = 0; i < 4*sizeof(int) ; i++){
        printf("%p = %02x\n",byte,*((char*)byte));
        byte++;
    }
}
