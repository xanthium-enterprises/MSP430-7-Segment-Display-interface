
	//----------------------------------------------------------------------------//
	//         Program to display alpha numeric characters (0-F)                  //
	//----------------------------------------------------------------------------//
	//  www.xanthium.in                                                           //
	// (c)2015 Rahul.S                                                            //
	//----------------------------------------------------------------------------//
	// Program will loop through ALpha numeric characters from 0-F continously    //
	//----------------------------------------------------------------------------//
	//                                                                            //
	//    MSP430G2553            BUFFER         LT543 (Common Cathode,7Segment)   //
	// +----------------+       +------+       +------------+                     //
	// |	       P1.0 |------>|  7   |------>|a           |                     //
	// |           P1.1 |------>|  4   |------>|b  +======+ |                     //
	// |           P1.2 |------>|  L   |------>|c  ||    || |                     //
	// |           P1.3 |------>|  S   |------>|d  ||    || |                     //
	// |           P1.4 |------>|  2   |------>|e  +======+ |                     //
	// |           P1.5 |------>|  4   |------>|f  ||    || |                     //
	// |           P1.6 |------>|  4   |------>|g  ||    || |----+                //
	// |           P1.7 |------>|      |------>|dp +======+ |    |                //
	// +----------------+       +------+       +------------+    |                //
	//                                                           |GND             //
	//                                                          \/                //
	//----------------------------------------------------------------------------//
	// Compiled on IAR Embedded Workbench for MSP430 version 5.30.1               //
	// 18-june-2015                                                               //
	// Rahul.S                                                                    //
	//----------------------------------------------------------------------------//

	#include "msp430g2553.h"
	void main (void)
	{
  		void delay(void);
  		WDTCTL = WDTPW + WDTHOLD;//Stop WDT
		
  		P1DIR = 0xFF; // P1DIR set as output,connected to LED segments
  		P1OUT = 0x00; // 7segment display OFF
		
  		while (1) // loop to cycle through the alpha numeric characters
  		{
  			P1OUT = 0x3F; //0
  			delay();
  			P1OUT = 0x06; //1
  			delay();
  			P1OUT = 0x5B; //2
  			delay();
  			P1OUT = 0x4F; //3
  			delay();
  			P1OUT = 0x66; //4
  			delay();
 			P1OUT = 0x6D; //5
  			delay();
  			P1OUT = 0x7D; //6
  			delay();
 			P1OUT = 0x07; //7
 	    	delay();
  			P1OUT = 0x7F; //8
  			delay();
  			P1OUT = 0x6F; //9
  			delay();
  			P1OUT = 0x77; //A
  			delay();
  			P1OUT = 0x7C; //b
  			delay();
  			P1OUT = 0x39; //C
 			delay();
 			P1OUT = 0x5E; //d
        	delay();
        	P1OUT = 0x79; //E
        	delay();
        	P1OUT = 0x71; //F
        	delay();
  		}
	}

	void delay()
	{
  		int i,j;
  		for(i=0;i<0xFFFF;i++)
			 for(j=0;j<2;j++);
	}
