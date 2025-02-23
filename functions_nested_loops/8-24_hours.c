#include "main.h"


/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
 */


void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/* '0' = ASCII 48 */
			_putchar('0' + (hour / 10)); /* affiche dizaine heure */
			_putchar('0' + (hour % 10)); /* affiche unites heures */
			_putchar(':');
			_putchar('0' + (minute / 10)); /* affiche dizaine minute */
			_putchar('0' + (minute % 10)); /* affiche unite minute */
			_putchar('\n');
		}
	}
}
