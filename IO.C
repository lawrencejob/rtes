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
// @Description   This file contains functions that use the IO module.
//
//----------------------------------------------------------------------------
// @Date          30/12/2014 13:29:10
//
//****************************************************************************

// USER CODE BEGIN (IO_General,1)

// USER CODE END














//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (IO_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (IO_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (IO_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (IO_General,9)

// USER CODE END


//****************************************************************************
// @Function      void IO_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the IO function 
//                library. It is assumed that the SFRs used by this library 
//                are in its reset state. 
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (IO_Function,1)

// USER CODE END

void IO_vInit(void)
{
  // USER CODE BEGIN (IO_Function,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Temperature Compensation:
  ///  -----------------------------------------------------------------------
  ///  port logic is controlled by the temperature compensation sensor

  PTCR           =  0x0000;      // load port temperature control register

  ///  -----------------------------------------------------------------------
  ///  General Port Settings:
  ///  -----------------------------------------------------------------------
  PICON          =  0x0000;      // load input configuration register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P0H:
  ///  -----------------------------------------------------------------------
  ///  P0H.0 is used as alternate output for the Port Pin (AD8)
  ///  P0H.1 is used as alternate output for the Port Pin (AD9)
  ///  P0H.2 is used as alternate output for the Port Pin (AD10)
  ///  P0H.3 is used as alternate output for the Port Pin (AD11)
  ///  P0H.4 is used as alternate output for the Port Pin (AD12)
  ///  P0H.5 is used as alternate output for the Port Pin (AD13)
  ///  P0H.6 is used as alternate output for the Port Pin (AD14)
  ///  P0H.7 is used as alternate output for the Port Pin (AD15)

  ///  P0H.0 - P0H.3 output driver characteristic: high current mode
  ///  P0H.4 - P0H.7 output driver characteristic: high current mode
  ///  P0H.8 - P0H.11 output driver characteristic: high current mode
  ///  P0H.12 - P0H.15 output driver characteristic: high current mode

  ///  P0H.0 - P0H.3 output edge characteristic: normal timing
  ///  P0H.4 - P0H.7 output edge characteristic: normal timing
  ///  P0H.8 - P0H.11 output edge characteristic: normal timing
  ///  P0H.12 - P0H.15 output edge characteristic: normal timing

  P0H            =  0x0000;      // load data register
  POCON0H        =  0x0000;      // load output control register
  DP0H           =  0x0000;      // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P0L:
  ///  -----------------------------------------------------------------------
  ///  P0L.0 is used as alternate output for the Port Pin (AD0)
  ///  P0L.1 is used as alternate output for the Port Pin (AD1)
  ///  P0L.2 is used as alternate output for the Port Pin (AD2)
  ///  P0L.3 is used as alternate output for the Port Pin (AD3)
  ///  P0L.4 is used as alternate output for the Port Pin (AD4)
  ///  P0L.5 is used as alternate output for the Port Pin (AD5)
  ///  P0L.6 is used as alternate output for the Port Pin (AD6)
  ///  P0L.7 is used as alternate output for the Port Pin (AD7)

  ///  P0L.0 - P0L.3 output driver characteristic: high current mode
  ///  P0L.4 - P0L.7 output driver characteristic: high current mode
  ///  P0L.8 - P0L.11 output driver characteristic: high current mode
  ///  P0L.12 - P0L.15 output driver characteristic: high current mode

  ///  P0L.0 - P0L.3 output edge characteristic: normal timing
  ///  P0L.4 - P0L.7 output edge characteristic: normal timing
  ///  P0L.8 - P0L.11 output edge characteristic: normal timing
  ///  P0L.12 - P0L.15 output edge characteristic: normal timing

  P0L            =  0x0000;      // load data register
  POCON0L        =  0x0000;      // load output control register
  DP0L           =  0x0000;      // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P1H:
  ///  -----------------------------------------------------------------------
  ///  P1H.0 is used as alternate output for the Port Pin (A8)
  ///  P1H.1 is used as alternate output for the Port Pin (A9)
  ///  P1H.2 is used as alternate output for the Port Pin (A10)
  ///  P1H.3 is used as alternate output for the Port Pin (A11)
  ///  P1H.4 is used as alternate output for the Port Pin (A12)
  ///  P1H.5 is used as alternate output for the Port Pin (A13)
  ///  P1H.6 is used as alternate output for the Port Pin (A14)
  ///  P1H.7 is used as alternate output for the Port Pin (A15)

  ///  P1H.0 - P1H.3 output driver characteristic: high current mode
  ///  P1H.4 - P1H.7 output driver characteristic: high current mode
  ///  P1H.8 - P1H.11 output driver characteristic: high current mode
  ///  P1H.12 - P1H.15 output driver characteristic: high current mode

  ///  P1H.0 - P1H.3 output edge characteristic: normal timing
  ///  P1H.4 - P1H.7 output edge characteristic: normal timing
  ///  P1H.8 - P1H.11 output edge characteristic: normal timing
  ///  P1H.12 - P1H.15 output edge characteristic: normal timing

  P1H            =  0x0000;      // load data register
  POCON1H        =  0x0000;      // load output control register
  DP1H           =  0x0000;      // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P1L:
  ///  -----------------------------------------------------------------------
  ///  P1L.0 is used as alternate output for the Port Pin (A0)
  ///  P1L.1 is used as alternate output for the Port Pin (A1)
  ///  P1L.2 is used as alternate output for the Port Pin (A2)
  ///  P1L.3 is used as alternate output for the Port Pin (A3)
  ///  P1L.4 is used as alternate output for the Port Pin (A4)
  ///  P1L.5 is used as alternate output for the Port Pin (A5)
  ///  P1L.6 is used as alternate output for the Port Pin (A6)
  ///  P1L.7 is used as alternate output for the Port Pin (A7)

  ///  P1L.0 - P1L.3 output driver characteristic: high current mode
  ///  P1L.4 - P1L.7 output driver characteristic: high current mode
  ///  P1L.8 - P1L.11 output driver characteristic: high current mode
  ///  P1L.12 - P1L.15 output driver characteristic: high current mode

  ///  P1L.0 - P1L.3 output edge characteristic: normal timing
  ///  P1L.4 - P1L.7 output edge characteristic: normal timing
  ///  P1L.8 - P1L.11 output edge characteristic: normal timing
  ///  P1L.12 - P1L.15 output edge characteristic: normal timing

  P1L            =  0x0000;      // load data register
  POCON1L        =  0x0000;      // load output control register
  DP1L           =  0x0000;      // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P2:
  ///  -----------------------------------------------------------------------
  ///  P2.0 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.1 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.2 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.3 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.4 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.5 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.6 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.7 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.8 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.9 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.10 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.11 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.12 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.13 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.14 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level
  ///  P2.15 is used as general purpose output
  ///  - open drain output is selected
  ///  - the pin status is low level

  ///  P2.0 - P2.7 threshold type: TTL input
  ///  P2.8 - P2.15 threshold type: TTL input

  ///  P2.0 - P2.3 output driver characteristic: high current mode
  ///  P2.4 - P2.7 output driver characteristic: high current mode
  ///  P2.8 - P2.11 output driver characteristic: high current mode
  ///  P2.12 - P2.15 output driver characteristic: high current mode

  ///  P2.0 - P2.3 output edge characteristic: normal timing
  ///  P2.4 - P2.7 output edge characteristic: normal timing
  ///  P2.8 - P2.11 output edge characteristic: normal timing
  ///  P2.12 - P2.15 output edge characteristic: normal timing

  ODP2           =  0xFFFF;      // load open-drain register
  P2             =  0x0000;      // load data register
  POCON2         =  0x0000;      // load output control register
  DP2            =  0xFFFF;      // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P3:
  ///  -----------------------------------------------------------------------
  ///  P3.10 is used as alternate output for the ASC Transmit Data Output 
  ///  (TxD0)
  ///  - push/pull output is selected
  ///  P3.11 is used as alternate input for the ASC Receive data Input (RxD0)
  ///  P3.12 is used as alternate input for the Byte High Enable Output 
  ///  (BHE_n)

  ///  P3.0 - P3.7 threshold type: TTL input
  ///  P3.8 - P3.15 threshold type: TTL input

  ///  P3.0 - P3.3 output driver characteristic: high current mode
  ///  P3.4 - P3.7 output driver characteristic: high current mode
  ///  P3.8 - P3.11 output driver characteristic: high current mode
  ///  P3.12 - P3.15 output driver characteristic: high current mode

  ///  P3.0 - P3.3 output edge characteristic: normal timing
  ///  P3.4 - P3.7 output edge characteristic: normal timing
  ///  P3.8 - P3.11 output edge characteristic: normal timing
  ///  P3.12 - P3.15 output edge characteristic: normal timing

  ODP3           =  0x0000;      // load open-drain register
  P3             =  0x0000;      // load data register
  POCON3         =  0x0000;      // load output control register
  DP3            =  0x0000;      // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P4:
  ///  -----------------------------------------------------------------------
  ///  P4.0 is used as alternate input for the Port Pin (A16)
  ///  P4.1 is used as alternate input for the Port Pin (A17)
  ///  P4.5 is used as alternate input for the CAN1 Interface Input (CAN1_RxD)
  ///  P4.6 is used as alternate output for the CAN1 Interface Output 
  ///  (CAN1_TxD)
  ///  - push/pull output is selected

  ///  P4.0 - P4.3 output driver characteristic: high current mode
  ///  P4.4 - P4.7 output driver characteristic: high current mode
  ///  P4.8 - P4.11 output driver characteristic: high current mode
  ///  P4.12 - P4.15 output driver characteristic: high current mode

  ///  P4.0 - P4.3 output edge characteristic: normal timing
  ///  P4.4 - P4.7 output edge characteristic: normal timing
  ///  P4.8 - P4.11 output edge characteristic: normal timing
  ///  P4.12 - P4.15 output edge characteristic: normal timing

  ODP4           =  0x0000;      // load open-drain register
  P4             =  0x0000;      // load data register
  POCON4         =  0x0000;      // load output control register
  DP4            =  0x0000;      // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P5:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P5 is used

  P5             =  0x0000;      // load data register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P6:
  ///  -----------------------------------------------------------------------
  ///  P6.0 is used as alternate input for the Chip select (CS0_n)
  ///  P6.1 is used as alternate input for the Chip select (CS1_n)
  ///  P6.2 is used as alternate input for the Chip select (CS2_n)
  ///  P6.3 is used as alternate input for the Chip select (CS3_n)
  ///  P6.4 is used as alternate input for the Chip select (CS4_n)

  ///  P6.0 - P6.7 threshold type: TTL input

  ///  P6.0 - P6.3 output driver characteristic: high current mode
  ///  P6.4 - P6.7 output driver characteristic: high current mode
  ///  P6.8 - P6.11 output driver characteristic: high current mode
  ///  P6.12 - P6.15 output driver characteristic: high current mode

  ///  P6.0 - P6.3 output edge characteristic: normal timing
  ///  P6.4 - P6.7 output edge characteristic: normal timing
  ///  P6.8 - P6.11 output edge characteristic: normal timing
  ///  P6.12 - P6.15 output edge characteristic: normal timing

  ODP6           =  0x0000;      // load open-drain register
  P6             =  0x0000;      // load data register
  POCON6         =  0x0000;      // load output control register
  DP6            =  0x0000;      // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P7:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P7 is used

  ODP7           =  0x0000;      // load open-drain register
  P7             =  0x0000;      // load data register
  POCON7         =  0x0000;      // load output control register
  DP7            =  0x0000;      // load direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P8:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P8 is used

  ODP8           =  0x0000;      // load open-drain register
  P8             =  0x0000;      // load data register
  POCON8         =  0x0000;      // load output control register
  DP8            =  0x0000;      // load direction register


  // USER CODE BEGIN (IO_Function,3)

  // USER CODE END

} //  End of function IO_vInit




// USER CODE BEGIN (IO_General,10)

// USER CODE END

