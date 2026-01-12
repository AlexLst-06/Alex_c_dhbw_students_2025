#include <stdio.h>
#include <stdlib.h>

int main()
{

    
    size_t lenght = 3; 
    size_t memoryReq = lenght * sizeof(int); 
    

    printf("\nsize of length: %lu", sizeof(int));
    printf("\nadress of length: %p", (void*)&lenght);
    printf("\nmemory requierement: %zu\n\n", memoryReq);

    //HEHEHEHEHEHEHEH
    
    int *heapArry = malloc(memoryReq);

    for(size_t i = 0; i <lenght; i++){
        
        heapArry[i] = (int)i*100;

    }

    for(size_t i = 0; i <lenght; i++){
        printf("\nHeapArray [%lu]: %d", i, heapArry[i] );
        printf("\nadress of HeapArray [%lu]: %p", i, (void*)&heapArry[i] );
    }

    free(heapArry); //Speicherfreigabe 

    heapArry = NULL; //Pointer löschen oder heapArray = (void*)0; 


    //infinity Time for run


    return 0;
}