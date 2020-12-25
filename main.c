#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

//включить все светодиоды
void full_leds_on()
{
	PORTB |= _BV(PB6);
	PORTB |= _BV(PB7);
	PORTD |= _BV(PD5);		
	PORTD |= _BV(PD6);
	PORTD |= _BV(PD7);
	PORTB |= _BV(PB0);
	PORTB |= _BV(PB1);
	PORTB |= _BV(PB2);
	PORTB |= _BV(PB3);
	PORTB |= _BV(PB4);
	PORTD |= _BV(PD1);
	PORTD |= _BV(PD0);
	PORTC |= _BV(PC5);
	PORTC |= _BV(PC4);
	PORTC |= _BV(PC3);
	PORTC |= _BV(PC2);
	PORTC |= _BV(PC1);
	PORTC |= _BV(PC0);
	PORTB |= _BV(PB5);
	PORTD |= _BV(PD4);
	PORTD |= _BV(PD3);
	PORTD |= _BV(PD2);
}

//выключить все светодиоды
void full_leds_off()
{
	PORTB &= ~_BV(PB6);
	PORTB &= ~_BV(PB7);
	PORTD &= ~_BV(PD5);		
	PORTD &= ~_BV(PD6);
	PORTD &= ~_BV(PD7);
	PORTB &= ~_BV(PB0);
	PORTB &= ~_BV(PB1);
	PORTB &= ~_BV(PB2);
	PORTB &= ~_BV(PB3);
	PORTB &= ~_BV(PB4);
	PORTD &= ~_BV(PD1);
	PORTD &= ~_BV(PD0);
	PORTC &= ~_BV(PC5);
	PORTC &= ~_BV(PC4);
	PORTC &= ~_BV(PC3);
	PORTC &= ~_BV(PC2);
	PORTC &= ~_BV(PC1);
	PORTC &= ~_BV(PC0);
	PORTB &= ~_BV(PB5);
	PORTD &= ~_BV(PD4);
	PORTD &= ~_BV(PD3);
	PORTD &= ~_BV(PD2);
}

//включение по одному светодиоду
void one()
{
	PORTD |= _BV(PD3);
	_delay_ms(500);
	
	PORTB |= _BV(PB3);
	_delay_ms(500);
	
	PORTC |= _BV(PC4);
	_delay_ms(500);
	
	PORTD |= _BV(PD5);
	_delay_ms(500);
	
	PORTC |= _BV(PC0);
	_delay_ms(500);
	
	PORTB |= _BV(PB0);
	_delay_ms(500);
	
	PORTD |= _BV(PD0);
	_delay_ms(500);
	
	PORTC |= _BV(PC2);
	_delay_ms(500);
	
	PORTB |= _BV(PB4);
	_delay_ms(500);
	
	PORTD |= _BV(PD2);
	_delay_ms(500);
	
	PORTB |= _BV(PB6);
	_delay_ms(500);
	
	PORTC |= _BV(PC5);
	_delay_ms(500);
	
	PORTD |= _BV(PD7);
	_delay_ms(500);
	
	PORTB |= _BV(PB5);
	_delay_ms(500);
	
	PORTB |= _BV(PB1);
	_delay_ms(500);
	
	PORTC |= _BV(PC3);
	_delay_ms(500);
	
	PORTB |= _BV(PB7);
	_delay_ms(500);
	
	PORTD |= _BV(PD1);
	_delay_ms(500);
	
	PORTB |= _BV(PB2);
	_delay_ms(500);
	
	PORTC |= _BV(PC1);
	_delay_ms(500);
	
	PORTD |= _BV(PD6);
	_delay_ms(500);
	
	PORTD |= _BV(PD4);
	_delay_ms(1500);
}

//горит пятерка
void five_on()
{
	PORTB |= _BV(PB6);
	PORTB |= _BV(PB7);
	PORTD |= _BV(PD5);		
	PORTD |= _BV(PD6);
	PORTD |= _BV(PD7);
	PORTB |= _BV(PB0);
	PORTB |= _BV(PB1);
	PORTB |= _BV(PB2);
	PORTB |= _BV(PB3);
	PORTB |= _BV(PB4);
}

//горит ноль
void zero_on()
{
	PORTD |= _BV(PD1);
	PORTD |= _BV(PD0);
	PORTC |= _BV(PC5);
	PORTC |= _BV(PC4);
	PORTC |= _BV(PC3);
	PORTC |= _BV(PC2);
	PORTC |= _BV(PC1);
	PORTC |= _BV(PC0);
	PORTB |= _BV(PB5);
	PORTD |= _BV(PD4);
	PORTD |= _BV(PD3);
	PORTD |= _BV(PD2);
}

