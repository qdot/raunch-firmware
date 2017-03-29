;==========================================================================
;  PIC24FJ64GB004 Standard Assembly Include File
; 
;  (c) Copyright 2011 Microchip Technology, All rights reserved
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC24FJ64GB004 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p24FJ64GB004
;       2. Placing a ".equ" directive before the ".include":
;               .equ __24FJ64GB004, 1
;               .include "p24FJ64GB004.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __24FJ64GB004
   .ERROR "Include file does not match processor setting."
.ENDIF


;==========================================================================
;
;       Register Definitions
;
;==========================================================================

;----- Register Equates (Low Byte, High Byte) -----------------------------

        .extern WREG0
        .equiv  WREG0L, _WREG0
        .equiv  WREG0H, _WREG0+1

        .extern WREG1
        .equiv  WREG1L, _WREG1
        .equiv  WREG1H, _WREG1+1

        .extern WREG2
        .equiv  WREG2L, _WREG2
        .equiv  WREG2H, _WREG2+1

        .extern WREG3
        .equiv  WREG3L, _WREG3
        .equiv  WREG3H, _WREG3+1

        .extern WREG4
        .equiv  WREG4L, _WREG4
        .equiv  WREG4H, _WREG4+1

        .extern WREG5
        .equiv  WREG5L, _WREG5
        .equiv  WREG5H, _WREG5+1

        .extern WREG6
        .equiv  WREG6L, _WREG6
        .equiv  WREG6H, _WREG6+1

        .extern WREG7
        .equiv  WREG7L, _WREG7
        .equiv  WREG7H, _WREG7+1

        .extern WREG8
        .equiv  WREG8L, _WREG8
        .equiv  WREG8H, _WREG8+1

        .extern WREG9
        .equiv  WREG9L, _WREG9
        .equiv  WREG9H, _WREG9+1

        .extern WREG10
        .equiv  WREG10L, _WREG10
        .equiv  WREG10H, _WREG10+1

        .extern WREG11
        .equiv  WREG11L, _WREG11
        .equiv  WREG11H, _WREG11+1

        .extern WREG12
        .equiv  WREG12L, _WREG12
        .equiv  WREG12H, _WREG12+1

        .extern WREG13
        .equiv  WREG13L, _WREG13
        .equiv  WREG13H, _WREG13+1

        .extern WREG14
        .equiv  WREG14L, _WREG14
        .equiv  WREG14H, _WREG14+1

        .extern WREG15
        .equiv  WREG15L, _WREG15
        .equiv  WREG15H, _WREG15+1

        .extern SPLIM
        .equiv  SPLIML, _SPLIM
        .equiv  SPLIMH, _SPLIM+1

        .extern PCL
        .equiv  PCLL, _PCL
        .equiv  PCLH, _PCL+1

        .extern PCH
        .equiv  PCHL, _PCH
        .equiv  PCHH, _PCH+1

        .extern TBLPAG
        .equiv  TBLPAGL, _TBLPAG
        .equiv  TBLPAGH, _TBLPAG+1

        .extern PSVPAG
        .equiv  PSVPAGL, _PSVPAG
        .equiv  PSVPAGH, _PSVPAG+1

        .extern RCOUNT
        .equiv  RCOUNTL, _RCOUNT
        .equiv  RCOUNTH, _RCOUNT+1

        .extern SR
        .equiv  SRL, _SR
        .equiv  SRH, _SR+1

        .extern CORCON
        .equiv  CORCONL, _CORCON
        .equiv  CORCONH, _CORCON+1

        .extern DISICNT
        .equiv  DISICNTL, _DISICNT
        .equiv  DISICNTH, _DISICNT+1

        .extern CNEN1
        .equiv  CNEN1L, _CNEN1
        .equiv  CNEN1H, _CNEN1+1

        .extern CNEN2
        .equiv  CNEN2L, _CNEN2
        .equiv  CNEN2H, _CNEN2+1

        .extern CNPU1
        .equiv  CNPU1L, _CNPU1
        .equiv  CNPU1H, _CNPU1+1

        .extern CNPU2
        .equiv  CNPU2L, _CNPU2
        .equiv  CNPU2H, _CNPU2+1

        .extern INTCON1
        .equiv  INTCON1L, _INTCON1
        .equiv  INTCON1H, _INTCON1+1

        .extern INTCON2
        .equiv  INTCON2L, _INTCON2
        .equiv  INTCON2H, _INTCON2+1

        .extern IFS0
        .equiv  IFS0L, _IFS0
        .equiv  IFS0H, _IFS0+1

        .extern IFS1
        .equiv  IFS1L, _IFS1
        .equiv  IFS1H, _IFS1+1

        .extern IFS2
        .equiv  IFS2L, _IFS2
        .equiv  IFS2H, _IFS2+1

        .extern IFS3
        .equiv  IFS3L, _IFS3
        .equiv  IFS3H, _IFS3+1

        .extern IFS4
        .equiv  IFS4L, _IFS4
        .equiv  IFS4H, _IFS4+1

        .extern IFS5
        .equiv  IFS5L, _IFS5
        .equiv  IFS5H, _IFS5+1

        .extern IEC0
        .equiv  IEC0L, _IEC0
        .equiv  IEC0H, _IEC0+1

        .extern IEC1
        .equiv  IEC1L, _IEC1
        .equiv  IEC1H, _IEC1+1

        .extern IEC2
        .equiv  IEC2L, _IEC2
        .equiv  IEC2H, _IEC2+1

        .extern IEC3
        .equiv  IEC3L, _IEC3
        .equiv  IEC3H, _IEC3+1

        .extern IEC4
        .equiv  IEC4L, _IEC4
        .equiv  IEC4H, _IEC4+1

        .extern IEC5
        .equiv  IEC5L, _IEC5
        .equiv  IEC5H, _IEC5+1

        .extern IPC0
        .equiv  IPC0L, _IPC0
        .equiv  IPC0H, _IPC0+1

        .extern IPC1
        .equiv  IPC1L, _IPC1
        .equiv  IPC1H, _IPC1+1

        .extern IPC2
        .equiv  IPC2L, _IPC2
        .equiv  IPC2H, _IPC2+1

        .extern IPC3
        .equiv  IPC3L, _IPC3
        .equiv  IPC3H, _IPC3+1

        .extern IPC4
        .equiv  IPC4L, _IPC4
        .equiv  IPC4H, _IPC4+1

        .extern IPC5
        .equiv  IPC5L, _IPC5
        .equiv  IPC5H, _IPC5+1

        .extern IPC6
        .equiv  IPC6L, _IPC6
        .equiv  IPC6H, _IPC6+1

        .extern IPC7
        .equiv  IPC7L, _IPC7
        .equiv  IPC7H, _IPC7+1

        .extern IPC8
        .equiv  IPC8L, _IPC8
        .equiv  IPC8H, _IPC8+1

        .extern IPC9
        .equiv  IPC9L, _IPC9
        .equiv  IPC9H, _IPC9+1

        .extern IPC10
        .equiv  IPC10L, _IPC10
        .equiv  IPC10H, _IPC10+1

        .extern IPC11
        .equiv  IPC11L, _IPC11
        .equiv  IPC11H, _IPC11+1

        .extern IPC12
        .equiv  IPC12L, _IPC12
        .equiv  IPC12H, _IPC12+1

        .extern IPC15
        .equiv  IPC15L, _IPC15
        .equiv  IPC15H, _IPC15+1

        .extern IPC16
        .equiv  IPC16L, _IPC16
        .equiv  IPC16H, _IPC16+1

        .extern IPC18
        .equiv  IPC18L, _IPC18
        .equiv  IPC18H, _IPC18+1

        .extern IPC19
        .equiv  IPC19L, _IPC19
        .equiv  IPC19H, _IPC19+1

        .extern IPC21
        .equiv  IPC21L, _IPC21
        .equiv  IPC21H, _IPC21+1

        .extern INTTREG
        .equiv  INTTREGL, _INTTREG
        .equiv  INTTREGH, _INTTREG+1

        .extern TMR1
        .equiv  TMR1L, _TMR1
        .equiv  TMR1H, _TMR1+1

        .extern PR1
        .equiv  PR1L, _PR1
        .equiv  PR1H, _PR1+1

        .extern T1CON
        .equiv  T1CONL, _T1CON
        .equiv  T1CONH, _T1CON+1

        .extern TMR2
        .equiv  TMR2L, _TMR2
        .equiv  TMR2H, _TMR2+1

        .extern TMR3HLD
        .equiv  TMR3HLDL, _TMR3HLD
        .equiv  TMR3HLDH, _TMR3HLD+1

        .extern TMR3
        .equiv  TMR3L, _TMR3
        .equiv  TMR3H, _TMR3+1

        .extern PR2
        .equiv  PR2L, _PR2
        .equiv  PR2H, _PR2+1

        .extern PR3
        .equiv  PR3L, _PR3
        .equiv  PR3H, _PR3+1

        .extern T2CON
        .equiv  T2CONL, _T2CON
        .equiv  T2CONH, _T2CON+1

        .extern T3CON
        .equiv  T3CONL, _T3CON
        .equiv  T3CONH, _T3CON+1

        .extern TMR4
        .equiv  TMR4L, _TMR4
        .equiv  TMR4H, _TMR4+1

        .extern TMR5HLD
        .equiv  TMR5HLDL, _TMR5HLD
        .equiv  TMR5HLDH, _TMR5HLD+1

        .extern TMR5
        .equiv  TMR5L, _TMR5
        .equiv  TMR5H, _TMR5+1

        .extern PR4
        .equiv  PR4L, _PR4
        .equiv  PR4H, _PR4+1

        .extern PR5
        .equiv  PR5L, _PR5
        .equiv  PR5H, _PR5+1

        .extern T4CON
        .equiv  T4CONL, _T4CON
        .equiv  T4CONH, _T4CON+1

        .extern T5CON
        .equiv  T5CONL, _T5CON
        .equiv  T5CONH, _T5CON+1

        .extern IC1CON1
        .equiv  IC1CON1L, _IC1CON1
        .equiv  IC1CON1H, _IC1CON1+1

        .extern IC1CON2
        .equiv  IC1CON2L, _IC1CON2
        .equiv  IC1CON2H, _IC1CON2+1

        .extern IC1BUF
        .equiv  IC1BUFL, _IC1BUF
        .equiv  IC1BUFH, _IC1BUF+1

        .extern IC1TMR
        .equiv  IC1TMRL, _IC1TMR
        .equiv  IC1TMRH, _IC1TMR+1

        .extern IC2CON1
        .equiv  IC2CON1L, _IC2CON1
        .equiv  IC2CON1H, _IC2CON1+1

        .extern IC2CON2
        .equiv  IC2CON2L, _IC2CON2
        .equiv  IC2CON2H, _IC2CON2+1

        .extern IC2BUF
        .equiv  IC2BUFL, _IC2BUF
        .equiv  IC2BUFH, _IC2BUF+1

        .extern IC2TMR
        .equiv  IC2TMRL, _IC2TMR
        .equiv  IC2TMRH, _IC2TMR+1

        .extern IC3CON1
        .equiv  IC3CON1L, _IC3CON1
        .equiv  IC3CON1H, _IC3CON1+1

        .extern IC3CON2
        .equiv  IC3CON2L, _IC3CON2
        .equiv  IC3CON2H, _IC3CON2+1

        .extern IC3BUF
        .equiv  IC3BUFL, _IC3BUF
        .equiv  IC3BUFH, _IC3BUF+1

        .extern IC3TMR
        .equiv  IC3TMRL, _IC3TMR
        .equiv  IC3TMRH, _IC3TMR+1

        .extern IC4CON1
        .equiv  IC4CON1L, _IC4CON1
        .equiv  IC4CON1H, _IC4CON1+1

        .extern IC4CON2
        .equiv  IC4CON2L, _IC4CON2
        .equiv  IC4CON2H, _IC4CON2+1

        .extern IC4BUF
        .equiv  IC4BUFL, _IC4BUF
        .equiv  IC4BUFH, _IC4BUF+1

        .extern IC4TMR
        .equiv  IC4TMRL, _IC4TMR
        .equiv  IC4TMRH, _IC4TMR+1

        .extern IC5CON1
        .equiv  IC5CON1L, _IC5CON1
        .equiv  IC5CON1H, _IC5CON1+1

        .extern IC5CON2
        .equiv  IC5CON2L, _IC5CON2
        .equiv  IC5CON2H, _IC5CON2+1

        .extern IC5BUF
        .equiv  IC5BUFL, _IC5BUF
        .equiv  IC5BUFH, _IC5BUF+1

        .extern IC5TMR
        .equiv  IC5TMRL, _IC5TMR
        .equiv  IC5TMRH, _IC5TMR+1

        .extern OC1CON1
        .equiv  OC1CON1L, _OC1CON1
        .equiv  OC1CON1H, _OC1CON1+1

        .extern OC1CON2
        .equiv  OC1CON2L, _OC1CON2
        .equiv  OC1CON2H, _OC1CON2+1

        .extern OC1RS
        .equiv  OC1RSL, _OC1RS
        .equiv  OC1RSH, _OC1RS+1

        .extern OC1R
        .equiv  OC1RL, _OC1R
        .equiv  OC1RH, _OC1R+1

        .extern OC1TMR
        .equiv  OC1TMRL, _OC1TMR
        .equiv  OC1TMRH, _OC1TMR+1

        .extern OC2CON1
        .equiv  OC2CON1L, _OC2CON1
        .equiv  OC2CON1H, _OC2CON1+1

        .extern OC2CON2
        .equiv  OC2CON2L, _OC2CON2
        .equiv  OC2CON2H, _OC2CON2+1

        .extern OC2RS
        .equiv  OC2RSL, _OC2RS
        .equiv  OC2RSH, _OC2RS+1

        .extern OC2R
        .equiv  OC2RL, _OC2R
        .equiv  OC2RH, _OC2R+1

        .extern OC2TMR
        .equiv  OC2TMRL, _OC2TMR
        .equiv  OC2TMRH, _OC2TMR+1

        .extern OC3CON1
        .equiv  OC3CON1L, _OC3CON1
        .equiv  OC3CON1H, _OC3CON1+1

        .extern OC3CON2
        .equiv  OC3CON2L, _OC3CON2
        .equiv  OC3CON2H, _OC3CON2+1

        .extern OC3RS
        .equiv  OC3RSL, _OC3RS
        .equiv  OC3RSH, _OC3RS+1

        .extern OC3R
        .equiv  OC3RL, _OC3R
        .equiv  OC3RH, _OC3R+1

        .extern OC3TMR
        .equiv  OC3TMRL, _OC3TMR
        .equiv  OC3TMRH, _OC3TMR+1

        .extern OC4CON1
        .equiv  OC4CON1L, _OC4CON1
        .equiv  OC4CON1H, _OC4CON1+1

        .extern OC4CON2
        .equiv  OC4CON2L, _OC4CON2
        .equiv  OC4CON2H, _OC4CON2+1

        .extern OC4RS
        .equiv  OC4RSL, _OC4RS
        .equiv  OC4RSH, _OC4RS+1

        .extern OC4R
        .equiv  OC4RL, _OC4R
        .equiv  OC4RH, _OC4R+1

        .extern OC4TMR
        .equiv  OC4TMRL, _OC4TMR
        .equiv  OC4TMRH, _OC4TMR+1

        .extern OC5CON1
        .equiv  OC5CON1L, _OC5CON1
        .equiv  OC5CON1H, _OC5CON1+1

        .extern OC5CON2
        .equiv  OC5CON2L, _OC5CON2
        .equiv  OC5CON2H, _OC5CON2+1

        .extern OC5RS
        .equiv  OC5RSL, _OC5RS
        .equiv  OC5RSH, _OC5RS+1

        .extern OC5R
        .equiv  OC5RL, _OC5R
        .equiv  OC5RH, _OC5R+1

        .extern OC5TMR
        .equiv  OC5TMRL, _OC5TMR
        .equiv  OC5TMRH, _OC5TMR+1

        .extern I2C1RCV
        .equiv  I2C1RCVL, _I2C1RCV
        .equiv  I2C1RCVH, _I2C1RCV+1

        .extern I2C1TRN
        .equiv  I2C1TRNL, _I2C1TRN
        .equiv  I2C1TRNH, _I2C1TRN+1

        .extern I2C1BRG
        .equiv  I2C1BRGL, _I2C1BRG
        .equiv  I2C1BRGH, _I2C1BRG+1

        .extern I2C1CON
        .equiv  I2C1CONL, _I2C1CON
        .equiv  I2C1CONH, _I2C1CON+1

        .extern I2C1STAT
        .equiv  I2C1STATL, _I2C1STAT
        .equiv  I2C1STATH, _I2C1STAT+1

        .extern I2C1ADD
        .equiv  I2C1ADDL, _I2C1ADD
        .equiv  I2C1ADDH, _I2C1ADD+1

        .extern I2C1MSK
        .equiv  I2C1MSKL, _I2C1MSK
        .equiv  I2C1MSKH, _I2C1MSK+1

        .extern I2C2RCV
        .equiv  I2C2RCVL, _I2C2RCV
        .equiv  I2C2RCVH, _I2C2RCV+1

        .extern I2C2TRN
        .equiv  I2C2TRNL, _I2C2TRN
        .equiv  I2C2TRNH, _I2C2TRN+1

        .extern I2C2BRG
        .equiv  I2C2BRGL, _I2C2BRG
        .equiv  I2C2BRGH, _I2C2BRG+1

        .extern I2C2CON
        .equiv  I2C2CONL, _I2C2CON
        .equiv  I2C2CONH, _I2C2CON+1

        .extern I2C2STAT
        .equiv  I2C2STATL, _I2C2STAT
        .equiv  I2C2STATH, _I2C2STAT+1

        .extern I2C2ADD
        .equiv  I2C2ADDL, _I2C2ADD
        .equiv  I2C2ADDH, _I2C2ADD+1

        .extern I2C2MSK
        .equiv  I2C2MSKL, _I2C2MSK
        .equiv  I2C2MSKH, _I2C2MSK+1

        .extern U1MODE
        .equiv  U1MODEL, _U1MODE
        .equiv  U1MODEH, _U1MODE+1

        .extern U1STA
        .equiv  U1STAL, _U1STA
        .equiv  U1STAH, _U1STA+1

        .extern U1TXREG
        .equiv  U1TXREGL, _U1TXREG
        .equiv  U1TXREGH, _U1TXREG+1

        .extern U1RXREG
        .equiv  U1RXREGL, _U1RXREG
        .equiv  U1RXREGH, _U1RXREG+1

        .extern U1BRG
        .equiv  U1BRGL, _U1BRG
        .equiv  U1BRGH, _U1BRG+1

        .extern U2MODE
        .equiv  U2MODEL, _U2MODE
        .equiv  U2MODEH, _U2MODE+1

        .extern U2STA
        .equiv  U2STAL, _U2STA
        .equiv  U2STAH, _U2STA+1

        .extern U2TXREG
        .equiv  U2TXREGL, _U2TXREG
        .equiv  U2TXREGH, _U2TXREG+1

        .extern U2RXREG
        .equiv  U2RXREGL, _U2RXREG
        .equiv  U2RXREGH, _U2RXREG+1

        .extern U2BRG
        .equiv  U2BRGL, _U2BRG
        .equiv  U2BRGH, _U2BRG+1

        .extern SPI1STAT
        .equiv  SPI1STATL, _SPI1STAT
        .equiv  SPI1STATH, _SPI1STAT+1

        .extern SPI1CON1
        .equiv  SPI1CON1L, _SPI1CON1
        .equiv  SPI1CON1H, _SPI1CON1+1

        .extern SPI1CON2
        .equiv  SPI1CON2L, _SPI1CON2
        .equiv  SPI1CON2H, _SPI1CON2+1

        .extern SPI1BUF
        .equiv  SPI1BUFL, _SPI1BUF
        .equiv  SPI1BUFH, _SPI1BUF+1

        .extern SPI2STAT
        .equiv  SPI2STATL, _SPI2STAT
        .equiv  SPI2STATH, _SPI2STAT+1

        .extern SPI2CON1
        .equiv  SPI2CON1L, _SPI2CON1
        .equiv  SPI2CON1H, _SPI2CON1+1

        .extern SPI2CON2
        .equiv  SPI2CON2L, _SPI2CON2
        .equiv  SPI2CON2H, _SPI2CON2+1

        .extern SPI2BUF
        .equiv  SPI2BUFL, _SPI2BUF
        .equiv  SPI2BUFH, _SPI2BUF+1

        .extern TRISA
        .equiv  TRISAL, _TRISA
        .equiv  TRISAH, _TRISA+1

        .extern PORTA
        .equiv  PORTAL, _PORTA
        .equiv  PORTAH, _PORTA+1

        .extern LATA
        .equiv  LATAL, _LATA
        .equiv  LATAH, _LATA+1

        .extern ODCA
        .equiv  ODCAL, _ODCA
        .equiv  ODCAH, _ODCA+1

        .extern TRISB
        .equiv  TRISBL, _TRISB
        .equiv  TRISBH, _TRISB+1

        .extern PORTB
        .equiv  PORTBL, _PORTB
        .equiv  PORTBH, _PORTB+1

        .extern LATB
        .equiv  LATBL, _LATB
        .equiv  LATBH, _LATB+1

        .extern ODCB
        .equiv  ODCBL, _ODCB
        .equiv  ODCBH, _ODCB+1

        .extern TRISC
        .equiv  TRISCL, _TRISC
        .equiv  TRISCH, _TRISC+1

        .extern PORTC
        .equiv  PORTCL, _PORTC
        .equiv  PORTCH, _PORTC+1

        .extern LATC
        .equiv  LATCL, _LATC
        .equiv  LATCH, _LATC+1

        .extern ODCC
        .equiv  ODCCL, _ODCC
        .equiv  ODCCH, _ODCC+1

        .extern PADCFG1
        .equiv  PADCFG1L, _PADCFG1
        .equiv  PADCFG1H, _PADCFG1+1

        .extern ADC1BUF0
        .equiv  ADC1BUF0L, _ADC1BUF0
        .equiv  ADC1BUF0H, _ADC1BUF0+1

        .extern ADC1BUF1
        .equiv  ADC1BUF1L, _ADC1BUF1
        .equiv  ADC1BUF1H, _ADC1BUF1+1

        .extern ADC1BUF2
        .equiv  ADC1BUF2L, _ADC1BUF2
        .equiv  ADC1BUF2H, _ADC1BUF2+1

        .extern ADC1BUF3
        .equiv  ADC1BUF3L, _ADC1BUF3
        .equiv  ADC1BUF3H, _ADC1BUF3+1

        .extern ADC1BUF4
        .equiv  ADC1BUF4L, _ADC1BUF4
        .equiv  ADC1BUF4H, _ADC1BUF4+1

        .extern ADC1BUF5
        .equiv  ADC1BUF5L, _ADC1BUF5
        .equiv  ADC1BUF5H, _ADC1BUF5+1

        .extern ADC1BUF6
        .equiv  ADC1BUF6L, _ADC1BUF6
        .equiv  ADC1BUF6H, _ADC1BUF6+1

        .extern ADC1BUF7
        .equiv  ADC1BUF7L, _ADC1BUF7
        .equiv  ADC1BUF7H, _ADC1BUF7+1

        .extern ADC1BUF8
        .equiv  ADC1BUF8L, _ADC1BUF8
        .equiv  ADC1BUF8H, _ADC1BUF8+1

        .extern ADC1BUF9
        .equiv  ADC1BUF9L, _ADC1BUF9
        .equiv  ADC1BUF9H, _ADC1BUF9+1

        .extern ADC1BUFA
        .equiv  ADC1BUFAL, _ADC1BUFA
        .equiv  ADC1BUFAH, _ADC1BUFA+1

        .extern ADC1BUFB
        .equiv  ADC1BUFBL, _ADC1BUFB
        .equiv  ADC1BUFBH, _ADC1BUFB+1

        .extern ADC1BUFC
        .equiv  ADC1BUFCL, _ADC1BUFC
        .equiv  ADC1BUFCH, _ADC1BUFC+1

        .extern ADC1BUFD
        .equiv  ADC1BUFDL, _ADC1BUFD
        .equiv  ADC1BUFDH, _ADC1BUFD+1

        .extern ADC1BUFE
        .equiv  ADC1BUFEL, _ADC1BUFE
        .equiv  ADC1BUFEH, _ADC1BUFE+1

        .extern ADC1BUFF
        .equiv  ADC1BUFFL, _ADC1BUFF
        .equiv  ADC1BUFFH, _ADC1BUFF+1

        .extern AD1CON1
        .equiv  AD1CON1L, _AD1CON1
        .equiv  AD1CON1H, _AD1CON1+1

        .extern AD1CON2
        .equiv  AD1CON2L, _AD1CON2
        .equiv  AD1CON2H, _AD1CON2+1

        .extern AD1CON3
        .equiv  AD1CON3L, _AD1CON3
        .equiv  AD1CON3H, _AD1CON3+1

        .extern AD1CHS
        .equiv  AD1CHSL, _AD1CHS
        .equiv  AD1CHSH, _AD1CHS+1

        .extern AD1CHS0
        .equiv  AD1CHS0L, _AD1CHS0
        .equiv  AD1CHS0H, _AD1CHS0+1

        .extern AD1PCFG

        .extern AD1PCFGL
        .equiv  AD1PCFGLL, _AD1PCFGL
        .equiv  AD1PCFGLH, _AD1PCFGL+1

        .extern AD1CSSL
        .equiv  AD1CSSLL, _AD1CSSL
        .equiv  AD1CSSLH, _AD1CSSL+1

        .extern CTMUCON
        .equiv  CTMUCONL, _CTMUCON
        .equiv  CTMUCONH, _CTMUCON+1

        .extern CTMUICON
        .equiv  CTMUICONL, _CTMUICON
        .equiv  CTMUICONH, _CTMUICON+1

        .extern U1OTGIR
        .equiv  U1OTGIRL, _U1OTGIR
        .equiv  U1OTGIRH, _U1OTGIR+1

        .extern U1OTGIE
        .equiv  U1OTGIEL, _U1OTGIE
        .equiv  U1OTGIEH, _U1OTGIE+1

        .extern U1OTGSTAT
        .equiv  U1OTGSTATL, _U1OTGSTAT
        .equiv  U1OTGSTATH, _U1OTGSTAT+1

        .extern U1OTGCON
        .equiv  U1OTGCONL, _U1OTGCON
        .equiv  U1OTGCONH, _U1OTGCON+1

        .extern U1PWRC
        .equiv  U1PWRCL, _U1PWRC
        .equiv  U1PWRCH, _U1PWRC+1

        .extern U1IR
        .equiv  U1IRL, _U1IR
        .equiv  U1IRH, _U1IR+1

        .extern U1IE
        .equiv  U1IEL, _U1IE
        .equiv  U1IEH, _U1IE+1

        .extern U1EIR
        .equiv  U1EIRL, _U1EIR
        .equiv  U1EIRH, _U1EIR+1

        .extern U1EIE
        .equiv  U1EIEL, _U1EIE
        .equiv  U1EIEH, _U1EIE+1

        .extern U1STAT
        .equiv  U1STATL, _U1STAT
        .equiv  U1STATH, _U1STAT+1

        .extern U1CON
        .equiv  U1CONL, _U1CON
        .equiv  U1CONH, _U1CON+1

        .extern U1ADDR
        .equiv  U1ADDRL, _U1ADDR
        .equiv  U1ADDRH, _U1ADDR+1

        .extern U1BDTP1
        .equiv  U1BDTP1L, _U1BDTP1
        .equiv  U1BDTP1H, _U1BDTP1+1

        .extern U1FRML
        .equiv  U1FRMLL, _U1FRML
        .equiv  U1FRMLH, _U1FRML+1

        .extern U1FRMH
        .equiv  U1FRMHL, _U1FRMH
        .equiv  U1FRMHH, _U1FRMH+1

        .extern U1TOK
        .equiv  U1TOKL, _U1TOK
        .equiv  U1TOKH, _U1TOK+1

        .extern U1SOF
        .equiv  U1SOFL, _U1SOF
        .equiv  U1SOFH, _U1SOF+1

        .extern U1CNFG1
        .equiv  U1CNFG1L, _U1CNFG1
        .equiv  U1CNFG1H, _U1CNFG1+1

        .extern U1CNFG2
        .equiv  U1CNFG2L, _U1CNFG2
        .equiv  U1CNFG2H, _U1CNFG2+1

        .extern U1EP0
        .equiv  U1EP0L, _U1EP0
        .equiv  U1EP0H, _U1EP0+1

        .extern U1EP1
        .equiv  U1EP1L, _U1EP1
        .equiv  U1EP1H, _U1EP1+1

        .extern U1EP2
        .equiv  U1EP2L, _U1EP2
        .equiv  U1EP2H, _U1EP2+1

        .extern U1EP3
        .equiv  U1EP3L, _U1EP3
        .equiv  U1EP3H, _U1EP3+1

        .extern U1EP4
        .equiv  U1EP4L, _U1EP4
        .equiv  U1EP4H, _U1EP4+1

        .extern U1EP5
        .equiv  U1EP5L, _U1EP5
        .equiv  U1EP5H, _U1EP5+1

        .extern U1EP6
        .equiv  U1EP6L, _U1EP6
        .equiv  U1EP6H, _U1EP6+1

        .extern U1EP7
        .equiv  U1EP7L, _U1EP7
        .equiv  U1EP7H, _U1EP7+1

        .extern U1EP8
        .equiv  U1EP8L, _U1EP8
        .equiv  U1EP8H, _U1EP8+1

        .extern U1EP9
        .equiv  U1EP9L, _U1EP9
        .equiv  U1EP9H, _U1EP9+1

        .extern U1EP10
        .equiv  U1EP10L, _U1EP10
        .equiv  U1EP10H, _U1EP10+1

        .extern U1EP11
        .equiv  U1EP11L, _U1EP11
        .equiv  U1EP11H, _U1EP11+1

        .extern U1EP12
        .equiv  U1EP12L, _U1EP12
        .equiv  U1EP12H, _U1EP12+1

        .extern U1EP13
        .equiv  U1EP13L, _U1EP13
        .equiv  U1EP13H, _U1EP13+1

        .extern U1EP14
        .equiv  U1EP14L, _U1EP14
        .equiv  U1EP14H, _U1EP14+1

        .extern U1EP15
        .equiv  U1EP15L, _U1EP15
        .equiv  U1EP15H, _U1EP15+1

        .extern U1PWMRRS
        .equiv  U1PWMRRSL, _U1PWMRRS
        .equiv  U1PWMRRSH, _U1PWMRRS+1

        .extern U1PWMCON
        .equiv  U1PWMCONL, _U1PWMCON
        .equiv  U1PWMCONH, _U1PWMCON+1

        .extern PMCON
        .equiv  PMCONL, _PMCON
        .equiv  PMCONH, _PMCON+1

        .extern PMMODE
        .equiv  PMMODEL, _PMMODE
        .equiv  PMMODEH, _PMMODE+1

        .extern PMADDR
        .equiv  PMADDRL, _PMADDR
        .equiv  PMADDRH, _PMADDR+1

        .extern PMDOUT1
        .equiv  PMDOUT1L, _PMDOUT1
        .equiv  PMDOUT1H, _PMDOUT1+1

        .extern PMDOUT2
        .equiv  PMDOUT2L, _PMDOUT2
        .equiv  PMDOUT2H, _PMDOUT2+1

        .extern PMDIN1
        .equiv  PMDIN1L, _PMDIN1
        .equiv  PMDIN1H, _PMDIN1+1

        .extern PMDIN2
        .equiv  PMDIN2L, _PMDIN2
        .equiv  PMDIN2H, _PMDIN2+1

        .extern PMAEN
        .equiv  PMAENL, _PMAEN
        .equiv  PMAENH, _PMAEN+1

        .extern PMSTAT
        .equiv  PMSTATL, _PMSTAT
        .equiv  PMSTATH, _PMSTAT+1

        .extern ALRMVAL
        .equiv  ALRMVALL, _ALRMVAL
        .equiv  ALRMVALH, _ALRMVAL+1

        .extern ALCFGRPT
        .equiv  ALCFGRPTL, _ALCFGRPT
        .equiv  ALCFGRPTH, _ALCFGRPT+1

        .extern RTCVAL
        .equiv  RTCVALL, _RTCVAL
        .equiv  RTCVALH, _RTCVAL+1

        .extern RCFGCAL
        .equiv  RCFGCALL, _RCFGCAL
        .equiv  RCFGCALH, _RCFGCAL+1

        .extern CRCCON
        .equiv  CRCCONL, _CRCCON
        .equiv  CRCCONH, _CRCCON+1

        .extern CRCCON1
        .equiv  CRCCON1L, _CRCCON1
        .equiv  CRCCON1H, _CRCCON1+1

        .extern CRCCON2
        .equiv  CRCCON2L, _CRCCON2
        .equiv  CRCCON2H, _CRCCON2+1

        .extern CRCXOR

        .extern CRCXORL
        .equiv  CRCXORLL, _CRCXORL
        .equiv  CRCXORLH, _CRCXORL+1

        .extern CRCXORH
        .equiv  CRCXORHL, _CRCXORH
        .equiv  CRCXORHH, _CRCXORH+1

        .extern CRCDAT

        .extern CRCDAT32
        .equiv  CRCDAT32L, _CRCDAT32
        .equiv  CRCDAT32H, _CRCDAT32+1

        .extern CRCDAT8
        .equiv  CRCDAT8L, _CRCDAT8
        .equiv  CRCDAT8H, _CRCDAT8+1

        .extern CRCDATL
        .equiv  CRCDATLL, _CRCDATL
        .equiv  CRCDATLH, _CRCDATL+1

        .extern CRCDATH
        .equiv  CRCDATHL, _CRCDATH
        .equiv  CRCDATHH, _CRCDATH+1

        .extern CRCWDAT

        .extern CRCWDATL
        .equiv  CRCWDATLL, _CRCWDATL
        .equiv  CRCWDATLH, _CRCWDATL+1

        .extern CRCWDATH
        .equiv  CRCWDATHL, _CRCWDATH
        .equiv  CRCWDATHH, _CRCWDATH+1

        .extern CMSTAT
        .equiv  CMSTATL, _CMSTAT
        .equiv  CMSTATH, _CMSTAT+1

        .extern CVRCON
        .equiv  CVRCONL, _CVRCON
        .equiv  CVRCONH, _CVRCON+1

        .extern CM1CON
        .equiv  CM1CONL, _CM1CON
        .equiv  CM1CONH, _CM1CON+1

        .extern CM2CON
        .equiv  CM2CONL, _CM2CON
        .equiv  CM2CONH, _CM2CON+1

        .extern CM3CON
        .equiv  CM3CONL, _CM3CON
        .equiv  CM3CONH, _CM3CON+1

        .extern RPINR0
        .equiv  RPINR0L, _RPINR0
        .equiv  RPINR0H, _RPINR0+1

        .extern RPINR1
        .equiv  RPINR1L, _RPINR1
        .equiv  RPINR1H, _RPINR1+1

        .extern RPINR3
        .equiv  RPINR3L, _RPINR3
        .equiv  RPINR3H, _RPINR3+1

        .extern RPINR4
        .equiv  RPINR4L, _RPINR4
        .equiv  RPINR4H, _RPINR4+1

        .extern RPINR7
        .equiv  RPINR7L, _RPINR7
        .equiv  RPINR7H, _RPINR7+1

        .extern RPINR8
        .equiv  RPINR8L, _RPINR8
        .equiv  RPINR8H, _RPINR8+1

        .extern RPINR9
        .equiv  RPINR9L, _RPINR9
        .equiv  RPINR9H, _RPINR9+1

        .extern RPINR11
        .equiv  RPINR11L, _RPINR11
        .equiv  RPINR11H, _RPINR11+1

        .extern RPINR18
        .equiv  RPINR18L, _RPINR18
        .equiv  RPINR18H, _RPINR18+1

        .extern RPINR19
        .equiv  RPINR19L, _RPINR19
        .equiv  RPINR19H, _RPINR19+1

        .extern RPINR20
        .equiv  RPINR20L, _RPINR20
        .equiv  RPINR20H, _RPINR20+1

        .extern RPINR21
        .equiv  RPINR21L, _RPINR21
        .equiv  RPINR21H, _RPINR21+1

        .extern RPINR22
        .equiv  RPINR22L, _RPINR22
        .equiv  RPINR22H, _RPINR22+1

        .extern RPINR23
        .equiv  RPINR23L, _RPINR23
        .equiv  RPINR23H, _RPINR23+1

        .extern RPOR0
        .equiv  RPOR0L, _RPOR0
        .equiv  RPOR0H, _RPOR0+1

        .extern RPOR1
        .equiv  RPOR1L, _RPOR1
        .equiv  RPOR1H, _RPOR1+1

        .extern RPOR2
        .equiv  RPOR2L, _RPOR2
        .equiv  RPOR2H, _RPOR2+1

        .extern RPOR3
        .equiv  RPOR3L, _RPOR3
        .equiv  RPOR3H, _RPOR3+1

        .extern RPOR4
        .equiv  RPOR4L, _RPOR4
        .equiv  RPOR4H, _RPOR4+1

        .extern RPOR5
        .equiv  RPOR5L, _RPOR5
        .equiv  RPOR5H, _RPOR5+1

        .extern RPOR6
        .equiv  RPOR6L, _RPOR6
        .equiv  RPOR6H, _RPOR6+1

        .extern RPOR7
        .equiv  RPOR7L, _RPOR7
        .equiv  RPOR7H, _RPOR7+1

        .extern RPOR8
        .equiv  RPOR8L, _RPOR8
        .equiv  RPOR8H, _RPOR8+1

        .extern RPOR9
        .equiv  RPOR9L, _RPOR9
        .equiv  RPOR9H, _RPOR9+1

        .extern RPOR10
        .equiv  RPOR10L, _RPOR10
        .equiv  RPOR10H, _RPOR10+1

        .extern RPOR11
        .equiv  RPOR11L, _RPOR11
        .equiv  RPOR11H, _RPOR11+1

        .extern RPOR12
        .equiv  RPOR12L, _RPOR12
        .equiv  RPOR12H, _RPOR12+1

        .extern RCON
        .equiv  RCONL, _RCON
        .equiv  RCONH, _RCON+1

        .extern OSCCON

        .extern OSCCONL
        .equiv  OSCCONLL, _OSCCONL
        .equiv  OSCCONLH, _OSCCONL+1

        .extern OSCCONH
        .equiv  OSCCONHL, _OSCCONH
        .equiv  OSCCONHH, _OSCCONH+1

        .extern CLKDIV
        .equiv  CLKDIVL, _CLKDIV
        .equiv  CLKDIVH, _CLKDIV+1

        .extern OSCTUN
        .equiv  OSCTUNL, _OSCTUN
        .equiv  OSCTUNH, _OSCTUN+1

        .extern REFOCON
        .equiv  REFOCONL, _REFOCON
        .equiv  REFOCONH, _REFOCON+1

        .extern DSCON
        .equiv  DSCONL, _DSCON
        .equiv  DSCONH, _DSCON+1

        .extern DSWAKE
        .equiv  DSWAKEL, _DSWAKE
        .equiv  DSWAKEH, _DSWAKE+1

        .extern DSGPR0
        .equiv  DSGPR0L, _DSGPR0
        .equiv  DSGPR0H, _DSGPR0+1

        .extern DSGPR1
        .equiv  DSGPR1L, _DSGPR1
        .equiv  DSGPR1H, _DSGPR1+1

        .extern NVMCON
        .equiv  NVMCONL, _NVMCON
        .equiv  NVMCONH, _NVMCON+1

        .extern NVMKEY
        .equiv  NVMKEYL, _NVMKEY
        .equiv  NVMKEYH, _NVMKEY+1

        .extern PMD1
        .equiv  PMD1L, _PMD1
        .equiv  PMD1H, _PMD1+1

        .extern PMD2
        .equiv  PMD2L, _PMD2
        .equiv  PMD2H, _PMD2+1

        .extern PMD3
        .equiv  PMD3L, _PMD3
        .equiv  PMD3H, _PMD3+1

        .extern PMD4
        .equiv  PMD4L, _PMD4
        .equiv  PMD4H, _PMD4+1

