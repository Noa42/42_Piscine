#include <stdio.h>

typedef struct
{
	float altura;
	char *color_pelo;
	char *color_ojos;
} persona;

int main(void)
{
	persona array[2];
	array[0].altura = 1.78;
	array[0].color_pelo = "rubio";
	array[0].color_ojos = "azul";
	array[1].altura = 1.63;
	array[1].color_pelo = "negro";
	array[1].color_ojos = "verdes";
	printf("Noa mide %f, su pelo es %s, su color de ojos es %s\n", array[0].altura, array[0].color_pelo, array[0].color_ojos);
	printf("Julio mide %f, su pelo es %s, su color de ojos es %s", array[1].altura, array[1].color_pelo, array[1].color_ojos);
}