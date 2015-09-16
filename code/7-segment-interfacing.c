	
	//----------------------------------------------------------------------------//
	//      Program to interface MSP430G2553 with 7 Segment LED Display           //
	//----------------------------------------------------------------------------//

	//----------------------------------------------------------------------------//
	//  www.xanthium.in                                                           //
	// (c)2015 Rahul.S                                                            //
	//----------------------------------------------------------------------------//

	//----------------------------------------------------------------------------//
	// Program to interface 7 segment display with MSP430 and control the-        //
	// -individual segments,display numbers ,Hexa decimal characters and          //
	// some english letters.                                                      //
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

	//----------------------------------------------------------------------------//
	// Compiled on IAR Embedded Workbench for MSP430 version 5.30.1               //
	// 18-june-2015                                                               //
	// Rahul.S                                                                    //
	//----------------------------------------------------------------------------//

	#include "msp430g2553.h"
	void main (void)
	{
  		WDTCTL = WDTPW + WDTHOLD; //stop WDT
  		P1DIR = 0xFF;             // P1DIR set as output,connected to LED segments
		
		// Single step through the code below to view all the characters
		
		
  		//---------------------------------------//
  		//     7 segments of the Display         //
  		//---------------------------------------//
  			P1OUT = 0x00; // No Segments ON
  			P1OUT = 0x01; // Segment a  ON
 			P1OUT = 0x02; // Segment b  ON
  			P1OUT = 0x04; // Segment c  ON
  			P1OUT = 0x08; // Segment d  ON
  			P1OUT = 0x10; // Segment e  ON
  			P1OUT = 0x20; // Segment f  ON
  			P1OUT = 0x40; // Segment g  ON
  			P1OUT = 0x80; // Segment dp ON
  			P1OUT = 0xFF; // All Segments ON
  
  		//--------------------------------------//
  		//    Alpha Numeric Characters 0-F      //
  		//--------------------------------------//
  			P1OUT = 0x3F; //0
  			P1OUT = 0x06; //1
  			P1OUT = 0x5B; //2
 			P1OUT = 0x4F; //3
  			P1OUT = 0x66; //4
  			P1OUT = 0x6D; //5
  			P1OUT = 0x7D; //6
  			P1OUT = 0x07; //7
  			P1OUT = 0x7F; //8
  			P1OUT = 0x6F; //9
  			P1OUT = 0x77; //A
  			P1OUT = 0x7C; //b
  			P1OUT = 0x39; //C
  			P1OUT = 0x5E; //d
  			P1OUT = 0x79; //E
  			P1OUT = 0x71; //F
			
  		//--------------------------------------------//
 		//      Some Extra English Characters         //	
  		//--------------------------------------------//
  			P1OUT = 0x76; //H
  			P1OUT = 0x38; //L
  			P1OUT = 0x54; //n
  			P1OUT = 0x73; //P
  			P1OUT = 0x78; //t
  			P1OUT = 0x3E; //U
  			P1OUT = 0x72; //Y
  
	}