;----- SR Bits -----------------------------------------------------
        .equiv C,       0x0000
        .equiv Z,       0x0001
        .equiv OV,      0x0002
        .equiv N,       0x0003
        .equiv RA,      0x0004
        .equiv DC,      0x0008

        .equiv IPL0,    0x0005
        .equiv IPL1,    0x0006
        .equiv IPL2,    0x0007


;----- CORCON Bits -----------------------------------------------------
        .equiv PSV,     0x0002
        .equiv IPL3,    0x0003


;----- CNEN1 Bits -----------------------------------------------------
        .equiv CN0IE,   0x0000
        .equiv CN1IE,   0x0001
        .equiv CN2IE,   0x0002
        .equiv CN3IE,   0x0003
        .equiv CN4IE,   0x0004
        .equiv CN5IE,   0x0005
        .equiv CN6IE,   0x0006
        .equiv CN7IE,   0x0007
        .equiv CN8IE,   0x0008
        .equiv CN9IE,   0x0009
        .equiv CN10IE,  0x000A
        .equiv CN11IE,  0x000B
        .equiv CN12IE,  0x000C
        .equiv CN13IE,  0x000D
        .equiv CN15IE,  0x000F


;----- CNEN2 Bits -----------------------------------------------------
        .equiv CN16IE,  0x0000
        .equiv CN17IE,  0x0001
        .equiv CN18IE,  0x0002
        .equiv CN19IE,  0x0003
        .equiv CN20IE,  0x0004
        .equiv CN21IE,  0x0005
        .equiv CN22IE,  0x0006
        .equiv CN23IE,  0x0007
        .equiv CN25IE,  0x0009
        .equiv CN26IE,  0x000A
        .equiv CN27IE,  0x000B
        .equiv CN28IE,  0x000C
        .equiv CN29IE,  0x000D
        .equiv CN30IE,  0x000E


