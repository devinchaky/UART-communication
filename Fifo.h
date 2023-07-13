// Fifo.h
// Runs on LM4F120/TM4C123
// Provide functions that implement the Software FiFo Buffer
// Last Modified: 4/10/2023 
// Student names: Devin Chaky

#include <stdint.h>

// *********** Fifo_Init**********
// Initializes a software FIFO of a
// fixed size and sets up indexes for
// put and get operations
void Fifo_Init(void);

// *********** Fifo_Put**********
// Adds an element to the FIFO
// Input: Character to be inserted
// Output: 1 for success and 0 for failure
//         failure is when the buffer is full
uint32_t Fifo_Put(char data);

// *********** Fifo_Get**********
// Gets an element from the FIFO
// Input: none
// Output: If the FIFO is empty return 0
//         If the FIFO has data, remove it, and return it
uint32_t Fifo_Get(void);
