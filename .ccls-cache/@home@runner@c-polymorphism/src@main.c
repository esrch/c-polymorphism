#include "shape.h"
#include "square.h"
#include "rectangle.h"
#include "circle.h"

#include <stdio.h>

int main(void) {
	t_shape	*shapes[3];

	shapes[0] = (t_shape *) square_create(10);
	shapes[1] = (t_shape *) rectangle_create(12, 14);
	shapes[2] = (t_shape *) circle_create(4);

	for (int i = 0; i != 3; ++i)
		printf("%s: Area is %.2f and perimeter is %.2f\n",
			shapes[i]->get_name(shapes[i]),
			shapes[i]->area(shapes[i]),
			shapes[i]->perimeter(shapes[i]));

	for (int i = 0; i != 3; ++i)
		shapes[i]->destroy(shapes[i]);
}