;----- CNPU1 Bits -----------------------------------------------------
        .equiv CN0PUE,  0x0000
        .equiv CN1PUE,  0x0001
        .equiv CN2PUE,  0x0002
        .equiv CN3PUE,  0x0003
        .equiv CN4PUE,  0x0004
        .equiv CN5PUE,  0x0005
        .equiv CN6PUE,  0x0006
        .equiv CN7PUE,  0x0007
        .equiv CN8PUE,  0x0008
        .equiv CN9PUE,  0x0009
        .equiv CN10PUE, 0x000A
        .equiv CN11PUE, 0x000B
        .equiv CN12PUE, 0x000C
        .equiv CN13PUE, 0x000D
        .equiv CN15PUE, 0x000F


;----- CNPU2 Bits -----------------------------------------------------
        .equiv CN16PUE, 0x0000
        .equiv CN17PUE, 0x0001
        .equiv CN18PUE, 0x0002
        .equiv CN19PUE, 0x0003
        .equiv CN20PUE, 0x0004
        .equiv CN21PUE, 0x0005
        .equiv CN22PUE, 0x0006
        .equiv CN23PUE, 0x0007
        .equiv CN25PUE, 0x0009
        .equiv CN26PUE, 0x000A
        .equiv CN27PUE, 0x000B
        .equiv CN28PUE, 0x000C
        .equiv CN29PUE, 0x000D
        .equiv CN30PUE, 0x000E


;----- INTCON1 Bits -----------------------------------------------------
        .equiv OSCFAIL, 0x0001
        .equiv STKERR,  0x0002
        .equiv ADDRERR, 0x0003
        .equiv MATHERR, 0x0004
        .equiv NSTDIS,  0x000F


;----- INTCON2 Bits -----------------------------------------------------
        .equiv INT0EP,  0x0000
        .equiv INT1EP,  0x0001
        .equiv INT2EP,  0x0002
        .equiv DISI,    0x000E
        .equiv ALTIVT,  0x000F


;----- IFS0 Bits -----------------------------------------------------
        .equiv INT0IF,  0x0000
        .equiv IC1IF,   0x0001
        .equiv OC1IF,   0x0002
        .equiv T1IF,    0x0003
        .equiv IC2IF,   0x0005
        .equiv OC2IF,   0x0006
        .equiv T2IF,    0x0007
        .equiv T3IF,    0x0008
        .equiv SPF1IF,  0x0009
        .equiv SPI1IF,  0x000A
        .equiv U1RXIF,  0x000B
        .equiv U1TXIF,  0x000C
        .equiv AD1IF,   0x000D


;----- IFS1 Bits -----------------------------------------------------
        .equiv SI2C1IF, 0x0000
        .equiv MI2C1IF, 0x0001
        .equiv CMIF,    0x0002
        .equiv CNIF,    0x0003
        .equiv INT1IF,  0x0004
        .equiv OC3IF,   0x0009
        .equiv OC4IF,   0x000A
        .equiv T4IF,    0x000B
        .equiv T5IF,    0x000C
        .equiv INT2IF,  0x000D
        .equiv U2RXIF,  0x000E
        .equiv U2TXIF,  0x000F


;----- IFS2 Bits -----------------------------------------------------
        .equiv SPF2IF,  0x0000
        .equiv SPI2IF,  0x0001
        .equiv IC3IF,   0x0005
        .equiv IC4IF,   0x0006
        .equiv IC5IF,   0x0007
        .equiv OC5IF,   0x0009
        .equiv PMPIF,   0x000D


;----- IFS3 Bits -----------------------------------------------------
        .equiv SI2C2IF, 0x0001
        .equiv MI2C2IF, 0x0002
        .equiv RTCIF,   0x000E


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1ERIF,  0x0001
        .equiv U2ERIF,  0x0002
        .equiv CRCIF,   0x0003
        .equiv LVDIF,   0x0008
        .equiv CTMUIF,  0x000D


;----- IFS5 Bits -----------------------------------------------------
        .equiv USB1IF,  0x0006


;----- IEC0 Bits -----------------------------------------------------
        .equiv INT0IE,  0x0000
        .equiv IC1IE,   0x0001
        .equiv OC1IE,   0x0002
        .equiv T1IE,    0x0003
        .equiv IC2IE,   0x0005
        .equiv OC2IE,   0x0006
        .equiv T2IE,    0x0007
        .equiv T3IE,    0x0008
        .equiv SPF1IE,  0x0009
        .equiv SPI1IE,  0x000A
        .equiv U1RXIE,  0x000B
        .equiv U1TXIE,  0x000C
        .equiv AD1IE,   0x000D


;----- IEC1 Bits -----------------------------------------------------
        .equiv SI2C1IE, 0x0000
        .equiv MI2C1IE, 0x0001
        .equiv CMIE,    0x0002
        .equiv CNIE,    0x0003
        .equiv INT1IE,  0x0004
        .equiv OC3IE,   0x0009
        .equiv OC4IE,   0x000A
        .equiv T4IE,    0x000B
        .equiv T5IE,    0x000C
        .equiv INT2IE,  0x000D
        .equiv U2RXIE,  0x000E
        .equiv U2TXIE,  0x000F


;----- IEC2 Bits -----------------------------------------------------
        .equiv SPF2IE,  0x0000
        .equiv SPI2IE,  0x0001
        .equiv IC3IE,   0x0005
        .equiv IC4IE,   0x0006
        .equiv IC5IE,   0x0007
        .equiv OC5IE,   0x0009
        .equiv PMPIE,   0x000D


;----- IEC3 Bits -----------------------------------------------------
        .equiv SI2C2IE, 0x0001
        .equiv MI2C2IE, 0x0002
        .equiv RTCIE,   0x000E


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1ERIE,  0x0001
        .equiv U2ERIE,  0x0002
        .equiv CRCIE,   0x0003
        .equiv LVDIE,   0x0008
        .equiv CTMUIE,  0x000D


;----- IEC5 Bits -----------------------------------------------------
        .equiv USB1IE,  0x0006


;----- IPC0 Bits -----------------------------------------------------
        .equiv INT0IP0, 0x0000
        .equiv INT0IP1, 0x0001
        .equiv INT0IP2, 0x0002
        .equiv IC1IP0,  0x0004
        .equiv IC1IP1,  0x0005
        .equiv IC1IP2,  0x0006
        .equiv OC1IP0,  0x0008
        .equiv OC1IP1,  0x0009
        .equiv OC1IP2,  0x000A
        .equiv T1IP0,   0x000C
        .equiv T1IP1,   0x000D
        .equiv T1IP2,   0x000E


;----- IPC1 Bits -----------------------------------------------------
        .equiv IC2IP0,  0x0004
        .equiv IC2IP1,  0x0005
        .equiv IC2IP2,  0x0006
        .equiv OC2IP0,  0x0008
        .equiv OC2IP1,  0x0009
        .equiv OC2IP2,  0x000A
        .equiv T2IP0,   0x000C
        .equiv T2IP1,   0x000D
        .equiv T2IP2,   0x000E


;----- IPC2 Bits -----------------------------------------------------
        .equiv T3IP0,   0x0000
        .equiv T3IP1,   0x0001
        .equiv T3IP2,   0x0002
        .equiv SPF1IP0, 0x0004
        .equiv SPF1IP1, 0x0005
        .equiv SPF1IP2, 0x0006
        .equiv SPI1IP0, 0x0008
        .equiv SPI1IP1, 0x0009
        .equiv SPI1IP2, 0x000A
        .equiv U1RXIP0, 0x000C
        .equiv U1RXIP1, 0x000D
        .equiv U1RXIP2, 0x000E


;----- IPC3 Bits -----------------------------------------------------
        .equiv U1TXIP0, 0x0000
        .equiv U1TXIP1, 0x0001
        .equiv U1TXIP2, 0x0002
        .equiv AD1IP0,  0x0004
        .equiv AD1IP1,  0x0005
        .equiv AD1IP2,  0x0006


;----- IPC4 Bits -----------------------------------------------------
        .equiv SI2C1P0, 0x0000
        .equiv SI2C1P1, 0x0001
        .equiv SI2C1P2, 0x0002
        .equiv MI2C1P0, 0x0004
        .equiv MI2C1P1, 0x0005
        .equiv MI2C1P2, 0x0006
        .equiv CMIP0,   0x0008
        .equiv CMIP1,   0x0009
        .equiv CMIP2,   0x000A
        .equiv CNIP0,   0x000C
        .equiv CNIP1,   0x000D
        .equiv CNIP2,   0x000E

        .equiv SI2C1IP0, 0x0000
        .equiv SI2C1IP1, 0x0001
        .equiv SI2C1IP2, 0x0002
        .equiv MI2C1IP0, 0x0004
        .equiv MI2C1IP1, 0x0005
        .equiv MI2C1IP2, 0x0006



;----- IPC5 Bits -----------------------------------------------------
        .equiv INT1IP0, 0x0000
        .equiv INT1IP1, 0x0001
        .equiv INT1IP2, 0x0002


;----- IPC6 Bits -----------------------------------------------------
        .equiv OC3IP0,  0x0004
        .equiv OC3IP1,  0x0005
        .equiv OC3IP2,  0x0006
        .equiv OC4IP0,  0x0008
        .equiv OC4IP1,  0x0009
        .equiv OC4IP2,  0x000A
        .equiv T4IP0,   0x000C
        .equiv T4IP1,   0x000D
        .equiv T4IP2,   0x000E


;----- IPC7 Bits -----------------------------------------------------
        .equiv T5IP0,   0x0000
        .equiv T5IP1,   0x0001
        .equiv T5IP2,   0x0002
        .equiv INT2IP0, 0x0004
        .equiv INT2IP1, 0x0005
        .equiv INT2IP2, 0x0006
        .equiv U2RXIP0, 0x0008
        .equiv U2RXIP1, 0x0009
        .equiv U2RXIP2, 0x000A
        .equiv U2TXIP0, 0x000C
        .equiv U2TXIP1, 0x000D
        .equiv U2TXIP2, 0x000E


;----- IPC8 Bits -----------------------------------------------------
        .equiv SPF2IP0, 0x0000
        .equiv SPF2IP1, 0x0001
        .equiv SPF2IP2, 0x0002
        .equiv SPI2IP0, 0x0004
        .equiv SPI2IP1, 0x0005
        .equiv SPI2IP2, 0x0006


;----- IPC9 Bits -----------------------------------------------------
        .equiv IC3IP0,  0x0004
        .equiv IC3IP1,  0x0005
        .equiv IC3IP2,  0x0006
        .equiv IC4IP0,  0x0008
        .equiv IC4IP1,  0x0009
        .equiv IC4IP2,  0x000A
        .equiv IC5IP0,  0x000C
        .equiv IC5IP1,  0x000D
        .equiv IC5IP2,  0x000E


;----- IPC10 Bits -----------------------------------------------------
        .equiv OC5IP0,  0x0004
        .equiv OC5IP1,  0x0005
        .equiv OC5IP2,  0x0006


;----- IPC11 Bits -----------------------------------------------------
        .equiv PMPIP0,  0x0004
        .equiv PMPIP1,  0x0005
        .equiv PMPIP2,  0x0006


;----- IPC12 Bits -----------------------------------------------------
        .equiv SI2C2P0, 0x0004
        .equiv SI2C2P1, 0x0005
        .equiv SI2C2P2, 0x0006
        .equiv MI2C2P0, 0x0008
        .equiv MI2C2P1, 0x0009
        .equiv MI2C2P2, 0x000A

        .equiv SI2C2IP0, 0x0004
        .equiv SI2C2IP1, 0x0005
        .equiv SI2C2IP2, 0x0006
        .equiv MI2C2IP0, 0x0008
        .equiv MI2C2IP1, 0x0009
        .equiv MI2C2IP2, 0x000A


;----- IPC15 Bits -----------------------------------------------------
        .equiv RTCIP0,  0x0008
        .equiv RTCIP1,  0x0009
        .equiv RTCIP2,  0x000A


