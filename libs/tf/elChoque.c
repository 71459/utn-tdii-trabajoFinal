#include "tf.h"

void elChoque ()
{
	int matrix [7] [8] =  {{1, 0, 0, 0, 0, 0, 0, 1},
				{0, 1, 0, 0, 0, 0, 1, 0},
				{0, 0, 1, 0, 0, 1, 0, 0},
				{0, 0, 0, 1, 1, 0, 0, 0},
				{0, 0, 1, 0, 0, 1, 0, 0},
				{0, 1, 0, 0, 0, 0, 1, 0},
				{1, 0, 0, 0, 0, 0, 0, 1}
			       };

	int j = 0;

	system ("clear");
	printf ("-------------------------------------\n"
		"Secuencia: El Choque.\n"
		"Presionar los dos botones para salir.\n"
		"-------------------------------------\n");
	while (!j)
	{
		for (int i = 0; i < 7; i++)
		{
			j = count ();

			if (j)
				break;

			for (int k = 0; k < 8; k++)
			{
				digitalWrite (led [k], matrix [i][k]);

				if (j)
					break;
			}

			if (j)
				break;
		}

		if (j)
			break;
	}
}


/*
	while (!j)
	{
		for (int i = 0; i < 4; i++)
		{
			digitalWrite (led [i], 1);
			digitalWrite (led [7 - i], 1);

			j = count ();

			if (j)
				break;
		}

		for (int i = 3; i > -1; i--)
		{
			if (j)
				break;

			digitalWrite (led [i], 1);
			digitalWrite (led [7 - i], 1);

			if (j)
				break;

			digitalWrite (led [i], 0);
			digitalWrite (led [7 - i], 0);
		}
	}
}
*/
