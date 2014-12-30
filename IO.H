//****************************************************************************
// @Module        Parallel Ports
// @Filename      IO.C
// @Project       project.dav
//----------------------------------------------------------------------------
// @Controller    Infineon C167CS-L
//
// @Compiler      Keil
//
// @Codegenerator 2.2
//
// @Description   This file contains all function prototypes and macros for 
//                the IO module.
//
//----------------------------------------------------------------------------
// @Date          30/12/2014 13:29:10
//
//****************************************************************************

// USER CODE BEGIN (IO_Header,1)

// USER CODE END



#ifndef _IO_H_
#define _IO_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (IO_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

//----------------------------------------------------------------------------
// Defines for the parameter PinName
//----------------------------------------------------------------------------

//   
#define IO_P0H_0 P0H_P0H_0

//   
#define IO_P0H_1 P0H_P0H_1

//   
#define IO_P0H_2 P0H_P0H_2

//   
#define IO_P0H_3 P0H_P0H_3

//   
#define IO_P0H_4 P0H_P0H_4

//   
#define IO_P0H_5 P0H_P0H_5

//   
#define IO_P0H_6 P0H_P0H_6

//   
#define IO_P0H_7 P0H_P0H_7


//   
#define IO_P0L_0 P0L_P0L_0

//   
#define IO_P0L_1 P0L_P0L_1

//   
#define IO_P0L_2 P0L_P0L_2

//   
#define IO_P0L_3 P0L_P0L_3

//   
#define IO_P0L_4 P0L_P0L_4

//   
#define IO_P0L_5 P0L_P0L_5

//   
#define IO_P0L_6 P0L_P0L_6

//   
#define IO_P0L_7 P0L_P0L_7


//   
#define IO_P1H_0 P1H_P1H_0

//   
#define IO_P1H_1 P1H_P1H_1

//   
#define IO_P1H_2 P1H_P1H_2

//   
#define IO_P1H_3 P1H_P1H_3

//   
#define IO_P1H_4 P1H_P1H_4

//   
#define IO_P1H_5 P1H_P1H_5

//   
#define IO_P1H_6 P1H_P1H_6

//   
#define IO_P1H_7 P1H_P1H_7


//   
#define IO_P1L_0 P1L_P1L_0

//   
#define IO_P1L_1 P1L_P1L_1

//   
#define IO_P1L_2 P1L_P1L_2

//   
#define IO_P1L_3 P1L_P1L_3

//   
#define IO_P1L_4 P1L_P1L_4

//   
#define IO_P1L_5 P1L_P1L_5

//   
#define IO_P1L_6 P1L_P1L_6

//   
#define IO_P1L_7 P1L_P1L_7


//   
#define IO_P2_0 P2_P2_0

//   
#define IO_P2_1 P2_P2_1

//   
#define IO_P2_2 P2_P2_2

//   
#define IO_P2_3 P2_P2_3

//   
#define IO_P2_4 P2_P2_4

//   
#define IO_P2_5 P2_P2_5

//   
#define IO_P2_6 P2_P2_6

//   
#define IO_P2_7 P2_P2_7

//   
#define IO_P2_8 P2_P2_8

//   
#define IO_P2_9 P2_P2_9

//   
#define IO_P2_10 P2_P2_10

//   
#define IO_P2_11 P2_P2_11

//   
#define IO_P2_12 P2_P2_12

//   
#define IO_P2_13 P2_P2_13

//   
#define IO_P2_14 P2_P2_14

//   
#define IO_P2_15 P2_P2_15


//   
#define IO_P3_0 P3_P3_0

//   
#define IO_P3_1 P3_P3_1

//   
#define IO_P3_2 P3_P3_2

//   
#define IO_P3_3 P3_P3_3

//   
#define IO_P3_4 P3_P3_4

//   
#define IO_P3_5 P3_P3_5

//   
#define IO_P3_6 P3_P3_6

//   
#define IO_P3_7 P3_P3_7

//   
#define IO_P3_8 P3_P3_8