;----- IPC16 Bits -----------------------------------------------------
        .equiv U1ERIP0, 0x0004
        .equiv U1ERIP1, 0x0005
        .equiv U1ERIP2, 0x0006
        .equiv U2ERIP0, 0x0008
        .equiv U2ERIP1, 0x0009
        .equiv U2ERIP2, 0x000A
        .equiv CRCIP0,  0x000C
        .equiv CRCIP1,  0x000D
        .equiv CRCIP2,  0x000E


;----- IPC18 Bits -----------------------------------------------------
        .equiv LVDIP0,  0x0000
        .equiv LVDIP1,  0x0001
        .equiv LVDIP2,  0x0002


;----- IPC19 Bits -----------------------------------------------------
        .equiv CTMUIP0, 0x0004
        .equiv CTMUIP1, 0x0005
        .equiv CTMUIP2, 0x0006


;----- IPC21 Bits -----------------------------------------------------
        .equiv USB1IP0, 0x0008
        .equiv USB1IP1, 0x0009
        .equiv USB1IP2, 0x000A


;----- INTTREG Bits -----------------------------------------------------
        .equiv VHOLD,   0x000D
        .equiv CPUIRQ,  0x000F

        .equiv VECNUM0, 0x0000
        .equiv VECNUM1, 0x0001
        .equiv VECNUM2, 0x0002
        .equiv VECNUM3, 0x0003
        .equiv VECNUM4, 0x0004
        .equiv VECNUM5, 0x0005
        .equiv ILR0,    0x0007
        .equiv ILR1,    0x0008
        .equiv ILR2,    0x0009
        .equiv ILR3,    0x000A


;----- T1CON Bits -----------------------------------------------------
        .equiv TCS,     0x0001
        .equiv TSYNC,   0x0002
        .equiv TGATE,   0x0006
        .equiv TSIDL,   0x000D
        .equiv TON,     0x000F

        .equiv TCKPS0,  0x0004
        .equiv TCKPS1,  0x0005


;----- T2CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
        .equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T3CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T4CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T5CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- IC1CON1 Bits -----------------------------------------------------
        .equiv ICBNE,   0x0003
        .equiv ICOV,    0x0004
        .equiv ICSIDL,  0x000D

        .equiv ICM0,    0x0000
        .equiv ICM1,    0x0001
        .equiv ICM2,    0x0002
        .equiv ICI0,    0x0005
        .equiv ICI1,    0x0006
        .equiv ICTSEL0, 0x000A
        .equiv ICTSEL1, 0x000B
        .equiv ICTSEL2, 0x000C


;----- IC1CON2 Bits -----------------------------------------------------
        .equiv TRIGSTAT, 0x0006
        .equiv ICTRIG,  0x0007
        .equiv IC32,    0x0008

        .equiv SYNCSEL0, 0x0000
        .equiv SYNCSEL1, 0x0001
        .equiv SYNCSEL2, 0x0002
        .equiv SYNCSEL3, 0x0003
        .equiv SYNCSEL4, 0x0004


;----- IC2CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC2CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC3CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC3CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC4CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC4CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC5CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC5CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- OC1CON1 Bits -----------------------------------------------------
        .equiv TRIGMODE, 0x0003
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002
        .equiv OCFLT0,  0x0004
        .equiv OCFLT1,  0x0005
        .equiv OCFLT2,  0x0006
        .equiv ENFLT0,  0x0007
        .equiv ENFLT1,  0x0008
        .equiv ENFLT2,  0x0009
        .equiv OCTSEL0, 0x000A
        .equiv OCTSEL1, 0x000B
        .equiv OCTSEL2, 0x000C


;----- OC1CON2 Bits -----------------------------------------------------
        .equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
        .equiv OCTRIG,  0x0007
        .equiv OC32,    0x0008
        .equiv OCINV,   0x000C
        .equiv FLTTRIEN, 0x000D
        .equiv FLTOUT,  0x000E
        .equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
        .equiv DCB0,    0x0009
        .equiv DCB1,    0x000A
        .equiv FLTMODE, 0x000F


;----- OC2CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


;----- OC2CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000F


;----- OC3CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


;----- OC3CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000F


;----- OC4CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


;----- OC4CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000F


;----- OC5CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


;----- OC5CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000F


;----- I2C1CON Bits -----------------------------------------------------
        .equiv SEN,     0x0000
        .equiv RSEN,    0x0001
        .equiv PEN,     0x0002
        .equiv RCEN,    0x0003
        .equiv ACKEN,   0x0004
        .equiv ACKDT,   0x0005
        .equiv STREN,   0x0006
        .equiv GCEN,    0x0007
        .equiv SMEN,    0x0008
        .equiv DISSLW,  0x0009
        .equiv A10M,    0x000A
        .equiv IPMIEN,  0x000B
        .equiv SCLREL,  0x000C
        .equiv I2CSIDL, 0x000D
        .equiv I2CEN,   0x000F


;----- I2C1STAT Bits -----------------------------------------------------
        .equiv TBF,     0x0000
        .equiv RBF,     0x0001
        .equiv R_NOT_W, 0x0002
        .equiv S,       0x0003
        .equiv P,       0x0004
        .equiv D_NOT_A, 0x0005
        .equiv I2COV,   0x0006
        .equiv IWCOL,   0x0007
        .equiv ADD10,   0x0008
        .equiv GCSTAT,  0x0009
        .equiv BCL,     0x000A
        .equiv TRSTAT,  0x000E
        .equiv ACKSTAT, 0x000F

        .equiv R_W,     0x0002
        .equiv D_A,     0x0005


;----- I2C2CON Bits -----------------------------------------------------
       ;.equiv SEN,     0x0000
       ;.equiv RSEN,    0x0001
       ;.equiv PEN,     0x0002
       ;.equiv RCEN,    0x0003
       ;.equiv ACKEN,   0x0004
       ;.equiv ACKDT,   0x0005
       ;.equiv STREN,   0x0006
       ;.equiv GCEN,    0x0007
       ;.equiv SMEN,    0x0008
       ;.equiv DISSLW,  0x0009
       ;.equiv A10M,    0x000A
       ;.equiv IPMIEN,  0x000B
       ;.equiv SCLREL,  0x000C
       ;.equiv I2CSIDL, 0x000D
       ;.equiv I2CEN,   0x000F


;----- I2C2STAT Bits -----------------------------------------------------
       ;.equiv TBF,     0x0000
       ;.equiv RBF,     0x0001
       ;.equiv R_NOT_W, 0x0002
       ;.equiv S,       0x0003
       ;.equiv P,       0x0004
       ;.equiv D_NOT_A, 0x0005
       ;.equiv I2COV,   0x0006
       ;.equiv IWCOL,   0x0007
       ;.equiv ADD10,   0x0008
       ;.equiv GCSTAT,  0x0009
       ;.equiv BCL,     0x000A
       ;.equiv TRSTAT,  0x000E
       ;.equiv ACKSTAT, 0x000F

       ;.equiv R_W,     0x0002
       ;.equiv D_A,     0x0005


;----- U1MODE Bits -----------------------------------------------------
        .equiv STSEL,   0x0000
        .equiv BRGH,    0x0003
        .equiv RXINV,   0x0004
        .equiv ABAUD,   0x0005
        .equiv LPBACK,  0x0006
        .equiv WAKE,    0x0007
        .equiv RTSMD,   0x000B
        .equiv IREN,    0x000C
        .equiv USIDL,   0x000D
        .equiv UARTEN,  0x000F

        .equiv PDSEL0,  0x0001
        .equiv PDSEL1,  0x0002
        .equiv UEN0,    0x0008
        .equiv UEN1,    0x0009


;----- U1STA Bits -----------------------------------------------------
        .equiv URXDA,   0x0000
        .equiv OERR,    0x0001
        .equiv FERR,    0x0002
        .equiv PERR,    0x0003
        .equiv RIDLE,   0x0004
        .equiv ADDEN,   0x0005
        .equiv TRMT,    0x0008
        .equiv UTXBF,   0x0009
        .equiv UTXEN,   0x000A
        .equiv UTXBRK,  0x000B
        .equiv UTXISEL0, 0x000D
        .equiv UTXINV,  0x000E
        .equiv UTXISEL1, 0x000F

        .equiv URXISEL0, 0x0006
        .equiv URXISEL1, 0x0007


;----- U1TXREG Bits -----------------------------------------------------
        .equiv UTXREG0, 0x0000
        .equiv UTXREG1, 0x0001
        .equiv UTXREG2, 0x0002
        .equiv UTXREG3, 0x0003
        .equiv UTXREG4, 0x0004
        .equiv UTXREG5, 0x0005
        .equiv UTXREG6, 0x0006
        .equiv UTXREG7, 0x0007
        .equiv UTXREG8, 0x0008


;----- U1RXREG Bits -----------------------------------------------------
        .equiv URXREG0, 0x0000
        .equiv URXREG1, 0x0001
        .equiv URXREG2, 0x0002
        .equiv URXREG3, 0x0003
        .equiv URXREG4, 0x0004
        .equiv URXREG5, 0x0005
        .equiv URXREG6, 0x0006
        .equiv URXREG7, 0x0007
        .equiv URXREG8, 0x0008


;----- U2MODE Bits -----------------------------------------------------
       ;.equiv STSEL,   0x0000
       ;.equiv BRGH,    0x0003
       ;.equiv RXINV,   0x0004
       ;.equiv ABAUD,   0x0005
       ;.equiv LPBACK,  0x0006
       ;.equiv WAKE,    0x0007
       ;.equiv RTSMD,   0x000B
       ;.equiv IREN,    0x000C
       ;.equiv USIDL,   0x000D
       ;.equiv UARTEN,  0x000F

       ;.equiv PDSEL0,  0x0001
       ;.equiv PDSEL1,  0x0002
       ;.equiv UEN0,    0x0008
       ;.equiv UEN1,    0x0009


;----- U2STA Bits -----------------------------------------------------
       ;.equiv URXDA,   0x0000
       ;.equiv OERR,    0x0001
       ;.equiv FERR,    0x0002
       ;.equiv PERR,    0x0003
       ;.equiv RIDLE,   0x0004
       ;.equiv ADDEN,   0x0005
       ;.equiv TRMT,    0x0008
       ;.equiv UTXBF,   0x0009
       ;.equiv UTXEN,   0x000A
       ;.equiv UTXBRK,  0x000B
       ;.equiv UTXISEL0, 0x000D
       ;.equiv UTXINV,  0x000E
       ;.equiv UTXISEL1, 0x000F

       ;.equiv URXISEL0, 0x0006
       ;.equiv URXISEL1, 0x0007


;----- U2TXREG Bits -----------------------------------------------------
       ;.equiv UTXREG0, 0x0000
       ;.equiv UTXREG1, 0x0001
       ;.equiv UTXREG2, 0x0002
       ;.equiv UTXREG3, 0x0003
       ;.equiv UTXREG4, 0x0004
       ;.equiv UTXREG5, 0x0005
       ;.equiv UTXREG6, 0x0006
       ;.equiv UTXREG7, 0x0007
       ;.equiv UTXREG8, 0x0008


;----- U2RXREG Bits -----------------------------------------------------
       ;.equiv URXREG0, 0x0000
       ;.equiv URXREG1, 0x0001
       ;.equiv URXREG2, 0x0002
       ;.equiv URXREG3, 0x0003
       ;.equiv URXREG4, 0x0004
       ;.equiv URXREG5, 0x0005
       ;.equiv URXREG6, 0x0006
       ;.equiv URXREG7, 0x0007
       ;.equiv URXREG8, 0x0008


;----- SPI1STAT Bits -----------------------------------------------------
        .equiv SPIRBF,  0x0000
        .equiv SPITBF,  0x0001
        .equiv SRXMPT,  0x0005
        .equiv SPIROV,  0x0006
        .equiv SRMPT,   0x0007
        .equiv SPISIDL, 0x000D
        .equiv SPIEN,   0x000F

        .equiv SISEL0,  0x0002
        .equiv SISEL1,  0x0003
        .equiv SISEL2,  0x0004
        .equiv SPIBEC0, 0x0008
        .equiv SPIBEC1, 0x0009
        .equiv SPIBEC2, 0x000A


;----- SPI1CON1 Bits -----------------------------------------------------
        .equiv MSTEN,   0x0005
        .equiv CKP,     0x0006
        .equiv SSEN,    0x0007
        .equiv CKE,     0x0008
        .equiv SMP,     0x0009
        .equiv MODE16,  0x000A
        .equiv DISSDO,  0x000B
        .equiv DISSCK,  0x000C

        .equiv PPRE0,   0x0000
        .equiv PPRE1,   0x0001
        .equiv SPRE0,   0x0002
        .equiv SPRE1,   0x0003
        .equiv SPRE2,   0x0004


;----- SPI1CON2 Bits -----------------------------------------------------
        .equiv SPIBEN,  0x0000
        .equiv SPIFE,   0x0001
        .equiv SPIFPOL, 0x000D
        .equiv SPIFSD,  0x000E
        .equiv FRMEN,   0x000F


;----- SPI2STAT Bits -----------------------------------------------------
       ;.equiv SPIRBF,  0x0000
       ;.equiv SPITBF,  0x0001
       ;.equiv SRXMPT,  0x0005
       ;.equiv SPIROV,  0x0006
       ;.equiv SRMPT,   0x0007
       ;.equiv SPISIDL, 0x000D
       ;.equiv SPIEN,   0x000F

       ;.equiv SISEL0,  0x0002
       ;.equiv SISEL1,  0x0003
       ;.equiv SISEL2,  0x0004
       ;.equiv SPIBEC0, 0x0008
       ;.equiv SPIBEC1, 0x0009
       ;.equiv SPIBEC2, 0x000A


;----- SPI2CON1 Bits -----------------------------------------------------
       ;.equiv MSTEN,   0x0005
       ;.equiv CKP,     0x0006
       ;.equiv SSEN,    0x0007
       ;.equiv CKE,     0x0008
       ;.equiv SMP,     0x0009
       ;.equiv MODE16,  0x000A
       ;.equiv DISSDO,  0x000B
       ;.equiv DISSCK,  0x000C

       ;.equiv PPRE0,   0x0000
       ;.equiv PPRE1,   0x0001
       ;.equiv SPRE0,   0x0002
       ;.equiv SPRE1,   0x0003
       ;.equiv SPRE2,   0x0004


;----- SPI2CON2 Bits -----------------------------------------------------
       ;.equiv SPIBEN,  0x0000
       ;.equiv SPIFE,   0x0001
       ;.equiv SPIFPOL, 0x000D
       ;.equiv SPIFSD,  0x000E
       ;.equiv FRMEN,   0x000F


;----- TRISA Bits -----------------------------------------------------
        .equiv TRISA0,  0x0000
        .equiv TRISA1,  0x0001
        .equiv TRISA2,  0x0002
        .equiv TRISA3,  0x0003
        .equiv TRISA4,  0x0004
        .equiv TRISA7,  0x0007
        .equiv TRISA8,  0x0008
        .equiv TRISA9,  0x0009
        .equiv TRISA10, 0x000A


;----- PORTA Bits -----------------------------------------------------
        .equiv RA0,     0x0000
        .equiv RA1,     0x0001
        .equiv RA2,     0x0002
        .equiv RA3,     0x0003
        .equiv RA4,     0x0004
        .equiv RA7,     0x0007
        .equiv RA8,     0x0008
        .equiv RA9,     0x0009
        .equiv RA10,    0x000A


;----- LATA Bits -----------------------------------------------------
        .equiv LATA0,   0x0000
        .equiv LATA1,   0x0001
        .equiv LATA2,   0x0002
        .equiv LATA3,   0x0003
        .equiv LATA4,   0x0004
        .equiv LATA7,   0x0007
        .equiv LATA8,   0x0008
        .equiv LATA9,   0x0009
        .equiv LATA10,  0x000A


;----- ODCA Bits -----------------------------------------------------
        .equiv ODA0,    0x0000
        .equiv ODA1,    0x0001
        .equiv ODA2,    0x0002
        .equiv ODA3,    0x0003
        .equiv ODA4,    0x0004
        .equiv ODA7,    0x0007
        .equiv ODA8,    0x0008
        .equiv ODA9,    0x0009
        .equiv ODA10,   0x000A


;----- TRISB Bits -----------------------------------------------------
        .equiv TRISB0,  0x0000
        .equiv TRISB1,  0x0001
        .equiv TRISB2,  0x0002
        .equiv TRISB3,  0x0003
        .equiv TRISB4,  0x0004
        .equiv TRISB5,  0x0005
        .equiv TRISB7,  0x0007
        .equiv TRISB8,  0x0008
        .equiv TRISB9,  0x0009
        .equiv TRISB10, 0x000A
        .equiv TRISB11, 0x000B
        .equiv TRISB13, 0x000D
        .equiv TRISB14, 0x000E
        .equiv TRISB15, 0x000F


;----- PORTB Bits -----------------------------------------------------
        .equiv RB0,     0x0000
        .equiv RB1,     0x0001
        .equiv RB2,     0x0002
        .equiv RB3,     0x0003
        .equiv RB4,     0x0004
        .equiv RB5,     0x0005
        .equiv RB7,     0x0007
        .equiv RB8,     0x0008
        .equiv RB9,     0x0009
        .equiv RB10,    0x000A
        .equiv RB11,    0x000B
        .equiv RB13,    0x000D
        .equiv RB14,    0x000E
        .equiv RB15,    0x000F


;----- LATB Bits -----------------------------------------------------
        .equiv LATB0,   0x0000
        .equiv LATB1,   0x0001
        .equiv LATB2,   0x0002
        .equiv LATB3,   0x0003
        .equiv LATB4,   0x0004
        .equiv LATB5,   0x0005
        .equiv LATB7,   0x0007
        .equiv LATB8,   0x0008
        .equiv LATB9,   0x0009
        .equiv LATB10,  0x000A
        .equiv LATB11,  0x000B
        .equiv LATB13,  0x000D
        .equiv LATB14,  0x000E
        .equiv LATB15,  0x000F


