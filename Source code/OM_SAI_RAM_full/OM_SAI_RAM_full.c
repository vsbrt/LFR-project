
#include<avr/io.h>
#include<util/delay.h>
unsigned int a;
int p,q,r,s,x,y,xa,ya,set;
int main(void)
{
DDRA = 0x00;
DDRC = 0xFF;
DDRD = 0xFF;

a = PINA & 0b00000111;


/*
1) considering that only white is recognised by sensors else '0'
   and when whit is detected o/p is '1'
   
2) 10000010 will give the forward motion of motors
    */

    while(a != 00000111)
    {
       if(a == 00000001)          //right turn
	   {
	     PORTC = 0b10000000;
	   }


	   if(a == 00000100)          //left turn 
	   {
	     PORTC = 0b00000010;
	   }



//counting begins

	   if(a == 00000110)          //patch on the right
	   {
	     p++;
		   
		   if(p == 1)
		   {
		     set++;
		   }
		   		 
	   }


	   do{
	   
	   if(a == 00000101)          //patch on the left
	   {
	     q++;
		   
		   if(q == 1)
		   {
		     set++;
		   }

	   }
	   }while(set == 2)



}