//   
#define IO_P3_9 P3_P3_9

//   
#define IO_P3_10 P3_P3_10

//   
#define IO_P3_11 P3_P3_11

//   
#define IO_P3_12 P3_P3_12

//   
#define IO_P3_13 P3_P3_13

//   
#define IO_P3_15 P3_P3_15


//   
#define IO_P4_0 P4_P4_0

//   
#define IO_P4_1 P4_P4_1

//   
#define IO_P4_2 P4_P4_2

//   
#define IO_P4_3 P4_P4_3

//   
#define IO_P4_4 P4_P4_4

//   
#define IO_P4_5 P4_P4_5

//   
#define IO_P4_6 P4_P4_6

//   
#define IO_P4_7 P4_P4_7


//   
#define IO_P5_0 P5_P5_0

//   
#define IO_P5_1 P5_P5_1

//   
#define IO_P5_2 P5_P5_2

//   
#define IO_P5_3 P5_P5_3

//   
#define IO_P5_4 P5_P5_4

//   
#define IO_P5_5 P5_P5_5

//   
#define IO_P5_6 P5_P5_6

//   
#define IO_P5_7 P5_P5_7

//   
#define IO_P5_8 P5_P5_8

//   
#define IO_P5_9 P5_P5_9

//   
#define IO_P5_10 P5_P5_10

//   
#define IO_P5_11 P5_P5_11

//   
#define IO_P5_12 P5_P5_12

//   
#define IO_P5_13 P5_P5_13

//   
#define IO_P5_14 P5_P5_14

//   
#define IO_P5_15 P5_P5_15


//   
#define IO_P6_0 P6_P6_0

//   
#define IO_P6_1 P6_P6_1

//   
#define IO_P6_2 P6_P6_2

//   
#define IO_P6_3 P6_P6_3

//   
#define IO_P6_4 P6_P6_4

//   
#define IO_P6_5 P6_P6_5

//   
#define IO_P6_6 P6_P6_6

//   
#define IO_P6_7 P6_P6_7


//   
#define IO_P7_0 P7_P7_0

//   
#define IO_P7_1 P7_P7_1

//   
#define IO_P7_2 P7_P7_2

//   
#define IO_P7_3 P7_P7_3

//   
#define IO_P7_4 P7_P7_4

//   
#define IO_P7_5 P7_P7_5

//   
#define IO_P7_6 P7_P7_6

//   
#define IO_P7_7 P7_P7_7


//   
#define IO_P8_0 P8_P8_0

//   
#define IO_P8_1 P8_P8_1

//   
#define IO_P8_2 P8_P8_2

//   
#define IO_P8_3 P8_P8_3

//   
#define IO_P8_4 P8_P8_4

//   
#define IO_P8_5 P8_P8_5

//   
#define IO_P8_6 P8_P8_6

//   
#define IO_P8_7 P8_P8_7



//----------------------------------------------------------------------------
// Defines used by DAvE
//----------------------------------------------------------------------------

#define INIO_P0H_0       P0H_P0H_0
#define INIO_P0H_1       P0H_P0H_1
#define INIO_P0H_2       P0H_P0H_2
#define INIO_P0H_3       P0H_P0H_3
#define INIO_P0H_4       P0H_P0H_4
#define INIO_P0H_5       P0H_P0H_5
#define INIO_P0H_6       P0H_P0H_6
#define INIO_P0H_7       P0H_P0H_7

#define DIO_P0H_0       DP0H_DP0H_0
#define DIO_P0H_1       DP0H_DP0H_1
#define DIO_P0H_2       DP0H_DP0H_2
#define DIO_P0H_3       DP0H_DP0H_3
#define DIO_P0H_4       DP0H_DP0H_4
#define DIO_P0H_5       DP0H_DP0H_5
#define DIO_P0H_6       DP0H_DP0H_6
#define DIO_P0H_7       DP0H_DP0H_7