;----- ODCB Bits -----------------------------------------------------
        .equiv ODB0,    0x0000
        .equiv ODB1,    0x0001
        .equiv ODB2,    0x0002
        .equiv ODB3,    0x0003
        .equiv ODB4,    0x0004
        .equiv ODB5,    0x0005
        .equiv ODB7,    0x0007
        .equiv ODB8,    0x0008
        .equiv ODB9,    0x0009
        .equiv ODB10,   0x000A
        .equiv ODB11,   0x000B
        .equiv ODB13,   0x000D
        .equiv ODB14,   0x000E
        .equiv ODB15,   0x000F


;----- TRISC Bits -----------------------------------------------------
        .equiv TRISC0,  0x0000
        .equiv TRISC1,  0x0001
        .equiv TRISC2,  0x0002
        .equiv TRISC3,  0x0003
        .equiv TRISC4,  0x0004
        .equiv TRISC5,  0x0005
        .equiv TRISC6,  0x0006
        .equiv TRISC7,  0x0007
        .equiv TRISC8,  0x0008
        .equiv TRISC9,  0x0009


;----- PORTC Bits -----------------------------------------------------
        .equiv RC0,     0x0000
        .equiv RC1,     0x0001
        .equiv RC2,     0x0002
        .equiv RC3,     0x0003
        .equiv RC4,     0x0004
        .equiv RC5,     0x0005
        .equiv RC6,     0x0006
        .equiv RC7,     0x0007
        .equiv RC8,     0x0008
        .equiv RC9,     0x0009


;----- LATC Bits -----------------------------------------------------
        .equiv LATC0,   0x0000
        .equiv LATC1,   0x0001
        .equiv LATC2,   0x0002
        .equiv LATC3,   0x0003
        .equiv LATC4,   0x0004
        .equiv LATC5,   0x0005
        .equiv LATC6,   0x0006
        .equiv LATC7,   0x0007
        .equiv LATC8,   0x0008
        .equiv LATC9,   0x0009


;----- ODCC Bits -----------------------------------------------------
        .equiv ODC0,    0x0000
        .equiv ODC1,    0x0001
        .equiv ODC2,    0x0002
        .equiv ODC3,    0x0003
        .equiv ODC4,    0x0004
        .equiv ODC5,    0x0005
        .equiv ODC6,    0x0006
        .equiv ODC7,    0x0007
        .equiv ODC8,    0x0008
        .equiv ODC9,    0x0009


;----- PADCFG1 Bits -----------------------------------------------------
        .equiv PMPTTL,  0x0000

        .equiv RTSECSEL0, 0x0000
        .equiv RTSECSEL1, 0x0001
        .equiv RTSECSEL2, 0x0002


;----- AD1CON1 Bits -----------------------------------------------------
        .equiv DONE,    0x0000
        .equiv SAMP,    0x0001
        .equiv ASAM,    0x0002
        .equiv ADSIDL,  0x000D
        .equiv ADON,    0x000F

        .equiv SSRC0,   0x0005
        .equiv SSRC1,   0x0006
        .equiv SSRC2,   0x0007
        .equiv FORM0,   0x0008
        .equiv FORM1,   0x0009


;----- AD1CON2 Bits -----------------------------------------------------
        .equiv ALTS,    0x0000
        .equiv BUFM,    0x0001
        .equiv BUFS,    0x0007
        .equiv CSCNA,   0x000A

        .equiv SMPI0,   0x0002
        .equiv SMPI1,   0x0003
        .equiv SMPI2,   0x0004
        .equiv SMPI3,   0x0005
        .equiv VCFG0,   0x000D
        .equiv VCFG1,   0x000E
        .equiv VCFG2,   0x000F


;----- AD1CON3 Bits -----------------------------------------------------
        .equiv ADRC,    0x000F

        .equiv ADCS0,   0x0000
        .equiv ADCS1,   0x0001
        .equiv ADCS2,   0x0002
        .equiv ADCS3,   0x0003
        .equiv ADCS4,   0x0004
        .equiv ADCS5,   0x0005
        .equiv ADCS6,   0x0006
        .equiv ADCS7,   0x0007
        .equiv SAMC0,   0x0008
        .equiv SAMC1,   0x0009
        .equiv SAMC2,   0x000A
        .equiv SAMC3,   0x000B
        .equiv SAMC4,   0x000C


;----- AD1CHS Bits -----------------------------------------------------
        .equiv CH0NA,   0x0007
        .equiv CH0NB,   0x000F

        .equiv CH0SA0,  0x0000
        .equiv CH0SA1,  0x0001
        .equiv CH0SA2,  0x0002
        .equiv CH0SA3,  0x0003
        .equiv CH0SA4,  0x0004
        .equiv CH0SB0,  0x0008
        .equiv CH0SB1,  0x0009
        .equiv CH0SB2,  0x000A
        .equiv CH0SB3,  0x000B
        .equiv CH0SB4,  0x000C


;----- AD1CHS0 Bits -----------------------------------------------------
       ;.equiv CH0NA,   0x0007
       ;.equiv CH0NB,   0x000F

       ;.equiv CH0SA0,  0x0000
       ;.equiv CH0SA1,  0x0001
       ;.equiv CH0SA2,  0x0002
       ;.equiv CH0SA3,  0x0003
       ;.equiv CH0SA4,  0x0004
       ;.equiv CH0SB0,  0x0008
       ;.equiv CH0SB1,  0x0009
       ;.equiv CH0SB2,  0x000A
       ;.equiv CH0SB3,  0x000B
       ;.equiv CH0SB4,  0x000C


;----- AD1PCFG Bits -----------------------------------------------------
        .equiv PCFG0,   0x0000
        .equiv PCFG1,   0x0001
        .equiv PCFG2,   0x0002
        .equiv PCFG3,   0x0003
        .equiv PCFG4,   0x0004
        .equiv PCFG5,   0x0005
        .equiv PCFG6,   0x0006
        .equiv PCFG7,   0x0007
        .equiv PCFG8,   0x0008
        .equiv PCFG9,   0x0009
        .equiv PCFG10,  0x000A
        .equiv PCFG11,  0x000B
        .equiv PCFG12,  0x000C
        .equiv PCFG13,  0x000D
        .equiv PCFG14,  0x000E
        .equiv PCFG15,  0x000F


;----- AD1PCFGL Bits -----------------------------------------------------
       ;.equiv PCFG0,   0x0000
       ;.equiv PCFG1,   0x0001
       ;.equiv PCFG2,   0x0002
       ;.equiv PCFG3,   0x0003
       ;.equiv PCFG4,   0x0004
       ;.equiv PCFG5,   0x0005
       ;.equiv PCFG6,   0x0006
       ;.equiv PCFG7,   0x0007
       ;.equiv PCFG8,   0x0008
       ;.equiv PCFG9,   0x0009
       ;.equiv PCFG10,  0x000A
       ;.equiv PCFG11,  0x000B
       ;.equiv PCFG12,  0x000C
       ;.equiv PCFG13,  0x000D
       ;.equiv PCFG14,  0x000E
       ;.equiv PCFG15,  0x000F


;----- AD1CSSL Bits -----------------------------------------------------
        .equiv CSSL0,   0x0000
        .equiv CSSL1,   0x0001
        .equiv CSSL2,   0x0002
        .equiv CSSL3,   0x0003
        .equiv CSSL4,   0x0004
        .equiv CSSL5,   0x0005
        .equiv CSSL6,   0x0006
        .equiv CSSL7,   0x0007
        .equiv CSSL8,   0x0008
        .equiv CSSL9,   0x0009
        .equiv CSSL10,  0x000A
        .equiv CSSL11,  0x000B
        .equiv CSSL12,  0x000C
        .equiv CSSL13,  0x000D
        .equiv CSSL14,  0x000E
        .equiv CSSL15,  0x000F


;----- CTMUCON Bits -----------------------------------------------------
        .equiv EDG1STAT, 0x0000
        .equiv EDG2STAT, 0x0001
        .equiv EDG1POL, 0x0004
        .equiv EDG2POL, 0x0007
        .equiv CTTRIG,  0x0008
        .equiv IDISSEN, 0x0009
        .equiv EDGSEQEN, 0x000A
        .equiv EDGEN,   0x000B
        .equiv TGEN,    0x000C
        .equiv CTMUSIDL, 0x000D
        .equiv CTMUEN,  0x000F

        .equiv EDG1SEL0, 0x0002
        .equiv EDG1SEL1, 0x0003
        .equiv EDG2SEL0, 0x0005
        .equiv EDG2SEL1, 0x0006


;----- CTMUICON Bits -----------------------------------------------------
        .equiv IRNG0,   0x0008
        .equiv IRNG1,   0x0009
        .equiv ITRIM0,  0x000A
        .equiv ITRIM1,  0x000B
        .equiv ITRIM2,  0x000C
        .equiv ITRIM3,  0x000D
        .equiv ITRIM4,  0x000E
        .equiv ITRIM5,  0x000F


;----- U1OTGIR Bits -----------------------------------------------------
        .equiv VBUSVDIF, 0x0000
        .equiv SESENDIF, 0x0002
        .equiv SESVDIF, 0x0003
        .equiv ACTVIF,  0x0004
        .equiv LSTATEIF, 0x0005
        .equiv T1MSECIF, 0x0006
        .equiv IDIF,    0x0007


;----- U1OTGIE Bits -----------------------------------------------------
        .equiv VBUSVDIE, 0x0000
        .equiv SESENDIE, 0x0002
        .equiv SESVDIE, 0x0003
        .equiv ACTVIE,  0x0004
        .equiv LSTATEIE, 0x0005
        .equiv T1MSECIE, 0x0006
        .equiv IDIE,    0x0007


;----- U1OTGSTAT Bits -----------------------------------------------------
        .equiv VBUSVD,  0x0000
        .equiv SESEND,  0x0002
        .equiv SESVD,   0x0003
        .equiv LSTATE,  0x0005
        .equiv ID,      0x0007


;----- U1OTGCON Bits -----------------------------------------------------
        .equiv VBUSDIS, 0x0000
        .equiv VBUSCHG, 0x0001
        .equiv OTGEN,   0x0002
        .equiv VBUSON,  0x0003
        .equiv DMPULDWN, 0x0004
        .equiv DPPULDWN, 0x0005
        .equiv DMPULUP, 0x0006
        .equiv DPPULUP, 0x0007


;----- U1PWRC Bits -----------------------------------------------------
        .equiv USBPWR,  0x0000
        .equiv USUSPND, 0x0001
        .equiv USLPGRD, 0x0004
        .equiv UACTPND, 0x0007

        .equiv USUSPEND, 0x0001


;----- U1IR Bits -----------------------------------------------------
        .equiv URSTIF,  0x0000
        .equiv UERRIF,  0x0001
        .equiv SOFIF,   0x0002
        .equiv TRNIF,   0x0003
        .equiv IDLEIF,  0x0004
        .equiv RESUMEIF, 0x0005
        .equiv STALLIF, 0x0007

        .equiv DETACHIF, 0x0000
        .equiv ATTACHIF, 0x0006


;----- U1IE Bits -----------------------------------------------------
        .equiv URSTIE,  0x0000
        .equiv UERRIE,  0x0001
        .equiv SOFIE,   0x0002
        .equiv TRNIE,   0x0003
        .equiv IDLEIE,  0x0004
        .equiv RESUMEIE, 0x0005
        .equiv STALLIE, 0x0007

        .equiv DETACHIE, 0x0000
        .equiv ATTACHIE, 0x0006


;----- U1EIR Bits -----------------------------------------------------
        .equiv PIDEF,   0x0000
        .equiv CRC5EF,  0x0001
        .equiv CRC16EF, 0x0002
        .equiv DFN8EF,  0x0003
        .equiv BTOEF,   0x0004
        .equiv DMAEF,   0x0005
        .equiv BTSEF,   0x0007

        .equiv EOFEF,   0x0001


;----- U1EIE Bits -----------------------------------------------------
        .equiv PIDEE,   0x0000
        .equiv CRC5EE,  0x0001
        .equiv CRC16EE, 0x0002
        .equiv DFN8EE,  0x0003
        .equiv BTOEE,   0x0004
        .equiv DMAEE,   0x0005
        .equiv BTSEE,   0x0007

        .equiv EOFEE,   0x0001


;----- U1STAT Bits -----------------------------------------------------
        .equiv PPBI,    0x0002
        .equiv DIR,     0x0003
        .equiv ENDPT0,  0x0004
        .equiv ENDPT1,  0x0005
        .equiv ENDPT2,  0x0006
        .equiv ENDPT3,  0x0007



;----- U1CON Bits -----------------------------------------------------
        .equiv USBEN,   0x0000
        .equiv PPBRST,  0x0001
        .equiv RESUME,  0x0002
        .equiv HOSTEN,  0x0003
        .equiv PKTDIS,  0x0005
        .equiv SE0,     0x0006

        .equiv SOFEN,   0x0000
        .equiv USBRST,  0x0004
        .equiv TOKBUSY, 0x0005
        .equiv JSTATE,  0x0007

        .equiv RESET,   0x0004


;----- U1ADDR Bits -----------------------------------------------------
        .equiv DEVADDR0, 0x0000
        .equiv DEVADDR1, 0x0001
        .equiv DEVADDR2, 0x0002
        .equiv DEVADDR3, 0x0003
        .equiv DEVADDR4, 0x0004
        .equiv DEVADDR5, 0x0005
        .equiv DEVADDR6, 0x0006
        .equiv LOWSPDEN, 0x0007

        .equiv LSPDEN,  0x0007


;----- U1FRML Bits -----------------------------------------------------
        .equiv FRM0,    0x0000
        .equiv FRM1,    0x0001
        .equiv FRM2,    0x0002
        .equiv FRM3,    0x0003
        .equiv FRM4,    0x0004
        .equiv FRM5,    0x0005
        .equiv FRM6,    0x0006
        .equiv FRM7,    0x0007


;----- U1FRMH Bits -----------------------------------------------------
        .equiv FRM8,    0x0000
        .equiv FRM9,    0x0001
        .equiv FRM10,   0x0002


;----- U1TOK Bits -----------------------------------------------------
        .equiv EP0,     0x0000
        .equiv EP1,     0x0001
        .equiv EP2,     0x0002
        .equiv EP3,     0x0003
        .equiv PID0,    0x0004
        .equiv PID1,    0x0005
        .equiv PID2,    0x0006
        .equiv PID3,    0x0007



;----- U1CNFG1 Bits -----------------------------------------------------
        .equiv PPB0,    0x0000
        .equiv PPB1,    0x0001
        .equiv USBSIDL, 0x0004
        .equiv UOEMON,  0x0006
        .equiv UTEYE,   0x0007



;----- U1CNFG2 Bits -----------------------------------------------------
        .equiv UTRDIS,  0x0000
        .equiv UVCMPDIS, 0x0001
        .equiv UVBUSDIS, 0x0002
        .equiv EXTI2CEN, 0x0003
        .equiv PUVBUS,  0x0004
        .equiv UVCMPSEL, 0x0005


;----- U1EP0 Bits -----------------------------------------------------
        .equiv EPHSHK,  0x0000
        .equiv EPSTALL, 0x0001
        .equiv EPTXEN,  0x0002
        .equiv EPRXEN,  0x0003
        .equiv EPCONDIS, 0x0004
        .equiv RETRYDIS, 0x0006
        .equiv LSPD,    0x0007

        .equiv EPINEN,  0x0002
        .equiv EPOUTEN, 0x0003
        .equiv LOWSPD,  0x0007


;----- U1EP1 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP2 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP3 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP4 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP5 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP6 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP7 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP8 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP9 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP10 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP11 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP12 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP13 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP14 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP15 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1PWMRRS Bits -----------------------------------------------------
        .equiv PER0,    0x0000
        .equiv PER1,    0x0001
        .equiv PER2,    0x0002
        .equiv PER3,    0x0003
        .equiv PER4,    0x0004
        .equiv PER5,    0x0005
        .equiv PER6,    0x0006
        .equiv PER7,    0x0007
        .equiv DC0,     0x0008
        .equiv DC1,     0x0009
        .equiv DC2,     0x000A
        .equiv DC3,     0x000B
        .equiv DC4,     0x000C
        .equiv DC5,     0x000D
        .equiv DC6,     0x000E
        .equiv DC7,     0x000F

        .equiv USBRS0,  0x0000
        .equiv USBRS1,  0x0001
        .equiv USBRS2,  0x0002
        .equiv USBRS3,  0x0003
        .equiv USBRS4,  0x0004
        .equiv USBRS5,  0x0005
        .equiv USBRS6,  0x0006
        .equiv USBRS7,  0x0007
        .equiv USBR0,   0x0008
        .equiv USBR1,   0x0009
        .equiv USBR2,   0x000A
        .equiv USBR3,   0x000B
        .equiv USBR4,   0x000C
        .equiv USBR5,   0x000D
        .equiv USBR6,   0x000E
        .equiv USBR7,   0x000F



;----- U1PWMCON Bits -----------------------------------------------------
        .equiv CNTEN,   0x0008
        .equiv PWMPOL,  0x0009
        .equiv PWMEN,   0x000F


;----- PMCON Bits -----------------------------------------------------
        .equiv RDSP,    0x0000
        .equiv WRSP,    0x0001
        .equiv BEP,     0x0002
        .equiv CS1P,    0x0003
        .equiv ALP,     0x0005
        .equiv PTRDEN,  0x0008
        .equiv PTWREN,  0x0009
        .equiv PTBEEN,  0x000A
        .equiv PSIDL,   0x000D
        .equiv PMPEN,   0x000F

        .equiv CSF0,    0x0006
        .equiv CSF1,    0x0007
        .equiv ADRMUX0, 0x000B
        .equiv ADRMUX1, 0x000C


;----- PMMODE Bits -----------------------------------------------------
       ;.equiv MODE16,  0x000A
        .equiv BUSY,    0x000F

        .equiv WAITE0,  0x0000
        .equiv WAITE1,  0x0001
        .equiv WAITM0,  0x0002
        .equiv WAITM1,  0x0003
        .equiv WAITM2,  0x0004
        .equiv WAITM3,  0x0005
        .equiv WAITB0,  0x0006
        .equiv WAITB1,  0x0007
        .equiv MODE0,   0x0008
        .equiv MODE1,   0x0009
        .equiv INCM0,   0x000B
        .equiv INCM1,   0x000C
        .equiv IRQM0,   0x000D
        .equiv IRQM1,   0x000E


