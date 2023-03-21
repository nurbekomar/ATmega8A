#include <avr/io.h>
#include <util/delay.h>

#define LED PB0
#define BUTTON PB1

int main()
{
  DDRB |= (1 << LED);
  DDRB &= ~(1 << BUTTON);

  while (1)
  {
    if (0 != (PINB & (1 << BUTTON)))
    {
      PORTB |= (1 << LED);
    }
    else
    {
      PORTB &= ~(1 << LED);
    }
  }
}