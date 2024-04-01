 # include < avr / io .h >
 # include < util / delay .h >

 # define BLINK_DELAY_MS 1000

 int main ( void )
 {
 /* Configura el bit 5 del Puerto B como salida */
 	DDRB |= _BV ( DDB5 );

 	while (1)
 	{
 /* Pone el bit 5 en alto ( enciende el LED) */
 	PORTB |= _BV ( PORTB5 );
 	_delay_ms ( BLINK_DELAY_MS );

 /* Pone el bit 5 en bajo ( apaga el LED ) */
 	PORTB &= ~ _BV ( PORTB5 );
 	_delay_ms ( BLINK_DELAY_MS );
 	}
 	return 0;
 }