;----- PMADDR Bits -----------------------------------------------------
        .equiv CS1,     0x000E

        .equiv ADDR0,   0x0000
        .equiv ADDR1,   0x0001
        .equiv ADDR2,   0x0002
        .equiv ADDR3,   0x0003
        .equiv ADDR4,   0x0004
        .equiv ADDR5,   0x0005
        .equiv ADDR6,   0x0006
        .equiv ADDR7,   0x0007
        .equiv ADDR8,   0x0008
        .equiv ADDR9,   0x0009
        .equiv ADDR10,  0x000A
        .equiv CS,      0x000E


;----- PMDOUT1 Bits -----------------------------------------------------
       ;.equiv CS1,     0x000E

       ;.equiv ADDR0,   0x0000
       ;.equiv ADDR1,   0x0001
       ;.equiv ADDR2,   0x0002
       ;.equiv ADDR3,   0x0003
       ;.equiv ADDR4,   0x0004
       ;.equiv ADDR5,   0x0005
       ;.equiv ADDR6,   0x0006
       ;.equiv ADDR7,   0x0007
       ;.equiv ADDR8,   0x0008
       ;.equiv ADDR9,   0x0009
       ;.equiv ADDR10,  0x000A
       ;.equiv CS,      0x000E


;----- PMAEN Bits -----------------------------------------------------
        .equiv PTEN14,  0x000E

        .equiv PTEN0,   0x0000
        .equiv PTEN1,   0x0001
        .equiv PTEN2,   0x0002
        .equiv PTEN3,   0x0003
        .equiv PTEN4,   0x0004
        .equiv PTEN5,   0x0005
        .equiv PTEN6,   0x0006
        .equiv PTEN7,   0x0007
        .equiv PTEN8,   0x0008
        .equiv PTEN9,   0x0009
        .equiv PTEN10,  0x000A


;----- PMSTAT Bits -----------------------------------------------------
        .equiv OB0E,    0x0000
        .equiv OB1E,    0x0001
        .equiv OB2E,    0x0002
        .equiv OB3E,    0x0003
        .equiv OBUF,    0x0006
        .equiv OBE,     0x0007
        .equiv IB0F,    0x0008
        .equiv IB1F,    0x0009
        .equiv IB2F,    0x000A
        .equiv IB3F,    0x000B
        .equiv IBOV,    0x000E
        .equiv IBF,     0x000F


;----- ALCFGRPT Bits -----------------------------------------------------
        .equiv CHIME,   0x000E
        .equiv ALRMEN,  0x000F

        .equiv ARPT0,   0x0000
        .equiv ARPT1,   0x0001
        .equiv ARPT2,   0x0002
        .equiv ARPT3,   0x0003
        .equiv ARPT4,   0x0004
        .equiv ARPT5,   0x0005
        .equiv ARPT6,   0x0006
        .equiv ARPT7,   0x0007
        .equiv ALRMPTR0, 0x0008
        .equiv ALRMPTR1, 0x0009
        .equiv AMASK0,  0x000A
        .equiv AMASK1,  0x000B
        .equiv AMASK2,  0x000C
        .equiv AMASK3,  0x000D


;----- RCFGCAL Bits -----------------------------------------------------
        .equiv RTCOE,   0x000A
        .equiv HALFSEC, 0x000B
        .equiv RTCSYNC, 0x000C
        .equiv RTCWREN, 0x000D
        .equiv RTCEN,   0x000F

        .equiv CAL0,    0x0000
        .equiv CAL1,    0x0001
        .equiv CAL2,    0x0002
        .equiv CAL3,    0x0003
        .equiv CAL4,    0x0004
        .equiv CAL5,    0x0005
        .equiv CAL6,    0x0006
        .equiv CAL7,    0x0007
        .equiv RTCPTR0, 0x0008
        .equiv RTCPTR1, 0x0009


;----- CRCCON Bits -----------------------------------------------------
        .equiv LENDIAN, 0x0003
        .equiv CRCGO,   0x0004
        .equiv CRCISEL, 0x0005
        .equiv CRCMPT,  0x0006
        .equiv CRCFUL,  0x0007
        .equiv CSIDL,   0x000D
        .equiv CRCEN,   0x000F

        .equiv VWORD0,  0x0008
        .equiv VWORD1,  0x0009
        .equiv VWORD2,  0x000A
        .equiv VWORD3,  0x000B
        .equiv VWORD4,  0x000C


;----- CRCCON1 Bits -----------------------------------------------------
       ;.equiv LENDIAN, 0x0003
       ;.equiv CRCGO,   0x0004
       ;.equiv CRCISEL, 0x0005
       ;.equiv CRCMPT,  0x0006
       ;.equiv CRCFUL,  0x0007
       ;.equiv CSIDL,   0x000D
       ;.equiv CRCEN,   0x000F

       ;.equiv VWORD0,  0x0008
       ;.equiv VWORD1,  0x0009
       ;.equiv VWORD2,  0x000A
       ;.equiv VWORD3,  0x000B
       ;.equiv VWORD4,  0x000C


;----- CRCCON2 Bits -----------------------------------------------------
        .equiv PLEN0,   0x0000
        .equiv PLEN1,   0x0001
        .equiv PLEN2,   0x0002
        .equiv PLEN3,   0x0003
        .equiv PLEN4,   0x0004
        .equiv DWIDTH0, 0x0008
        .equiv DWIDTH1, 0x0009
        .equiv DWIDTH2, 0x000A
        .equiv DWIDTH3, 0x000B
        .equiv DWIDTH4, 0x000C


;----- CRCXOR Bits -----------------------------------------------------
        .equiv X1,      0x0001
        .equiv X2,      0x0002
        .equiv X3,      0x0003
        .equiv X4,      0x0004
        .equiv X5,      0x0005
        .equiv X6,      0x0006
        .equiv X7,      0x0007
        .equiv X8,      0x0008
        .equiv X9,      0x0009
        .equiv X10,     0x000A
        .equiv X11,     0x000B
        .equiv X12,     0x000C
        .equiv X13,     0x000D
        .equiv X14,     0x000E
        .equiv X15,     0x000F


;----- CRCXORL Bits -----------------------------------------------------
       ;.equiv X1,      0x0001
       ;.equiv X2,      0x0002
       ;.equiv X3,      0x0003
       ;.equiv X4,      0x0004
       ;.equiv X5,      0x0005
       ;.equiv X6,      0x0006
       ;.equiv X7,      0x0007
       ;.equiv X8,      0x0008
       ;.equiv X9,      0x0009
       ;.equiv X10,     0x000A
       ;.equiv X11,     0x000B
       ;.equiv X12,     0x000C
       ;.equiv X13,     0x000D
       ;.equiv X14,     0x000E
       ;.equiv X15,     0x000F


;----- CRCXORH Bits -----------------------------------------------------
        .equiv X16,     0x0000
        .equiv X17,     0x0001
        .equiv X18,     0x0002
        .equiv X19,     0x0003
        .equiv X20,     0x0004
        .equiv X21,     0x0005
        .equiv X22,     0x0006
        .equiv X23,     0x0007
        .equiv X24,     0x0008
        .equiv X25,     0x0009
        .equiv X26,     0x000A
        .equiv X27,     0x000B
        .equiv X28,     0x000C
        .equiv X29,     0x000D
        .equiv X30,     0x000E
        .equiv X31,     0x000F


;----- CMSTAT Bits -----------------------------------------------------
        .equiv C1OUT,   0x0000
        .equiv C2OUT,   0x0001
        .equiv C3OUT,   0x0002
        .equiv C1EVT,   0x0008
        .equiv C2EVT,   0x0009
        .equiv C3EVT,   0x000A
        .equiv CMIDL,   0x000F


;----- CVRCON Bits -----------------------------------------------------
        .equiv CVRSS,   0x0004
        .equiv CVRR,    0x0005
        .equiv CVROE,   0x0006
        .equiv CVREN,   0x0007
        .equiv CVREFP,  0x000A

        .equiv CVR0,    0x0000
        .equiv CVR1,    0x0001
        .equiv CVR2,    0x0002
        .equiv CVR3,    0x0003
        .equiv CVREFM0, 0x0008
        .equiv CVREFM1, 0x0009


;----- CM1CON Bits -----------------------------------------------------
        .equiv CREF,    0x0004
        .equiv COUT,    0x0008
        .equiv CEVT,    0x0009
        .equiv CPOL,    0x000D
        .equiv COE,     0x000E
        .equiv CON,     0x000F

        .equiv CCH0,    0x0000
        .equiv CCH1,    0x0001
        .equiv EVPOL0,  0x0006
        .equiv EVPOL1,  0x0007
        .equiv CEN,     0x000F


;----- CM2CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv CEN,     0x000F


;----- CM3CON Bits -----------------------------------------------------
       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv CREF,    0x0004
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CEN,     0x000F


;----- RPINR0 Bits -----------------------------------------------------
        .equiv INT1R0,  0x0008
        .equiv INT1R1,  0x0009
        .equiv INT1R2,  0x000A
        .equiv INT1R3,  0x000B
        .equiv INT1R4,  0x000C


;----- RPINR1 Bits -----------------------------------------------------
        .equiv INT2R0,  0x0000
        .equiv INT2R1,  0x0001
        .equiv INT2R2,  0x0002
        .equiv INT2R3,  0x0003
        .equiv INT2R4,  0x0004


;----- RPINR3 Bits -----------------------------------------------------
        .equiv T2CKR0,  0x0000
        .equiv T2CKR1,  0x0001
        .equiv T2CKR2,  0x0002
        .equiv T2CKR3,  0x0003
        .equiv T2CKR4,  0x0004
        .equiv T3CKR0,  0x0008
        .equiv T3CKR1,  0x0009
        .equiv T3CKR2,  0x000A
        .equiv T3CKR3,  0x000B
        .equiv T3CKR4,  0x000C


;----- RPINR4 Bits -----------------------------------------------------
        .equiv T4CKR0,  0x0000
        .equiv T4CKR1,  0x0001
        .equiv T4CKR2,  0x0002
        .equiv T4CKR3,  0x0003
        .equiv T4CKR4,  0x0004
        .equiv T5CKR0,  0x0008
        .equiv T5CKR1,  0x0009
        .equiv T5CKR2,  0x000A
        .equiv T5CKR3,  0x000B
        .equiv T5CKR4,  0x000C


;----- RPINR7 Bits -----------------------------------------------------
        .equiv IC1R0,   0x0000
        .equiv IC1R1,   0x0001
        .equiv IC1R2,   0x0002
        .equiv IC1R3,   0x0003
        .equiv IC1R4,   0x0004
        .equiv IC2R0,   0x0008
        .equiv IC2R1,   0x0009
        .equiv IC2R2,   0x000A
        .equiv IC2R3,   0x000B
        .equiv IC2R4,   0x000C


;----- RPINR8 Bits -----------------------------------------------------
        .equiv IC3R0,   0x0000
        .equiv IC3R1,   0x0001
        .equiv IC3R2,   0x0002
        .equiv IC3R3,   0x0003
        .equiv IC3R4,   0x0004
        .equiv IC4R0,   0x0008
        .equiv IC4R1,   0x0009
        .equiv IC4R2,   0x000A
        .equiv IC4R3,   0x000B
        .equiv IC4R4,   0x000C


;----- RPINR9 Bits -----------------------------------------------------
        .equiv IC5R0,   0x0000
        .equiv IC5R1,   0x0001
        .equiv IC5R2,   0x0002
        .equiv IC5R3,   0x0003
        .equiv IC5R4,   0x0004


;----- RPINR11 Bits -----------------------------------------------------
        .equiv OCFAR0,  0x0000
        .equiv OCFAR1,  0x0001
        .equiv OCFAR2,  0x0002
        .equiv OCFAR3,  0x0003
        .equiv OCFAR4,  0x0004
        .equiv OCFBR0,  0x0008
        .equiv OCFBR1,  0x0009
        .equiv OCFBR2,  0x000A
        .equiv OCFBR3,  0x000B
        .equiv OCFBR4,  0x000C


;----- RPINR18 Bits -----------------------------------------------------
        .equiv U1RXR0,  0x0000
        .equiv U1RXR1,  0x0001
        .equiv U1RXR2,  0x0002
        .equiv U1RXR3,  0x0003
        .equiv U1RXR4,  0x0004
        .equiv U1CTSR0, 0x0008
        .equiv U1CTSR1, 0x0009
        .equiv U1CTSR2, 0x000A
        .equiv U1CTSR3, 0x000B
        .equiv U1CTSR4, 0x000C


;----- RPINR19 Bits -----------------------------------------------------
        .equiv U2RXR0,  0x0000
        .equiv U2RXR1,  0x0001
        .equiv U2RXR2,  0x0002
        .equiv U2RXR3,  0x0003
        .equiv U2RXR4,  0x0004
        .equiv U2CTSR0, 0x0008
        .equiv U2CTSR1, 0x0009
        .equiv U2CTSR2, 0x000A
        .equiv U2CTSR3, 0x000B
        .equiv U2CTSR4, 0x000C


;----- RPINR20 Bits -----------------------------------------------------
        .equiv SDI1R0,  0x0000
        .equiv SDI1R1,  0x0001
        .equiv SDI1R2,  0x0002
        .equiv SDI1R3,  0x0003
        .equiv SDI1R4,  0x0004
        .equiv SCK1R0,  0x0008
        .equiv SCK1R1,  0x0009
        .equiv SCK1R2,  0x000A
        .equiv SCK1R3,  0x000B
        .equiv SCK1R4,  0x000C


;----- RPINR21 Bits -----------------------------------------------------
        .equiv SS1R0,   0x0000
        .equiv SS1R1,   0x0001
        .equiv SS1R2,   0x0002
        .equiv SS1R3,   0x0003
        .equiv SS1R4,   0x0004


;----- RPINR22 Bits -----------------------------------------------------
        .equiv SDI2R0,  0x0000
        .equiv SDI2R1,  0x0001
        .equiv SDI2R2,  0x0002
        .equiv SDI2R3,  0x0003
        .equiv SDI2R4,  0x0004
        .equiv SCK2R0,  0x0008
        .equiv SCK2R1,  0x0009
        .equiv SCK2R2,  0x000A
        .equiv SCK2R3,  0x000B
        .equiv SCK2R4,  0x000C


;----- RPINR23 Bits -----------------------------------------------------
        .equiv SS2R0,   0x0000
        .equiv SS2R1,   0x0001
        .equiv SS2R2,   0x0002
        .equiv SS2R3,   0x0003
        .equiv SS2R4,   0x0004


;----- RPOR0 Bits -----------------------------------------------------
        .equiv RP0R0,   0x0000
        .equiv RP0R1,   0x0001
        .equiv RP0R2,   0x0002
        .equiv RP0R3,   0x0003
        .equiv RP0R4,   0x0004
        .equiv RP1R0,   0x0008
        .equiv RP1R1,   0x0009
        .equiv RP1R2,   0x000A
        .equiv RP1R3,   0x000B
        .equiv RP1R4,   0x000C


;----- RPOR1 Bits -----------------------------------------------------
        .equiv RP2R0,   0x0000
        .equiv RP2R1,   0x0001
        .equiv RP2R2,   0x0002
        .equiv RP2R3,   0x0003
        .equiv RP2R4,   0x0004
        .equiv RP3R0,   0x0008
        .equiv RP3R1,   0x0009
        .equiv RP3R2,   0x000A
        .equiv RP3R3,   0x000B
        .equiv RP3R4,   0x000C


;----- RPOR2 Bits -----------------------------------------------------
        .equiv RP4R0,   0x0000
        .equiv RP4R1,   0x0001
        .equiv RP4R2,   0x0002
        .equiv RP4R3,   0x0003
        .equiv RP4R4,   0x0004
        .equiv RP5R0,   0x0008
        .equiv RP5R1,   0x0009
        .equiv RP5R2,   0x000A
        .equiv RP5R3,   0x000B
        .equiv RP5R4,   0x000C


;----- RPOR3 Bits -----------------------------------------------------
        .equiv RP6R0,   0x0000
        .equiv RP6R1,   0x0001
        .equiv RP6R2,   0x0002
        .equiv RP6R3,   0x0003
        .equiv RP6R4,   0x0004
        .equiv RP7R0,   0x0008
        .equiv RP7R1,   0x0009
        .equiv RP7R2,   0x000A
        .equiv RP7R3,   0x000B
        .equiv RP7R4,   0x000C


;----- RPOR4 Bits -----------------------------------------------------
        .equiv RP8R0,   0x0000
        .equiv RP8R1,   0x0001
        .equiv RP8R2,   0x0002
        .equiv RP8R3,   0x0003
        .equiv RP8R4,   0x0004
        .equiv RP9R0,   0x0008
        .equiv RP9R1,   0x0009
        .equiv RP9R2,   0x000A
        .equiv RP9R3,   0x000B
        .equiv RP9R4,   0x000C


;----- RPOR5 Bits -----------------------------------------------------
        .equiv RP10R0,  0x0000
        .equiv RP10R1,  0x0001
        .equiv RP10R2,  0x0002
        .equiv RP10R3,  0x0003
        .equiv RP10R4,  0x0004
        .equiv RP11R0,  0x0008
        .equiv RP11R1,  0x0009
        .equiv RP11R2,  0x000A
        .equiv RP11R3,  0x000B
        .equiv RP11R4,  0x000C


;----- RPOR6 Bits -----------------------------------------------------
        .equiv RP13R0,  0x0008
        .equiv RP13R1,  0x0009
        .equiv RP13R2,  0x000A
        .equiv RP13R3,  0x000B
        .equiv RP13R4,  0x000C


