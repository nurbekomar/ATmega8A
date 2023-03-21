#include <avr/io.h>
#include <util/delay.h>

#define LED PB0

int main()
{
  DDRB |= (1 << LED);

  while (1)
  {
    PORTB |= (1 << LED);
    _delay_ms(1000);
    PORTB &= ~(1 << LED);
    _delay_ms(1000);
  }
}