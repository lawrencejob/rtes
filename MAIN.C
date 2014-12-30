//****************************************************************************
// @Module        Project Settings
// @Filename      MAIN.C
// @Project       project.dav
//----------------------------------------------------------------------------
// @Controller    Infineon C167CS-L
//
// @Compiler      Keil
//
// @Codegenerator 2.2
//
// @Description   This file contains the project initialization function.
//
//----------------------------------------------------------------------------
// @Date          30/12/2014 13:29:10
//
//****************************************************************************

// USER CODE BEGIN (MAIN_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (MAIN_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (MAIN_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (MAIN_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (MAIN_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (MAIN_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (MAIN_General,9)

// USER CODE END


//****************************************************************************
// @Function      void MAIN_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This function initializes the microcontroller.
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

// USER CODE BEGIN (Init,1)

// USER CODE END

void MAIN_vInit(void)
{
  // USER CODE BEGIN (Init,2)

  // USER CODE END

  //// -----------------------------------------------------------------------
  //// Begin of Important Settings for the Start-Up File
  //// -----------------------------------------------------------------------
  ///  All following settings must be set in the start-up file. You can use 
  ///  DAvE's project file (*.dpt) to include this register values into your 
  ///  compiler EDE.

    ///  ---------------------------------------------------------------------
    ///  Initialization of the XPERCON Register:
    ///  ---------------------------------------------------------------------

    //// this register must be set in the start-up file
    //// XPERCON  =  0x0401

    ///  ---------------------------------------------------------------------
    ///  Initialization of the XADRS5 Register:
    ///  ---------------------------------------------------------------------

    //// this register must be set in the start-up file
    //// XADRS5  =  0x0080

    ///  ---------------------------------------------------------------------
    ///  Initialization of the SYSCON Register:
    ///  ---------------------------------------------------------------------
    ///  - 256 words system stack
    ///  - Internal ROM area mapped to segment 1
    ///  - the segmentation is enabled (CSP is saved/restored during 
    ///  interrupt entry/exit)
    ///  - Internal ROM disabled
    ///  - the pin #BHE is disabled
    ///  - system clock output CLKOUT is disabled
    ///  - latched #CS mode
    ///  - pin #RSTIN is an input only
    ///  - the on-chip X-Peripherals are enabled and can be accessed
    ///  - accesses to the XBUS peripherals are done internally
    ///  - external accesses to XBUS peripherals are disabled

    //// this register must be set in the start-up file
    //// SYSCON  =  0x1214

    ///  ---------------------------------------------------------------------
    ///  Initialization of the SYSCON1 Register:
    ///  ---------------------------------------------------------------------

    //// this register must be set in the start-up file
    //// SYSCON1  =  0x0000

    ///  ---------------------------------------------------------------------
    ///  Initialization of the SYSCON2 Register:
    ///  ---------------------------------------------------------------------

    //// this register must be set in the start-up file
    //// SYSCON2  =  0x0000

    ///  ---------------------------------------------------------------------
    ///  Initialization of the SYSCON3 Register:
    ///  ---------------------------------------------------------------------

    //// this register must be set in the start-up file
    //// SYSCON3  =  0x4000

    ///  ---------------------------------------------------------------------
    ///  --- initialization of the BUSCON 0-4 and ADRRSEL Registers 1-4 ---
    ///  ---------------------------------------------------------------------


    ///  ---------------------------------------------------------------------
    ///  ---------- external bus 0 is enabled ----------
    ///  ---------------------------------------------------------------------
    ///  - 16-bit Demultiplexed Bus
    ///  - signal configuration: disable READY signal
    ///  - memory cycle time control: 15 waitstates
    ///  - With read/write delay: activate command 1 TCL after falling edge 
    ///  of ALE
    ///  - chip select mode: address chip select
    ///  - memory tristate control: 1 waitstate
    ///  - ALE lengthening control: lengthened ALE signal
    ///  - Address windows are switched immediately
    ///  - Normal #WR signal

    //// this register must be set in the start-up file
    //// BUSCON0  =  0x0680




  //// -----------------------------------------------------------------------
  //// End of Important Settings for the Start-Up File
  //// -----------------------------------------------------------------------


  ///  external bus arbitration is disabled, P6.7...P6.5 may be used for 
  ///  general purpose I/O


  //   -----------------------------------------------------------------------
  //   Initialization of the Peripherals:
  //   -----------------------------------------------------------------------

  //   initializes the Parallel Ports
  IO_vInit();

  //   initializes the Asynchronous/Synchronous Serial Interface (ASC0)
  ASC0_vInit();

  //   initializes the General Purpose Timer Unit (GPT1)
  GPT1_vInit();

  //   initializes the On-Chip CAN Interface 1 (CAN1)
  CAN1_vInit();

  // USER CODE BEGIN (Init,3)

  // USER CODE END

  //   globally enable interrupts
  PSW_IEN        =  1;          

} //  End of function MAIN_vInit


//****************************************************************************
// @Function      void main(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the main function.
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

// USER CODE BEGIN (Main,1)

// USER CODE END

void main(void)
{
  // USER CODE BEGIN (Main,2)

  // USER CODE END

  MAIN_vInit();

  // USER CODE BEGIN (Main,4)

  // USER CODE END

} //  End of function main



// USER CODE BEGIN (MAIN_General,10)

// USER CODE END