;----- RPOR7 Bits -----------------------------------------------------
        .equiv RP14R0,  0x0000
        .equiv RP14R1,  0x0001
        .equiv RP14R2,  0x0002
        .equiv RP14R3,  0x0003
        .equiv RP14R4,  0x0004
        .equiv RP15R0,  0x0008
        .equiv RP15R1,  0x0009
        .equiv RP15R2,  0x000A
        .equiv RP15R3,  0x000B
        .equiv RP15R4,  0x000C


;----- RPOR8 Bits -----------------------------------------------------
        .equiv RP16R0,  0x0000
        .equiv RP16R1,  0x0001
        .equiv RP16R2,  0x0002
        .equiv RP16R3,  0x0003
        .equiv RP16R4,  0x0004
        .equiv RP17R0,  0x0008
        .equiv RP17R1,  0x0009
        .equiv RP17R2,  0x000A
        .equiv RP17R3,  0x000B
        .equiv RP17R4,  0x000C


;----- RPOR9 Bits -----------------------------------------------------
        .equiv RP18R0,  0x0000
        .equiv RP18R1,  0x0001
        .equiv RP18R2,  0x0002
        .equiv RP18R3,  0x0003
        .equiv RP18R4,  0x0004
        .equiv RP19R0,  0x0008
        .equiv RP19R1,  0x0009
        .equiv RP19R2,  0x000A
        .equiv RP19R3,  0x000B
        .equiv RP19R4,  0x000C


;----- RPOR10 Bits -----------------------------------------------------
        .equiv RP20R0,  0x0000
        .equiv RP20R1,  0x0001
        .equiv RP20R2,  0x0002
        .equiv RP20R3,  0x0003
        .equiv RP20R4,  0x0004
        .equiv RP21R0,  0x0008
        .equiv RP21R1,  0x0009
        .equiv RP21R2,  0x000A
        .equiv RP21R3,  0x000B
        .equiv RP21R4,  0x000C


;----- RPOR11 Bits -----------------------------------------------------
        .equiv RP22R0,  0x0000
        .equiv RP22R1,  0x0001
        .equiv RP22R2,  0x0002
        .equiv RP22R3,  0x0003
        .equiv RP22R4,  0x0004
        .equiv RP23R0,  0x0008
        .equiv RP23R1,  0x0009
        .equiv RP23R2,  0x000A
        .equiv RP23R3,  0x000B
        .equiv RP23R4,  0x000C


;----- RPOR12 Bits -----------------------------------------------------
        .equiv RP24R0,  0x0000
        .equiv RP24R1,  0x0001
        .equiv RP24R2,  0x0002
        .equiv RP24R3,  0x0003
        .equiv RP24R4,  0x0004
        .equiv RP25R0,  0x0008
        .equiv RP25R1,  0x0009
        .equiv RP25R2,  0x000A
        .equiv RP25R3,  0x000B
        .equiv RP25R4,  0x000C


;----- RCON Bits -----------------------------------------------------
        .equiv POR,     0x0000
        .equiv BOR,     0x0001
        .equiv IDLE,    0x0002
        .equiv SLEEP,   0x0003
        .equiv WDTO,    0x0004
        .equiv SWDTEN,  0x0005
        .equiv SWR,     0x0006
        .equiv EXTR,    0x0007
        .equiv VREGS,   0x0008
        .equiv CM,      0x0009
        .equiv DPSLP,   0x000A
        .equiv IOPUWR,  0x000E
        .equiv TRAPR,   0x000F

        .equiv PMSLP,   0x0008


;----- OSCCON Bits -----------------------------------------------------
        .equiv OSWEN,   0x0000
        .equiv SOSCEN,  0x0001
        .equiv POSCEN,  0x0002
        .equiv CF,      0x0003
        .equiv LOCK,    0x0005
        .equiv IOLOCK,  0x0006
        .equiv CLKLOCK, 0x0007

        .equiv LPOSCEN, 0x0001
        .equiv NOSC0,   0x0008
        .equiv NOSC1,   0x0009
        .equiv NOSC2,   0x000A
        .equiv COSC0,   0x000C
        .equiv COSC1,   0x000D
        .equiv COSC2,   0x000E


;----- CLKDIV Bits -----------------------------------------------------
        .equiv PLLEN,   0x0005
        .equiv DOZEN,   0x000B
        .equiv ROI,     0x000F

        .equiv CPDIV0,  0x0006
        .equiv CPDIV1,  0x0007
        .equiv RCDIV0,  0x0008
        .equiv RCDIV1,  0x0009
        .equiv RCDIV2,  0x000A
        .equiv DOZE0,   0x000C
        .equiv DOZE1,   0x000D
        .equiv DOZE2,   0x000E


;----- OSCTUN Bits -----------------------------------------------------
        .equiv TUN0,    0x0000
        .equiv TUN1,    0x0001
        .equiv TUN2,    0x0002
        .equiv TUN3,    0x0003
        .equiv TUN4,    0x0004
        .equiv TUN5,    0x0005


;----- REFOCON Bits -----------------------------------------------------
        .equiv ROSEL,   0x000C
        .equiv ROSSLP,  0x000D
        .equiv ROEN,    0x000F

        .equiv RODIV0,  0x0008
        .equiv RODIV1,  0x0009
        .equiv RODIV2,  0x000A
        .equiv RODIV3,  0x000B
        .equiv ROON,    0x000F


;----- DSCON Bits -----------------------------------------------------
        .equiv RELEASE, 0x0000
        .equiv DSBOR,   0x0001
        .equiv DSEN,    0x000F


;----- DSWAKE Bits -----------------------------------------------------
        .equiv DSPOR,   0x0000
        .equiv DSMCLR,  0x0002
        .equiv DSRTC,   0x0003
        .equiv DSWDT,   0x0004
        .equiv DSFLT,   0x0007
        .equiv DSINT0,  0x0008


;----- DSGPR0 Bits -----------------------------------------------------
        .equiv DSGPR0,  0x0000
        .equiv DSGPR1,  0x0001
        .equiv DSGPR2,  0x0002
        .equiv DSGPR3,  0x0003
        .equiv DSGPR4,  0x0004
        .equiv DSGPR5,  0x0005
        .equiv DSGPR6,  0x0006
        .equiv DSGPR7,  0x0007
        .equiv DSGPR8,  0x0008
        .equiv DSGPR9,  0x0009
        .equiv DSGPR10, 0x000A
        .equiv DSGPR11, 0x000B
        .equiv DSGPR12, 0x000C
        .equiv DSGPR13, 0x000D
        .equiv DSGPR14, 0x000E
        .equiv DSGPR15, 0x000F


;----- DSGPR1 Bits -----------------------------------------------------
       ;.equiv DSGPR0,  0x0000
       ;.equiv DSGPR1,  0x0001
       ;.equiv DSGPR2,  0x0002
       ;.equiv DSGPR3,  0x0003
       ;.equiv DSGPR4,  0x0004
       ;.equiv DSGPR5,  0x0005
       ;.equiv DSGPR6,  0x0006
       ;.equiv DSGPR7,  0x0007
       ;.equiv DSGPR8,  0x0008
       ;.equiv DSGPR9,  0x0009
       ;.equiv DSGPR10, 0x000A
       ;.equiv DSGPR11, 0x000B
       ;.equiv DSGPR12, 0x000C
       ;.equiv DSGPR13, 0x000D
       ;.equiv DSGPR14, 0x000E
       ;.equiv DSGPR15, 0x000F


;----- NVMCON Bits -----------------------------------------------------
        .equiv ERASE,   0x0006
        .equiv WRERR,   0x000D
        .equiv WREN,    0x000E
        .equiv WR,      0x000F

        .equiv NVMOP0,  0x0000
        .equiv NVMOP1,  0x0001
        .equiv NVMOP2,  0x0002
        .equiv NVMOP3,  0x0003

        .equiv PROGOP0, 0x0000
        .equiv PROGOP1, 0x0001
        .equiv PROGOP2, 0x0002
        .equiv PROGOP3, 0x0003



;----- PMD1 Bits -----------------------------------------------------
        .equiv ADC1MD,  0x0000
        .equiv SPI1MD,  0x0003
        .equiv SPI2MD,  0x0004
        .equiv U1MD,    0x0005
        .equiv U2MD,    0x0006
        .equiv I2C1MD,  0x0007
        .equiv T1MD,    0x000B
        .equiv T2MD,    0x000C
        .equiv T3MD,    0x000D
        .equiv T4MD,    0x000E
        .equiv T5MD,    0x000F


;----- PMD2 Bits -----------------------------------------------------
        .equiv OC1MD,   0x0000
        .equiv OC2MD,   0x0001
        .equiv OC3MD,   0x0002
        .equiv OC4MD,   0x0003
        .equiv OC5MD,   0x0004
        .equiv IC1MD,   0x0008
        .equiv IC2MD,   0x0009
        .equiv IC3MD,   0x000A
        .equiv IC4MD,   0x000B
        .equiv IC5MD,   0x000C


;----- PMD3 Bits -----------------------------------------------------
        .equiv I2C2MD,  0x0001
        .equiv CRCMD,   0x0007
        .equiv PMPMD,   0x0008
        .equiv RTCCMD,  0x0009
        .equiv CMPMD,   0x000A

        .equiv CRCPMD,  0x0007


;----- PMD4 Bits -----------------------------------------------------
        .equiv USB1MD,  0x0000
        .equiv LVDMD,   0x0001
        .equiv CTMUMD,  0x0002
        .equiv REFOMD,  0x0003
        .equiv UPWMMD,  0x0006




;  Some useful macros for PWRSAV instructions

   .equiv SLEEP_MODE, 0x0
   .equiv IDLE_MODE, 0x1


;==========================================================================
;
;   Configuration Words
;
;   Configuration words exist in Program Space and their locations are
;   defined in the device linker script. They can be set in source code
;   or in the MPLAB IDE. Each configuration word should be specified
;   only once (multiple settings may be combined.)
;
;==========================================================================
;
;  Setting configuration words using macros:
;
;  The following macro named 'config' can be used to set configuration words:
;
        .macro config REG, VALUE
        .pushsection \REG.sec, code
        .global \REG
\REG:   .pword \VALUE
        .popsection
        .endm
;
;  For example, to set CONFIG_REG using the macro above, the following line
;  can be pasted only at the beginning of the assembly source code,
;  immediately below the '.include' directive.
;
;        config __CONFIG_REG, SETTING_A & SETTING_B
;
;  Note that the 'config' macro takes two arguments: the first is the name
;  of a configuration word (in this case, __CONFIG_REG), the second argument
;  is a boolean expression that may include multiple settings.
;  The example above would enable SETTING_A and also SETTING_B.
;
;  A description of all possible settings for each configuration word
;  appears below.
;
;==========================================================================
;
;  Setting configuration words without using macros:
;
;  To set configuration words without using the 'config' macro,
;  use the following format:
;
;           .section __CONFIG_REG.sec, code
;           .global __CONFIG_REG
;__CONFIG_REG: .pword SETTING_A & SETTING_B
;
;  This source code is equivalent to the expanded macro from the previous
;  example.
;
;==========================================================================


;----- CONFIG4 (0xabf8) --------------------------------------------------
;
;  The following settings are available for CONFIG4:
;
;   DSWDT Postscale Select:
;     DSWDTPS_DSWDTPS0     1:2 (2.1 ms)
;     DSWDTPS_DSWDTPS1     1:8 (8.3 ms)
;     DSWDTPS_DSWDTPS2     1:32 (33 ms)
;     DSWDTPS_DSWDTPS3     1:128 (132 ms)
;     DSWDTPS_DSWDTPS4     1:512 (528 ms)
;     DSWDTPS_DSWDTPS5     1:2,048 (2.1 seconds)
;     DSWDTPS_DSWDTPS6     1:8,192 (8.5 seconds)
;     DSWDTPS_DSWDTPS7     1:32,768 (34 seconds)
;     DSWDTPS_DSWDTPS8     1:131,072 (135 seconds)
;     DSWDTPS_DSWDTPS9     1:524,288 (9 minutes)
;     DSWDTPS_DSWDTPSA     1:2,097,152 (36 minutes)
;     DSWDTPS_DSWDTPSB     1:8,388,608 (2.4 hours)
;     DSWDTPS_DSWDTPSC     1:33,554,432 (9.6 hours)
;     DSWDTPS_DSWDTPSD     1:134,217,728 (38.5 hours)
;     DSWDTPS_DSWDTPSE     1:536,870,912 (6.4 days)
;     DSWDTPS_DSWDTPSF     1:2,147,483,648 (25.7 days)
;
;   Deep Sleep Watchdog Timer Oscillator Select:
;     DSWDTOSC_SOSC        DSWDT uses Secondary Oscillator (SOSC)
;     DSWDTOSC_LPRC        DSWDT uses Low Power RC Oscillator (LPRC)
;
;   RTCC Reference Oscillator Select:
;     RTCOSC_LPRC          RTCC uses Low Power RC Oscillator (LPRC)
;     RTCOSC_SOSC          RTCC uses Secondary Oscillator (SOSC)
;
;   Deep Sleep BOR Enable bit:
;     DSBOREN_OFF          BOR disabled in Deep Sleep
;     DSBOREN_ON           BOR enabled in Deep Sleep
;
;   Deep Sleep Watchdog Timer:
;     DSWDTEN_OFF          DSWDT disabled
;     DSWDTEN_ON           DSWDT enabled
;
        .equiv DSWDTPS_DSWDTPS0, 0xFFF0 ; 1:2 (2.1 ms)
        .equiv DSWDTPS_DSWDTPS1, 0xFFF1 ; 1:8 (8.3 ms)
        .equiv DSWDTPS_DSWDTPS2, 0xFFF2 ; 1:32 (33 ms)
        .equiv DSWDTPS_DSWDTPS3, 0xFFF3 ; 1:128 (132 ms)
        .equiv DSWDTPS_DSWDTPS4, 0xFFF4 ; 1:512 (528 ms)
        .equiv DSWDTPS_DSWDTPS5, 0xFFF5 ; 1:2,048 (2.1 seconds)
        .equiv DSWDTPS_DSWDTPS6, 0xFFF6 ; 1:8,192 (8.5 seconds)
        .equiv DSWDTPS_DSWDTPS7, 0xFFF7 ; 1:32,768 (34 seconds)
        .equiv DSWDTPS_DSWDTPS8, 0xFFF8 ; 1:131,072 (135 seconds)
        .equiv DSWDTPS_DSWDTPS9, 0xFFF9 ; 1:524,288 (9 minutes)
        .equiv DSWDTPS_DSWDTPSA, 0xFFFA ; 1:2,097,152 (36 minutes)
        .equiv DSWDTPS_DSWDTPSB, 0xFFFB ; 1:8,388,608 (2.4 hours)
        .equiv DSWDTPS_DSWDTPSC, 0xFFFC ; 1:33,554,432 (9.6 hours)
        .equiv DSWDTPS_DSWDTPSD, 0xFFFD ; 1:134,217,728 (38.5 hours)
        .equiv DSWDTPS_DSWDTPSE, 0xFFFE ; 1:536,870,912 (6.4 days)
        .equiv DSWDTPS_DSWDTPSF, 0xFFFF ; 1:2,147,483,648 (25.7 days)

        .equiv DSWDTOSC_SOSC,   0xFFEF ; DSWDT uses Secondary Oscillator (SOSC)
        .equiv DSWDTOSC_LPRC,   0xFFFF ; DSWDT uses Low Power RC Oscillator (LPRC)

        .equiv RTCOSC_LPRC,     0xFFDF ; RTCC uses Low Power RC Oscillator (LPRC)
        .equiv RTCOSC_SOSC,     0xFFFF ; RTCC uses Secondary Oscillator (SOSC)

        .equiv DSBOREN_OFF,     0xFFBF ; BOR disabled in Deep Sleep
        .equiv DSBOREN_ON,      0xFFFF ; BOR enabled in Deep Sleep

        .equiv DSWDTEN_OFF,     0xFF7F ; DSWDT disabled
        .equiv DSWDTEN_ON,      0xFFFF ; DSWDT enabled


