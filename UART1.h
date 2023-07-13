// UART1.h
// Runs on LM4F120/TM4C123
// Provides Prototypes for functions implemented in UART.c
// Last Modified: 4/10/2023 
// Student names: Devin Chaky

#include <stdint.h>
#include "tm4c123gh6pm.h"

#define STX 0x02
#define ETX 0x03
#define LF  0x0A
#define CR  0x0D
// UART1 initialization function 
// Input: none
// Output: none
void UART1_Init(void);

//------------UART1_InChar------------
// Wait for new input, interrupt driven
// then return ASCII code
// Input: none
// Output: char read from UART
char UART1_InChar(void);

//------------UART1_InMessage------------
// Accepts ASCII characters from the serial port
//    and adds them to a string until LF is typed
//    or until max length of the string is reached.
// Input: pointer to empty buffer of 8 characters
// Output: Null terminated string
void UART1_InMessage(char *bufPt);

//------------UART_1OutChar------------
// Wait for new input,
// then return ASCII code
// Input: none
// Output: char read from UART1
// *** Need not be busy-wait if you know when to call
void UART1_OutChar(char data);
