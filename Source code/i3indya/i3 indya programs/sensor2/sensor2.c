#include<avr/io.h>
#include<util/delay.h>
int main()
{
unsigned int a;
DDRC=0x00;
DDRB=0xFF;
while(1)
{
a=PINC & 0b00000001;
if(a==0b00000001)
{PORTB=0b00001001;}
if(a==0b00000000)
{PORTB=0b00000000;}
}
return 0;
}
