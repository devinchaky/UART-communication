// FiFo.c
// Runs on LM4F120/TM4C123
// Provide functions that implement the Software FiFo Buffer
// Last Modified: 4/10/2023
// Student names: Devin Chaky

#include <stdint.h>

// Declare state variables for FiFo
//        size, buffer, put and get indexes
#define FIFO_SIZE 16
static char Fifo[FIFO_SIZE];
static uint8_t PutI;  // index to put new
static uint8_t GetI;  // index of oldest

// *********** FiFo_Init**********
// Initializes a software FIFO of a
// fixed size and sets up indexes for
// put and get operations
void Fifo_Init() {
//Complete this
	PutI = 0;
	GetI = 0;
}

// *********** FiFo_Put**********
// Adds an element to the FIFO
// Input: Character to be inserted
// Output: 1 for success and 0 for failure
//         failure is when the buffer is full
uint32_t Fifo_Put(char data){
  //Complete this routine
   if(((PutI+1)%FIFO_SIZE) == GetI) return 0; // fail if full
	 Fifo[PutI] = data;
	 PutI = (PutI+1)%FIFO_SIZE;
   return(1);
}

// *********** Fifo_Get**********
// Gets an element from the FIFO
// Input: none
// Output: If the FIFO is empty return 0
//         If the FIFO has data, remove it, and return it
char Fifo_Get(void){
  //Complete this routine
	uint32_t getData;
	if(GetI==PutI) return 0;
	getData = Fifo[GetI];
	GetI = (GetI+1)%FIFO_SIZE;
   return(getData);
}



