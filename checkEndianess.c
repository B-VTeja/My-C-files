#include <stdio.h>
#include <inttypes.h>
int main(void)
{
    uint32_t data;
    uint8_t *cptr;
    
    data = 1; //Assign data
    cptr = (uint8_t *)&data; //Type cast
    
    if (*cptr == 1)
    {
        printf("little-endiann");
	printf("\n%p ---- %x\n", cptr, *cptr);
    }
    else 
    {
        printf("big-endiann");
	printf("\n%p ---- %x\n", cptr, *cptr);
    }
    
    return 0;
}
