#include "tf.h"

void laApilada ()
{
	/*
	int matrix [52] [8] =  {{1, 0, 0, 0, 0, 0, 0, 0},
				{0, 1, 0, 0, 0, 0, 0, 0},
				{0, 0, 1, 0, 0, 0, 0, 0},
				{0, 0, 0, 1, 0, 0, 0, 0},
				{0, 0, 0, 0, 1, 0, 0, 0},
				{0, 0, 0, 0, 0, 1, 0, 0},
				{0, 0, 0, 0, 0, 0, 1, 0},
				{0, 0, 0, 0, 0, 0, 0, 1},
				{0, 0, 0, 0, 0, 0, 0, 0},
				{0, 0, 0, 0, 0, 0, 0, 1},
				{1, 0, 0, 0, 0, 0, 0, 1},
				{0, 1, 0, 0, 0, 0, 0, 1},
				{0, 0, 1, 0, 0, 0, 0, 1},
				{0, 0, 0, 1, 0, 0, 0, 1},
				{0, 0, 0, 0, 1, 0, 0, 1},
				{0, 0, 0, 0, 0, 1, 0, 1},
				{0, 0, 0, 0, 0, 0, 1, 1},
				{0, 0, 0, 0, 0, 0, 0, 1},
				{0, 0, 0, 0, 0, 0, 1, 1},
				{1, 0, 0, 0, 0, 0, 1, 1},
				{0, 1, 0, 0, 0, 0, 1, 1},
				{0, 0, 1, 0, 0, 0, 1, 1},
				{0, 0, 0, 1, 0, 0, 1, 1},
				{0, 0, 0, 0, 1, 0, 1, 1},
				{0, 0, 0, 0, 0, 1, 1, 1},
				{0, 0, 0, 0, 0, 0, 1, 1},
				{0, 0, 0, 0, 0, 1, 1, 1},
				{1, 0, 0, 0, 0, 1, 1, 1},
				{0, 1, 0, 0, 0, 1, 1, 1},
				{0, 0, 1, 0, 0, 1, 1, 1},
				{0, 0, 0, 1, 0, 1, 1, 1},
				{0, 0, 0, 0, 1, 1, 1, 1},
				{0, 0, 0, 0, 0, 1, 1, 1},
				{0, 0, 0, 0, 1, 1, 1, 1},
				{1, 0, 0, 0, 1, 1, 1, 1},
				{0, 1, 0, 0, 1, 1, 1, 1},
				{0, 0, 1, 0, 1, 1, 1, 1},
				{0, 0, 0, 1, 1, 1, 1, 1},
				{0, 0, 0, 0, 1, 1, 1, 1},
				{0, 0, 0, 1, 1, 1, 1, 1},
				{1, 0, 0, 1, 1, 1, 1, 1},
				{0, 1, 0, 1, 1, 1, 1, 1},
				{0, 0, 1, 1, 1, 1, 1, 1},
				{0, 0, 0, 1, 1, 1, 1, 1},
				{0, 0, 1, 1, 1, 1, 1, 1},
				{1, 0, 1, 1, 1, 1, 1, 1},
				{0, 1, 1, 1, 1, 1, 1, 1},
				{0, 0, 1, 1, 1, 1, 1, 1},
				{0, 1, 1, 1, 1, 1, 1, 1},
				{1, 1, 1, 1, 1, 1, 1, 1},
				{0, 1, 1, 1, 1, 1, 1, 1},
				{1, 1, 1, 1, 1, 1, 1, 1}
			       };
	
	int k = 0;

	system ("clear");
	printf ("-------------------------------------\n"
		"Secuencia: La Apilada\n"
		"Presionar los dos botones para salir.\n"
		"-------------------------------------\n");
	
	while (!k)
	{
		for (int i = 0; i < 52; i++)
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
*/
	int k = 0;

	while (!k)
	{
		for (int i = 7; i > -1; i--)
		{
			for (int j = 0; j <= i; j++)
			{
				digitalWrite (led [j], 1);
				k = count ();
				
				if (k)
					break;

				digitalWrite (led [j], 0);
			}

			if (k)
				break;

			digitalWrite (led [i], 1);

			for (int j = 0; j < i; j++)
				digitalWrite (led [j], 0);
		}
	}
}
