#include "main.h"
/**
 * jack_bauer - prints every minute of 24hrs
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0 ; hours < 24 ; hours++)
	{
		for (minutes = 0 ; minutes < 60 ; minutes++)
		{
			_putchar(hours / 10 + '0');/*prints first digit*/
			_putchar(hours % 10 + '0');/*prints second hour digit*/
			_putchar(':');
			_putchar(minutes / 10 + '0');/*prints first letter for minutes*/
			_putchar(minutes % 10 + '0');/*prints second letter for minutes*/
			_putchar('\n');
		}
	}
}