#define INIO_P0L_0       P0L_P0L_0
#define INIO_P0L_1       P0L_P0L_1
#define INIO_P0L_2       P0L_P0L_2
#define INIO_P0L_3       P0L_P0L_3
#define INIO_P0L_4       P0L_P0L_4
#define INIO_P0L_5       P0L_P0L_5
#define INIO_P0L_6       P0L_P0L_6
#define INIO_P0L_7       P0L_P0L_7

#define DIO_P0L_0       DP0L_DP0L_0
#define DIO_P0L_1       DP0L_DP0L_1
#define DIO_P0L_2       DP0L_DP0L_2
#define DIO_P0L_3       DP0L_DP0L_3
#define DIO_P0L_4       DP0L_DP0L_4
#define DIO_P0L_5       DP0L_DP0L_5
#define DIO_P0L_6       DP0L_DP0L_6
#define DIO_P0L_7       DP0L_DP0L_7

#define INIO_P1H_0       P1H_P1H_0
#define INIO_P1H_1       P1H_P1H_1
#define INIO_P1H_2       P1H_P1H_2
#define INIO_P1H_3       P1H_P1H_3
#define INIO_P1H_4       P1H_P1H_4
#define INIO_P1H_5       P1H_P1H_5
#define INIO_P1H_6       P1H_P1H_6
#define INIO_P1H_7       P1H_P1H_7

#define DIO_P1H_0       DP1H_DP1H_0
#define DIO_P1H_1       DP1H_DP1H_1
#define DIO_P1H_2       DP1H_DP1H_2
#define DIO_P1H_3       DP1H_DP1H_3
#define DIO_P1H_4       DP1H_DP1H_4
#define DIO_P1H_5       DP1H_DP1H_5
#define DIO_P1H_6       DP1H_DP1H_6
#define DIO_P1H_7       DP1H_DP1H_7

#define INIO_P1L_0       P1L_P1L_0
#define INIO_P1L_1       P1L_P1L_1
#define INIO_P1L_2       P1L_P1L_2
#define INIO_P1L_3       P1L_P1L_3
#define INIO_P1L_4       P1L_P1L_4
#define INIO_P1L_5       P1L_P1L_5
#define INIO_P1L_6       P1L_P1L_6
#define INIO_P1L_7       P1L_P1L_7

#define DIO_P1L_0       DP1L_DP1L_0
#define DIO_P1L_1       DP1L_DP1L_1
#define DIO_P1L_2       DP1L_DP1L_2
#define DIO_P1L_3       DP1L_DP1L_3
#define DIO_P1L_4       DP1L_DP1L_4
#define DIO_P1L_5       DP1L_DP1L_5
#define DIO_P1L_6       DP1L_DP1L_6
#define DIO_P1L_7       DP1L_DP1L_7

#define INIO_P2_0       P2_P2_0
#define INIO_P2_1       P2_P2_1
#define INIO_P2_2       P2_P2_2
#define INIO_P2_3       P2_P2_3
#define INIO_P2_4       P2_P2_4
#define INIO_P2_5       P2_P2_5
#define INIO_P2_6       P2_P2_6
#define INIO_P2_7       P2_P2_7
#define INIO_P2_8       P2_P2_8
#define INIO_P2_9       P2_P2_9
#define INIO_P2_10       P2_P2_10
#define INIO_P2_11       P2_P2_11
#define INIO_P2_12       P2_P2_12
#define INIO_P2_13       P2_P2_13
#define INIO_P2_14       P2_P2_14
#define INIO_P2_15       P2_P2_15

#define DIO_P2_0       DP2_DP2_0
#define DIO_P2_1       DP2_DP2_1
#define DIO_P2_2       DP2_DP2_2
#define DIO_P2_3       DP2_DP2_3
#define DIO_P2_4       DP2_DP2_4
#define DIO_P2_5       DP2_DP2_5
#define DIO_P2_6       DP2_DP2_6
#define DIO_P2_7       DP2_DP2_7
#define DIO_P2_8       DP2_DP2_8
#define DIO_P2_9       DP2_DP2_9
#define DIO_P2_10       DP2_DP2_10
#define DIO_P2_11       DP2_DP2_11
#define DIO_P2_12       DP2_DP2_12
#define DIO_P2_13       DP2_DP2_13
#define DIO_P2_14       DP2_DP2_14
#define DIO_P2_15       DP2_DP2_15

