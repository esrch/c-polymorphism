#include "circle.h"
#include "shape.h"

#include <stdlib.h>

static char	*get_name(t_shape *shape)
{
	(void) shape;
	return "Circle";
}

static double	area(t_shape *shape)
{
	t_circle	*circle;
	
	circle = (t_circle *) shape;
	return (circle->radius * circle->radius * 3.1416);
}

static double	perimeter(t_shape *shape)
{
	t_circle	*circle;

		circle = (t_circle *) shape;
	return (circle->radius * 2 * 3.1416);
}

t_circle	*circle_create(double radius)
{
	t_circle	*circle;

	circle = malloc(sizeof(*circle));
	if (!circle)
		return (NULL);
	circle->radius = radius;
	circle->shape.get_name = get_name;
	circle->shape.area = area;
	circle->shape.perimeter = perimeter;
	circle->shape.destroy = circle_destroy;
	return (circle);
}

void		circle_destroy(t_shape *shape)
{
	t_circle	*circle;

	circle = (t_circle *) shape;
	free(circle);
}