//бегущий огонь в нуле один светодиод против часовой стрелки
void zero_1()
{
int i;
for (i=0; i<10; i++)
	{
	PORTD |= _BV(PD1);
	_delay_ms(50);
	PORTD &= ~_BV(PD1);
	_delay_ms(50);
	
	PORTD |= _BV(PD0);
	_delay_ms(50);
	PORTD &= ~_BV(PD0);
	_delay_ms(50);

	PORTC |= _BV(PC5);
	_delay_ms(50);
	PORTC &= ~_BV(PC5);
	_delay_ms(50);

	PORTC |= _BV(PC4);
	_delay_ms(50);
	PORTC &= ~_BV(PC4);
	_delay_ms(50);

	PORTC |= _BV(PC3);
	_delay_ms(50);
	PORTC &= ~_BV(PC3);
	_delay_ms(50);

	PORTC |= _BV(PC2);
	_delay_ms(50);
	PORTC &= ~_BV(PC2);
	_delay_ms(50);

	PORTC |= _BV(PC1);
	_delay_ms(50);
	PORTC &= ~_BV(PC1);
	_delay_ms(50);

	PORTC |= _BV(PC0);
	_delay_ms(50);
	PORTC &= ~_BV(PC0);
	_delay_ms(50);

	PORTB |= _BV(PB5);
	_delay_ms(50);
	PORTB &= ~_BV(PB5);
	_delay_ms(50);

	PORTD |= _BV(PD4);
	_delay_ms(50);
	PORTD &= ~_BV(PD4);
	_delay_ms(50);

	PORTD |= _BV(PD3);
	_delay_ms(50);
	PORTD &= ~_BV(PD3);
	_delay_ms(50);

	PORTD |= _BV(PD2);
	_delay_ms(50);
	PORTD &= ~_BV(PD2);
	_delay_ms(50);
	}
zero_on();
}

//бегущий огонь в нуле противоположные светодиоды
void zero_2()
{
int i;
for (i=0; i<10; i++)
	{
	PORTD |= _BV(PD1);
	PORTC |= _BV(PC1);
	_delay_ms(50);
	PORTC &= ~_BV(PC1);
	PORTD &= ~_BV(PD1);
	_delay_ms(50);
	
	PORTD |= _BV(PD0);
	PORTC |= _BV(PC0);
	_delay_ms(50);
	PORTC &= ~_BV(PC0);
	PORTD &= ~_BV(PD0);
	_delay_ms(50);

	PORTC |= _BV(PC5);
	PORTB |= _BV(PB5);
	_delay_ms(50);
	PORTB &= ~_BV(PB5);
	PORTC &= ~_BV(PC5);
	_delay_ms(50);

	PORTC |= _BV(PC4);
	PORTD |= _BV(PD4);
	_delay_ms(50);
	PORTD &= ~_BV(PD4);
	PORTC &= ~_BV(PC4);
	_delay_ms(50);

	PORTC |= _BV(PC3);
	PORTD |= _BV(PD3);
	_delay_ms(50);
	PORTD &= ~_BV(PD3);
	PORTC &= ~_BV(PC3);
	_delay_ms(50);

	PORTC |= _BV(PC2);
	PORTD |= _BV(PD2);
	_delay_ms(50);
	PORTD &= ~_BV(PD2);
	PORTC &= ~_BV(PC2);
	_delay_ms(50);
	}
zero_on();
}

//Заполнение нуля сверху вниз и снизу вверх
void zero_3()
{
int i;
for (i=0; i<10; i++)
	{
	//включение сверху вниз
	PORTD |= _BV(PD1);
	_delay_ms(50);
	
	PORTD |= _BV(PD0);
	PORTD |= _BV(PD2);
	_delay_ms(50);

	PORTC |= _BV(PC5);
	PORTD |= _BV(PD3);
	_delay_ms(50);

	PORTC |= _BV(PC4);
	PORTD |= _BV(PD4);
	_delay_ms(50);

	PORTC |= _BV(PC3);
	PORTB |= _BV(PB5);
	_delay_ms(50);

	PORTC |= _BV(PC2);
	PORTC |= _BV(PC0);
	_delay_ms(50);
	
	PORTC |= _BV(PC1);
	_delay_ms(50);
	
	//выключение снизу вверх
	PORTC &= ~_BV(PC1);
	_delay_ms(50);
	
	PORTC &= ~_BV(PC0);
	PORTC &= ~_BV(PD2);
	_delay_ms(50);

	PORTB &= ~_BV(PB5);
	PORTC &= ~_BV(PC3);
	_delay_ms(50);

	PORTD &= ~_BV(PD4);
	PORTC &= ~_BV(PC4);
	_delay_ms(50);

	PORTD &= ~_BV(PD3);
	PORTC &= ~_BV(PC5);
	_delay_ms(50);

	PORTD &= ~_BV(PD2);
	PORTD &= ~_BV(PD0);
	_delay_ms(50);
	
	PORTD &= ~_BV(PD1);
	_delay_ms(50);
	}
zero_on();
}

int main(void)
{	
	//устанавливаем все порты на выход
	DDRB = 0xFF;
	DDRC = 0xFF;
	DDRD = 0xFF;
	
	while(1)
	{
	_delay_ms(3000);
	full_leds_on();
	_delay_ms(1000);		
	full_leds_off();
	_delay_ms(1000);
	one();
	full_leds_off();
	_delay_ms(1000);
	five_on();
	zero_1();
	_delay_ms(1000);		
	full_leds_off();
	_delay_ms(1000);
	
	_delay_ms(1000);
	full_leds_on();
	_delay_ms(1000);		
	full_leds_off();
	_delay_ms(1000);
	one();
	full_leds_off();
	_delay_ms(1000);
	five_on();
	zero_2();
	_delay_ms(1000);		
	full_leds_off();
	_delay_ms(1000);
	
	_delay_ms(1000);
	full_leds_on();
	_delay_ms(1000);		
	full_leds_off();
	_delay_ms(1000);
	one();
	full_leds_off();
	_delay_ms(1000);
	five_on();
	zero_3();
	_delay_ms(1000);		
	full_leds_off();
	_delay_ms(1000);
	}
	
}
