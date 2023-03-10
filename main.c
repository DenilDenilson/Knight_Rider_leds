#include "Librerias_PIC/config_device.h"

/* F U N C I O N E S */
void PORT_Init(void);


int main ( void ) {
    
    OSCILADOR_Init();
    PORT_Init();
    LATD = 0x00;
    LATB = 0x00;
        
    
    while ( 1 ) {
//        LATD = 0xff;
//        LATB = 0xff;
        
        for ( int i = 0; i <= 7; i++ ) {
            LATB = 0x00;
            LATD = ( 1 << i );
            __delay_ms(100);
        }
        
        for ( int i = 0; i <= 7; i++ ) {
            LATD = 0x00;
            LATB = ( 1 << i );
            __delay_ms(100);
        }
        
        __delay_ms(200);
        
        LATD = 0xff;
        LATB = 0xff;
        
        
        
        
        
    }
}

/* F U N C I O N E S */

void PORT_Init(void) {
    /* L E D S */
    ANSELD = 0x00;
    ANSELB = 0x00;
    TRISD = 0x00;
    TRISB = 0x00;
    
}