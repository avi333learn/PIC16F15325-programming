/* 
 * File:   CONFIG_PIC16F15325.h
 * Author: Avijit Singh Kalsi
 *
 * Created on June 4, 2021, 2:22 PM
 */

#ifndef PIC16F_CONFIG_H
#define	PIC16F_CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* CONFIG_PIC16F15325_H */

// CONFIG1
#pragma config FEXTOSC = OFF    // External Oscillator mode selection bits (Oscillator not enabled)
#pragma config RSTOSC = HFINTPLL// Power-up default value for COSC bits (HFINTOSC with 2x PLL, with OSCFRQ = 16 MHz and CDIV = 1:1 (FOSC = 32 MHz))
#pragma config CLKOUTEN = OFF   // Clock Out Enable bit (CLKOUT function is disabled; i/o or oscillator function on OSC2)
#pragma config CSWEN = OFF      // Clock Switch Enable bit (The NOSC and NDIV bits cannot be changed by user software)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (FSCM timer disabled)

// CONFIG2
#pragma config MCLRE = OFF      // Master Clear Enable bit (MCLR pin function is port defined function)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config LPBOREN = OFF    // Low-Power BOR enable bit (ULPBOR disabled)
#pragma config BOREN = OFF      // Brown-out reset enable bits (Brown-out reset disabled)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (VBOR) set to 1.9V on LF, and 2.45V on F Devices)
#pragma config ZCD = OFF        // Zero-cross detect disable (Zero-cross detect circuit is disabled at POR.)
#pragma config PPS1WAY = OFF    // Peripheral Pin Select one-way control (The PPSLOCK bit can be set and cleared repeatedly by software)
#pragma config STVREN = OFF     // Stack Overflow/Underflow Reset Enable bit (Stack Overflow or Underflow will not cause a reset)

// CONFIG3
#pragma config WDTCPS = WDTCPS_31// WDT Period Select bits (Divider ratio 1:65536; software control of WDTPS)
#pragma config WDTE = OFF       // WDT operating mode (WDT Disabled, SWDTEN is ignored)
#pragma config WDTCWS = WDTCWS_7// WDT Window Select bits (window always open (100%); software control; keyed access not required)
#pragma config WDTCCS = SC      // WDT input clock selector (Software Control)

// CONFIG4
#pragma config BBSIZE = BB512   // Boot Block Size Selection bits (512 words boot block size)
#pragma config BBEN = OFF       // Boot Block Enable bit (Boot Block disabled)
#pragma config SAFEN = OFF      // SAF Enable bit (SAF disabled)
#pragma config WRTAPP = OFF     // Application Block Write Protection bit (Application Block not write protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block not write protected)
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration Register not write protected)
#pragma config WRTSAF = OFF     // Storage Area Flash Write Protection bit (SAF not write protected)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (High Voltage on MCLR/Vpp must be used for programming)

// CONFIG5
#pragma config CP = OFF         // UserNVM Program memory code protection bit (UserNVM code protection disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include "pic16f15325.h"

extern volatile PORTAbits_t PORTAbits __attribute__((__sfr__));
extern volatile TRISAbits_t TRISAbits __attribute__((__sfr__));
extern volatile PORTCbits_t PORTCbits __attribute__((__sfr__));
extern volatile TRISCbits_t TRISCbits __attribute__((__sfr__));
extern volatile PORTAbits_t PORTAbits __attribute__((__sfr__));
extern volatile LATAbits_t LATAbits __attribute__((__sfr__));
extern volatile LATCbits_t LATCbits __attribute__((__sfr__));
extern volatile ADRESLbits_t ADRESLbits __attribute__((__sfr__));
extern volatile ADRESHbits_t ADRESHbits __attribute__((__sfr__));
extern volatile ADCON0bits_t ADCON0bits __attribute__((__sfr__));
extern volatile ADCON1bits_t ADCON1bits __attribute__((__sfr__));
extern volatile ADACTbits_t ADACTbits __attribute__((__sfr__));
extern volatile ANSELAbits_t ANSELAbits __attribute__((__sfr__));
extern volatile ANSELCbits_t ANSELCbits __attribute__((__sfr__));
extern volatile ODCONAbits_t ODCONAbits __attribute__((__sfr__));
extern volatile ODCONCbits_t ODCONCbits __attribute__((__sfr__));
extern volatile WPUAbits_t WPUAbits __attribute__((__sfr__));
extern volatile WPUCbits_t WPUCbits __attribute__((__sfr__));

#define _XTAL_FREQ 32000000 // clock frequency in hertz

void CONFIG_RA5_AS_DIGITAL_OUTPUT()
{
    ANSELAbits.ANSA5 = 0; // Disable analog
    TRISAbits.TRISA5 = 0; // Configure as output
    ODCONAbits.ODCA5 = 0; // disable open drain
    WPUAbits.WPUA5 = 0; // disable weak pull up
    __delay_ms(10); // delay in milliseconds
}

void CONFIG_RA4_AS_DIGITAL_OUTPUT()
{
    ANSELAbits.ANSA4 = 0; // Disable analog
    TRISAbits.TRISA4 = 0; // Configure as output
    ODCONAbits.ODCA4 = 0; // disable open drain
    WPUAbits.WPUA4 = 0; // disable weak pull up
    __delay_ms(10); // delay in milliseconds
}

void CONFIG_RA3_AS_DIGITAL_OUTPUT()
{
    WPUAbits.WPUA3 = 0; // disable weak pull up
    __delay_ms(10); // delay in milliseconds
}

void CONFIG_RA2_AS_DIGITAL_OUTPUT()
{
    ANSELAbits.ANSA2 = 0; // Disable analog
    TRISAbits.TRISA2 = 0; // Configure as output
    ODCONAbits.ODCA2 = 0; // disable open drain
    WPUAbits.WPUA2 = 0; // disable weak pull up
    __delay_ms(10); // delay in milliseconds
}

void CONFIG_RA1_AS_DIGITAL_OUTPUT()
{
    ANSELAbits.ANSA1 = 0; // Disable analog
    TRISAbits.TRISA1 = 0; // Configure as output
    ODCONAbits.ODCA1 = 0; // disable open drain
    WPUAbits.WPUA1 = 0; // disable weak pull up
    __delay_ms(10); // delay in milliseconds
}
