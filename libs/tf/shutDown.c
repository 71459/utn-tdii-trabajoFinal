#include "tf.h"

void shutDown ()
{
	for (int i = 0; i < 8; i++)
		digitalWrite (led [i], 0);
}
