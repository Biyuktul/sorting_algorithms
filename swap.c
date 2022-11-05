/**
 * swapInt - swaps two given integers
 * @a: first nuber
 * @b: second number
 * Return: Always void
*/

void swapInt(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
}
