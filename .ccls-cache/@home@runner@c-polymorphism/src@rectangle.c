#include "rectangle.h"
#include "shape.h"

#include <stdlib.h>

static char	*get_name(t_shape *shape)
{
	(void) shape;
	return "Rectangle";
}

static double	area(t_shape *shape)
{
	t_rectangle	*rectangle;
	
	rectangle = (t_rectangle *) shape;
	return (rectangle->width * rectangle->height);
}

static double	perimeter(t_shape *shape)
{
	t_rectangle	*rectangle;

	rectangle = (t_rectangle *) shape;
	return (rectangle->width * 2 + rectangle->height * 2);
}

t_rectangle	*rectangle_create(double width, double height)
{
	t_rectangle	*rectangle;

	rectangle = malloc(sizeof(*rectangle));
	if (!rectangle)
		return (NULL);
	rectangle->width = width;
	rectangle->height = height;
	rectangle->shape.get_name = get_name;
	rectangle->shape.area = area;
	rectangle->shape.perimeter = perimeter;
	rectangle->shape.destroy = rectangle_destroy;
	return (rectangle);
}

void		rectangle_destroy(t_shape *shape)
{
	t_rectangle	*rectangle;

	rectangle = (t_rectangle *) shape;
	free(rectangle);
}