#define INIO_P3_0       P3_P3_0
#define INIO_P3_1       P3_P3_1
#define INIO_P3_2       P3_P3_2
#define INIO_P3_3       P3_P3_3
#define INIO_P3_4       P3_P3_4
#define INIO_P3_5       P3_P3_5
#define INIO_P3_6       P3_P3_6
#define INIO_P3_7       P3_P3_7
#define INIO_P3_8       P3_P3_8
#define INIO_P3_9       P3_P3_9
#define INIO_P3_10       P3_P3_10
#define INIO_P3_11       P3_P3_11
#define INIO_P3_12       P3_P3_12
#define INIO_P3_13       P3_P3_13
#define INIO_P3_15       P3_P3_15

#define DIO_P3_0       DP3_DP3_0
#define DIO_P3_1       DP3_DP3_1
#define DIO_P3_2       DP3_DP3_2
#define DIO_P3_3       DP3_DP3_3
#define DIO_P3_4       DP3_DP3_4
#define DIO_P3_5       DP3_DP3_5
#define DIO_P3_6       DP3_DP3_6
#define DIO_P3_7       DP3_DP3_7
#define DIO_P3_8       DP3_DP3_8
#define DIO_P3_9       DP3_DP3_9
#define DIO_P3_10       DP3_DP3_10
#define DIO_P3_11       DP3_DP3_11
#define DIO_P3_12       DP3_DP3_12
#define DIO_P3_13       DP3_DP3_13
#define DIO_P3_15       DP3_DP3_15

#define INIO_P4_0       P4_P4_0
#define INIO_P4_1       P4_P4_1
#define INIO_P4_2       P4_P4_2
#define INIO_P4_3       P4_P4_3
#define INIO_P4_4       P4_P4_4
#define INIO_P4_5       P4_P4_5
#define INIO_P4_6       P4_P4_6
#define INIO_P4_7       P4_P4_7

#define DIO_P4_0       DP4_DP4_0
#define DIO_P4_1       DP4_DP4_1
#define DIO_P4_2       DP4_DP4_2
#define DIO_P4_3       DP4_DP4_3
#define DIO_P4_4       DP4_DP4_4
#define DIO_P4_5       DP4_DP4_5
#define DIO_P4_6       DP4_DP4_6
#define DIO_P4_7       DP4_DP4_7

#define INIO_P5_0       P5_P5_0
#define INIO_P5_1       P5_P5_1
#define INIO_P5_2       P5_P5_2
#define INIO_P5_3       P5_P5_3
#define INIO_P5_4       P5_P5_4
#define INIO_P5_5       P5_P5_5
#define INIO_P5_6       P5_P5_6
#define INIO_P5_7       P5_P5_7
#define INIO_P5_8       P5_P5_8
#define INIO_P5_9       P5_P5_9
#define INIO_P5_10       P5_P5_10
#define INIO_P5_11       P5_P5_11
#define INIO_P5_12       P5_P5_12
#define INIO_P5_13       P5_P5_13
#define INIO_P5_14       P5_P5_14
#define INIO_P5_15       P5_P5_15


#define INIO_P6_0       P6_P6_0
#define INIO_P6_1       P6_P6_1
#define INIO_P6_2       P6_P6_2
#define INIO_P6_3       P6_P6_3
#define INIO_P6_4       P6_P6_4
#define INIO_P6_5       P6_P6_5
#define INIO_P6_6       P6_P6_6
#define INIO_P6_7       P6_P6_7

#define DIO_P6_0       DP6_DP6_0
#define DIO_P6_1       DP6_DP6_1
#define DIO_P6_2       DP6_DP6_2
#define DIO_P6_3       DP6_DP6_3
#define DIO_P6_4       DP6_DP6_4
#define DIO_P6_5       DP6_DP6_5
#define DIO_P6_6       DP6_DP6_6
#define DIO_P6_7       DP6_DP6_7

