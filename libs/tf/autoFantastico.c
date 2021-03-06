#include "tf.h"

void autoFantastico ()
{
	int matrix [15] [8] =   {{1, 0, 0, 0, 0, 0, 0, 0},
				{0, 1, 0, 0, 0, 0, 0, 0},
				{0, 0, 1, 0, 0, 0, 0, 0},
				{0, 0, 0, 1, 0, 0, 0, 0},
				{0, 0, 0, 0, 1, 0, 0, 0},
				{0, 0, 0, 0, 0, 1, 0, 0},
				{0, 0, 0, 0, 0, 0, 1, 0},
				{0, 0, 0, 0, 0, 0, 0, 1},
				{0, 0, 0, 0, 0, 0, 1, 0},
				{0, 0, 0, 0, 0, 1, 0, 0},
				{0, 0, 0, 0, 1, 0, 0, 0},
				{0, 0, 0, 1, 0, 0, 0, 0},
				{0, 0, 1, 0, 0, 0, 0, 0},
				{0, 1, 0, 0, 0, 0, 0, 0},
				{1, 0, 0, 0, 0, 0, 0, 0}
			       };

	int k = 0;

	system ("clear");
	printf ("-------------------------------------\n"
		"Secuencia: Auto Fantastico.\n"
		"Presionar los dos botones para salir.\n"
		"-------------------------------------\n");

	while (!k)
	{
		for (int i = 0; i < 15; i++)
		{
			k = count ();

			if (k)
				break;

			for (int j = 0; j < 8; j++)
			{
				digitalWrite (led [j], matrix [i][j]);

				if (k)
					break;
			}


			if (k)
				break;
		}
		
		if (k)
			break;
	}
}
/*
	while (!k)
	{
		for (int i = 1; i <= 8; i++)
		{
			array [i - 1] = 0;
			array [i] = 1;

			for (int j = 0; j < 8; j++)
				digitalWrite (led [7 - j], array [j]);

			k = count ();

			if (k)
				break;

			if (led [7])
				led [7] = 0;
		}

		for (int i = 1; i <= 8; i++)
		{
			array [i - 1] = 0;
			array [i] = 1;

			for (int j = 0; j < 8; j++)
				digitalWrite (led [7 - j], array [7 - j]);

			if (k)
				break;

			if (array [7])
				array [7] = 0;
		}

		if (k)
			break;
	}
}*/