;----- CONFIG3 (0xabfa) --------------------------------------------------
;
;  The following settings are available for CONFIG3:
;
;   Write Protection Flash Page Segment Boundary:
;     WPFP_WPFP0           Page 0 (0x0)
;     WPFP_WPFP1           Page 1 (0x400)
;     WPFP_WPFP2           Page 2 (0x800)
;     WPFP_WPFP3           Page 3 (0xC00)
;     WPFP_WPFP4           Page 4 (0x1000)
;     WPFP_WPFP5           Page 5 (0x1400)
;     WPFP_WPFP6           Page 6 (0x1800)
;     WPFP_WPFP7           Page 7 (0x1C00)
;     WPFP_WPFP8           Page 8 (0x2000)
;     WPFP_WPFP9           Page 9 (0x2400)
;     WPFP_WPFP10          Page 10 (0x2800)
;     WPFP_WPFP11          Page 11 (0x2C00)
;     WPFP_WPFP12          Page 12 (0x3000)
;     WPFP_WPFP13          Page 13 (0x3400)
;     WPFP_WPFP14          Page 14 (0x3800)
;     WPFP_WPFP15          Page 15 (0x3C00)
;     WPFP_WPFP16          Page 16 (0x4000)
;     WPFP_WPFP17          Page 17 (0x4400)
;     WPFP_WPFP18          Page 18 (0x4800)
;     WPFP_WPFP19          Page 19 (0x4C00)
;     WPFP_WPFP20          Page 20 (0x5000)
;     WPFP_WPFP21          Page 21 (0x5400)
;     WPFP_WPFP22          Page 22 (0x5800)
;     WPFP_WPFP23          Page 23 (0x5C00)
;     WPFP_WPFP24          Page 24 (0x6000)
;     WPFP_WPFP25          Page 25 (0x6400)
;     WPFP_WPFP26          Page 26 (0x6800)
;     WPFP_WPFP27          Page 27 (0x6C00)
;     WPFP_WPFP28          Page 28 (0x7000)
;     WPFP_WPFP29          Page 29 (0x7400)
;     WPFP_WPFP30          Page 30 (0x7800)
;     WPFP_WPFP31          Page 31 (0x7C00)
;     WPFP_WPFP32          Page 32 (0x8000)
;     WPFP_WPFP33          Page 33 (0x8400)
;     WPFP_WPFP34          Page 34 (0x8800)
;     WPFP_WPFP35          Page 35 (0x8C00)
;     WPFP_WPFP36          Page 36 (0x9000)
;     WPFP_WPFP37          Page 37 (0x9400)
;     WPFP_WPFP38          Page 38 (0x9800)
;     WPFP_WPFP39          Page 39 (0x9C00)
;     WPFP_WPFP40          Page 40 (0xA000)
;     WPFP_WPFP41          Page 41 (0xA400)
;     WPFP_WPFP42          Page 42 (0xA800)
;     WPFP_WPFP63          Highest Page (same as page 42)
;
;   Secondary Oscillator Pin Mode Select:
;     SOSCSEL_IO           SOSC pins have digital I/O functions (RA4, RB4)
;     SOSCSEL_LPSOSC       SOSC pins in Low-Power (low drive-strength) Oscillator Mode
;     SOSCSEL_SOSC         SOSC pins in Default (high drive-strength) Oscillator Mode
;
;   Voltage Regulator Wake-up Time Select:
;     WUTSEL_FST           Fast regulator start-up time used
;     WUTSEL_LEG           Default regulator start-up time used
;
;   Segment Write Protection Disable:
;     WPDIS_WPEN           Segmented code protection enabled
;     WPDIS_WPDIS          Segmented code protection disabled
;
;   Write Protect Configuration Page Select:
;     WPCFG_WPCFGEN        Last page and Flash Configuration words are code-protected
;     WPCFG_WPCFGDIS       Last page and Flash Configuration words are unprotected
;
;   Segment Write Protection End Page Select:
;     WPEND_WPSTARTMEM     Write Protect from page 0 to WPFP
;     WPEND_WPENDMEM       Write Protect from WPFP to the last page of memory
;
        .equiv WPFP_WPFP0,      0xFFC0 ; Page 0 (0x0)
        .equiv WPFP_WPFP1,      0xFFC1 ; Page 1 (0x400)
        .equiv WPFP_WPFP2,      0xFFC2 ; Page 2 (0x800)
        .equiv WPFP_WPFP3,      0xFFC3 ; Page 3 (0xC00)
        .equiv WPFP_WPFP4,      0xFFC4 ; Page 4 (0x1000)
        .equiv WPFP_WPFP5,      0xFFC5 ; Page 5 (0x1400)
        .equiv WPFP_WPFP6,      0xFFC6 ; Page 6 (0x1800)
        .equiv WPFP_WPFP7,      0xFFC7 ; Page 7 (0x1C00)
        .equiv WPFP_WPFP8,      0xFFC8 ; Page 8 (0x2000)
        .equiv WPFP_WPFP9,      0xFFC9 ; Page 9 (0x2400)
        .equiv WPFP_WPFP10,     0xFFCA ; Page 10 (0x2800)
        .equiv WPFP_WPFP11,     0xFFCB ; Page 11 (0x2C00)
        .equiv WPFP_WPFP12,     0xFFCC ; Page 12 (0x3000)
        .equiv WPFP_WPFP13,     0xFFCD ; Page 13 (0x3400)
        .equiv WPFP_WPFP14,     0xFFCE ; Page 14 (0x3800)
        .equiv WPFP_WPFP15,     0xFFCF ; Page 15 (0x3C00)
        .equiv WPFP_WPFP16,     0xFFD0 ; Page 16 (0x4000)
        .equiv WPFP_WPFP17,     0xFFD1 ; Page 17 (0x4400)
        .equiv WPFP_WPFP18,     0xFFD2 ; Page 18 (0x4800)
        .equiv WPFP_WPFP19,     0xFFD3 ; Page 19 (0x4C00)
        .equiv WPFP_WPFP20,     0xFFD4 ; Page 20 (0x5000)
        .equiv WPFP_WPFP21,     0xFFD5 ; Page 21 (0x5400)
        .equiv WPFP_WPFP22,     0xFFD6 ; Page 22 (0x5800)
        .equiv WPFP_WPFP23,     0xFFD7 ; Page 23 (0x5C00)
        .equiv WPFP_WPFP24,     0xFFD8 ; Page 24 (0x6000)
        .equiv WPFP_WPFP25,     0xFFD9 ; Page 25 (0x6400)
        .equiv WPFP_WPFP26,     0xFFDA ; Page 26 (0x6800)
        .equiv WPFP_WPFP27,     0xFFDB ; Page 27 (0x6C00)
        .equiv WPFP_WPFP28,     0xFFDC ; Page 28 (0x7000)
        .equiv WPFP_WPFP29,     0xFFDD ; Page 29 (0x7400)
        .equiv WPFP_WPFP30,     0xFFDE ; Page 30 (0x7800)
        .equiv WPFP_WPFP31,     0xFFDF ; Page 31 (0x7C00)
        .equiv WPFP_WPFP32,     0xFFE0 ; Page 32 (0x8000)
        .equiv WPFP_WPFP33,     0xFFE1 ; Page 33 (0x8400)
        .equiv WPFP_WPFP34,     0xFFE2 ; Page 34 (0x8800)
        .equiv WPFP_WPFP35,     0xFFE3 ; Page 35 (0x8C00)
        .equiv WPFP_WPFP36,     0xFFE4 ; Page 36 (0x9000)
        .equiv WPFP_WPFP37,     0xFFE5 ; Page 37 (0x9400)
        .equiv WPFP_WPFP38,     0xFFE6 ; Page 38 (0x9800)
        .equiv WPFP_WPFP39,     0xFFE7 ; Page 39 (0x9C00)
        .equiv WPFP_WPFP40,     0xFFE8 ; Page 40 (0xA000)
        .equiv WPFP_WPFP41,     0xFFE9 ; Page 41 (0xA400)
        .equiv WPFP_WPFP42,     0xFFEA ; Page 42 (0xA800)
        .equiv WPFP_WPFP63,     0xFFFF ; Highest Page (same as page 42)

        .equiv SOSCSEL_IO,      0xFCFF ; SOSC pins have digital I/O functions (RA4, RB4)
        .equiv SOSCSEL_LPSOSC,  0xFDFF ; SOSC pins in Low-Power (low drive-strength) Oscillator Mode
        .equiv SOSCSEL_SOSC,    0xFFFF ; SOSC pins in Default (high drive-strength) Oscillator Mode

        .equiv WUTSEL_FST,      0xF7FF ; Fast regulator start-up time used
        .equiv WUTSEL_LEG,      0xFFFF ; Default regulator start-up time used

        .equiv WPDIS_WPEN,      0xDFFF ; Segmented code protection enabled
        .equiv WPDIS_WPDIS,     0xFFFF ; Segmented code protection disabled

        .equiv WPCFG_WPCFGEN,   0xBFFF ; Last page and Flash Configuration words are code-protected
        .equiv WPCFG_WPCFGDIS,  0xFFFF ; Last page and Flash Configuration words are unprotected

        .equiv WPEND_WPSTARTMEM, 0x7FFF ; Write Protect from page 0 to WPFP
        .equiv WPEND_WPENDMEM,  0xFFFF ; Write Protect from WPFP to the last page of memory


;----- CONFIG2 (0xabfc) --------------------------------------------------
;
;  The following settings are available for CONFIG2:
;
;   Primary Oscillator Select:
;     POSCMOD_EC           EC Oscillator mode selected
;     POSCMOD_XT           XT Oscillator mode selected
;     POSCMOD_HS           HS Oscillator mode selected
;     POSCMOD_NONE         Primary Oscillator disabled
;
;   I2C1 Pin Select bit:
;     I2C1SEL_SEC          Use alternate SCL1/SDA1 pins for I2C1
;     I2C1SEL_PRI          Use default SCL1/SDA1 pins for I2C1 
;
;   IOLOCK One-Way Set Enable:
;     IOL1WAY_OFF          The IOLOCK bit can be set and cleared using the unlock sequence
;     IOL1WAY_ON           Once set, the IOLOCK bit cannot be cleared
;
;   OSCO Pin Configuration:
;     OSCIOFNC_ON          OSCO pin functions as port I/O (RA3)
;     OSCIOFNC_OFF         OSCO pin functions as clock output (CLKO)
;
;   Clock Switching and Fail-Safe Clock Monitor:
;     FCKSM_CSECME         Sw Enabled, Mon Enabled
;     FCKSM_CSECMD         Sw Enabled, Mon Disabled
;     FCKSM_CSDCMD         Sw Disabled, Mon Disabled
;
;   Initial Oscillator Select:
;     FNOSC_FRC            Fast RC Oscillator (FRC)
;     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL module (FRCPLL)
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator with PLL module (XTPLL, HSPLL, ECPLL)
;     FNOSC_SOSC           Secondary Oscillator (SOSC)
;     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
;     FNOSC_FRCDIV         Fast RC Oscillator with Postscaler (FRCDIV)
;
;   96MHz PLL Startup Select:
;     PLL96MHZ_OFF         96 MHz PLL Startup is enabled by user in software( controlled with the PLLEN bit)
;     PLL96MHZ_ON          96 MHz PLL Startup is enabled automatically on start-up
;
;   USB 96 MHz PLL Prescaler Select:
;     PLLDIV_NODIV         Oscillator input used directly (4 MHz input)
;     PLLDIV_DIV2          Oscillator input divided by 2 (8 MHz input)
;     PLLDIV_DIV3          Oscillator input divided by 3 (12 MHz input)
;     PLLDIV_DIV4          Oscillator input divided by 4 (16 MHz input)
;     PLLDIV_DIV5          Oscillator input divided by 5 (20 MHz input)
;     PLLDIV_DIV6          Oscillator input divided by 6 (24 MHz input)
;     PLLDIV_DIV8          Oscillator input divided by 8 (32 MHz input)
;     PLLDIV_DIV12         Oscillator input divided by 12 (48 MHz input)
;
;   Internal External Switchover:
;     IESO_OFF             IESO mode (Two-Speed Start-up) disabled
;     IESO_ON              IESO mode (Two-Speed Start-up) enabled
;
        .equiv POSCMOD_EC,      0xFFFC ; EC Oscillator mode selected
        .equiv POSCMOD_XT,      0xFFFD ; XT Oscillator mode selected
        .equiv POSCMOD_HS,      0xFFFE ; HS Oscillator mode selected
        .equiv POSCMOD_NONE,    0xFFFF ; Primary Oscillator disabled

        .equiv I2C1SEL_SEC,     0xFFFB ; Use alternate SCL1/SDA1 pins for I2C1
        .equiv I2C1SEL_PRI,     0xFFFF ; Use default SCL1/SDA1 pins for I2C1 

        .equiv IOL1WAY_OFF,     0xFFEF ; The IOLOCK bit can be set and cleared using the unlock sequence
        .equiv IOL1WAY_ON,      0xFFFF ; Once set, the IOLOCK bit cannot be cleared

        .equiv OSCIOFNC_ON,     0xFFDF ; OSCO pin functions as port I/O (RA3)
        .equiv OSCIOFNC_OFF,    0xFFFF ; OSCO pin functions as clock output (CLKO)

        .equiv FCKSM_CSECME,    0xFF3F ; Sw Enabled, Mon Enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Sw Enabled, Mon Disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Sw Disabled, Mon Disabled

        .equiv FNOSC_FRC,       0xF8FF ; Fast RC Oscillator (FRC)
        .equiv FNOSC_FRCPLL,    0xF9FF ; Fast RC Oscillator with Postscaler and PLL module (FRCPLL)
        .equiv FNOSC_PRI,       0xFAFF ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFBFF ; Primary Oscillator with PLL module (XTPLL, HSPLL, ECPLL)
        .equiv FNOSC_SOSC,      0xFCFF ; Secondary Oscillator (SOSC)
        .equiv FNOSC_LPRC,      0xFDFF ; Low-Power RC Oscillator (LPRC)
        .equiv FNOSC_FRCDIV,    0xFFFF ; Fast RC Oscillator with Postscaler (FRCDIV)

        .equiv PLL96MHZ_OFF,    0xF7FF ; 96 MHz PLL Startup is enabled by user in software( controlled with the PLLEN bit)
        .equiv PLL96MHZ_ON,     0xFFFF ; 96 MHz PLL Startup is enabled automatically on start-up

        .equiv PLLDIV_NODIV,    0x8FFF ; Oscillator input used directly (4 MHz input)
        .equiv PLLDIV_DIV2,     0x9FFF ; Oscillator input divided by 2 (8 MHz input)
        .equiv PLLDIV_DIV3,     0xAFFF ; Oscillator input divided by 3 (12 MHz input)
        .equiv PLLDIV_DIV4,     0xBFFF ; Oscillator input divided by 4 (16 MHz input)
        .equiv PLLDIV_DIV5,     0xCFFF ; Oscillator input divided by 5 (20 MHz input)
        .equiv PLLDIV_DIV6,     0xDFFF ; Oscillator input divided by 6 (24 MHz input)
        .equiv PLLDIV_DIV8,     0xEFFF ; Oscillator input divided by 8 (32 MHz input)
        .equiv PLLDIV_DIV12,    0xFFFF ; Oscillator input divided by 12 (48 MHz input)

        .equiv IESO_OFF,        0x7FFF ; IESO mode (Two-Speed Start-up) disabled
        .equiv IESO_ON,         0xFFFF ; IESO mode (Two-Speed Start-up) enabled


;----- CONFIG1 (0xabfe) --------------------------------------------------
;
;  The following settings are available for CONFIG1:
;
;   Watchdog Timer Postscaler:
;     WDTPS_PS1            1:1
;     WDTPS_PS2            1:2
;     WDTPS_PS4            1:4
;     WDTPS_PS8            1:8
;     WDTPS_PS16           1:16
;     WDTPS_PS32           1:32
;     WDTPS_PS64           1:64
;     WDTPS_PS128          1:128
;     WDTPS_PS256          1:256
;     WDTPS_PS512          1:512
;     WDTPS_PS1024         1:1,024
;     WDTPS_PS2048         1:2,048
;     WDTPS_PS4096         1:4,096
;     WDTPS_PS8192         1:8,192
;     WDTPS_PS16384        1:16,384
;     WDTPS_PS32768        1:32,768
;
;   WDT Prescaler:
;     FWPSA_PR32           Prescaler ratio of 1:32
;     FWPSA_PR128          Prescaler ratio of 1:128
;
;   Windowed WDT:
;     WINDIS_ON            Windowed Watchdog Timer enabled; FWDTEN must be 1
;     WINDIS_OFF           Standard Watchdog Timer enabled,(Windowed-mode is disabled)
;
;   Watchdog Timer:
;     FWDTEN_OFF           Watchdog Timer is disabled
;     FWDTEN_ON            Watchdog Timer is enabled
;
;   Emulator Pin Placement Select bits:
;     ICS_PGx3             Emulator functions are shared with PGEC3/PGED3
;     ICS_PGx2             Emulator functions are shared with PGEC2/PGED2
;     ICS_PGx1             Emulator functions are shared with PGEC1/PGED1
;
;   General Segment Write Protect:
;     GWRP_ON              Writes to program memory are disabled
;     GWRP_OFF             Writes to program memory are allowed
;
;   General Segment Code Protect:
;     GCP_ON               Code protection is enabled for the entire program memory space
;     GCP_OFF              Code protection is disabled
;
;   JTAG Port Enable:
;     JTAGEN_OFF           JTAG port is disabled
;     JTAGEN_ON            JTAG port is enabled
;
        .equiv WDTPS_PS1,       0x7FF0 ; 1:1
        .equiv WDTPS_PS2,       0x7FF1 ; 1:2
        .equiv WDTPS_PS4,       0x7FF2 ; 1:4
        .equiv WDTPS_PS8,       0x7FF3 ; 1:8
        .equiv WDTPS_PS16,      0x7FF4 ; 1:16
        .equiv WDTPS_PS32,      0x7FF5 ; 1:32
        .equiv WDTPS_PS64,      0x7FF6 ; 1:64
        .equiv WDTPS_PS128,     0x7FF7 ; 1:128
        .equiv WDTPS_PS256,     0x7FF8 ; 1:256
        .equiv WDTPS_PS512,     0x7FF9 ; 1:512
        .equiv WDTPS_PS1024,    0x7FFA ; 1:1,024
        .equiv WDTPS_PS2048,    0x7FFB ; 1:2,048
        .equiv WDTPS_PS4096,    0x7FFC ; 1:4,096
        .equiv WDTPS_PS8192,    0x7FFD ; 1:8,192
        .equiv WDTPS_PS16384,   0x7FFE ; 1:16,384
        .equiv WDTPS_PS32768,   0x7FFF ; 1:32,768

        .equiv FWPSA_PR32,      0x7FEF ; Prescaler ratio of 1:32
        .equiv FWPSA_PR128,     0x7FFF ; Prescaler ratio of 1:128

        .equiv WINDIS_ON,       0x7FBF ; Windowed Watchdog Timer enabled; FWDTEN must be 1
        .equiv WINDIS_OFF,      0x7FFF ; Standard Watchdog Timer enabled,(Windowed-mode is disabled)

        .equiv FWDTEN_OFF,      0x7F7F ; Watchdog Timer is disabled
        .equiv FWDTEN_ON,       0x7FFF ; Watchdog Timer is enabled

        .equiv ICS_PGx3,        0x7DFF ; Emulator functions are shared with PGEC3/PGED3
        .equiv ICS_PGx2,        0x7EFF ; Emulator functions are shared with PGEC2/PGED2
        .equiv ICS_PGx1,        0x7FFF ; Emulator functions are shared with PGEC1/PGED1

        .equiv GWRP_ON,         0x6FFF ; Writes to program memory are disabled
        .equiv GWRP_OFF,        0x7FFF ; Writes to program memory are allowed

        .equiv GCP_ON,          0x5FFF ; Code protection is enabled for the entire program memory space
        .equiv GCP_OFF,         0x7FFF ; Code protection is disabled

        .equiv JTAGEN_OFF,      0x3FFF ; JTAG port is disabled
        .equiv JTAGEN_ON,       0x7FFF ; JTAG port is enabled


.LIST