#define INIO_P7_0       P7_P7_0
#define INIO_P7_1       P7_P7_1
#define INIO_P7_2       P7_P7_2
#define INIO_P7_3       P7_P7_3
#define INIO_P7_4       P7_P7_4
#define INIO_P7_5       P7_P7_5
#define INIO_P7_6       P7_P7_6
#define INIO_P7_7       P7_P7_7

#define DIO_P7_0       DP7_DP7_0
#define DIO_P7_1       DP7_DP7_1
#define DIO_P7_2       DP7_DP7_2
#define DIO_P7_3       DP7_DP7_3
#define DIO_P7_4       DP7_DP7_4
#define DIO_P7_5       DP7_DP7_5
#define DIO_P7_6       DP7_DP7_6
#define DIO_P7_7       DP7_DP7_7

#define INIO_P8_0       P8_P8_0
#define INIO_P8_1       P8_P8_1
#define INIO_P8_2       P8_P8_2
#define INIO_P8_3       P8_P8_3
#define INIO_P8_4       P8_P8_4
#define INIO_P8_5       P8_P8_5
#define INIO_P8_6       P8_P8_6
#define INIO_P8_7       P8_P8_7

#define DIO_P8_0       DP8_DP8_0
#define DIO_P8_1       DP8_DP8_1
#define DIO_P8_2       DP8_DP8_2
#define DIO_P8_3       DP8_DP8_3
#define DIO_P8_4       DP8_DP8_4
#define DIO_P8_5       DP8_DP8_5
#define DIO_P8_6       DP8_DP8_6
#define DIO_P8_7       DP8_DP8_7

// USER CODE BEGIN (IO_Header,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void IO_vInit(void);


// USER CODE BEGIN (IO_Header,8)

// USER CODE END


//****************************************************************************
// @Macro         IO_vSetPin(PinName) 
//
//----------------------------------------------------------------------------
// @Description   This macro sets the chosen portpin to '1'.
//                Note:
//                See the 'Defines for the parameter PinName' section in this 
//                header file for the available definitions for the parameter 
//                PinName.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    PinName: 
//                Pin to be set to '1'
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

#define IO_vSetPin(PinName) PinName = 1


//****************************************************************************
// @Macro         IO_vResetPin(PinName) 
//
//----------------------------------------------------------------------------
// @Description   This macro sets the chosen portpin to '0'. 
//                Note: 
//                See the 'Defines for the parameter PinName' section in this 
//                header file for the available definitions for the parameter 
//                PinName.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    PinName: 
//                Pin to be set to '0'
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

#define IO_vResetPin(PinName) PinName = 0


//****************************************************************************
// @Macro         IO_uwReadPort(PortName) 
//
//----------------------------------------------------------------------------
// @Description   This macro returns the value of the selected port. If a 
//                port has less than 16 pins, the unused bits are set to 0 in 
//                the return value
//                The following definitions for PortName are available:
//                P0H, P0L, P1H, P1L, P2, P3, P4, P5, P6, P7, P8, 
//
//----------------------------------------------------------------------------
// @Returnvalue   Value of the port
//
//----------------------------------------------------------------------------
// @Parameters    PortName: 
//                Port to be read
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

#define IO_uwReadPort(PortName) PortName


//****************************************************************************
// @Macro         IO_vWritePort(PortName, uwData) 
//
//----------------------------------------------------------------------------
// @Description   The forwarded data is written to the selected port. If a 
//                port has less than 16 pins, the bits not used are ignored 
//                in the parameter value.
//                The following definitions for PortName are available:
//                P0H, P0L, P1H, P1L, P2, P3, P4, P5, P6, P7, P8, 
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    PortName: 
//                Port to be altered
// @Parameters    uwData: 
//                Value to be written to the chosen port
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

#define IO_vWritePort(PortName, uwData) PortName = uwData


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

// USER CODE BEGIN (IO_Header,9)

// USER CODE END


#endif  // ifndef _IO_H_
