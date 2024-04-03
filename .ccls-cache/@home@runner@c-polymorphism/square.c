#include "square.h"
#include "shape.h"

#include <stdlib.h>

static char	*get_name(t_shape *shape)
{
	return "Square";
}

static double	area(t_shape *shape)
{
	t_square	*square;
	
	square = (t_square *) shape;
	return (square->side * square->side);
}

static double	perimeter(t_shape *shape)
{
	t_square	*square;

	square = (t_square *) shape;
	return (square->side * 4);
}

t_square	*square_create(double side)
{
	t_square	*square;

	square = malloc(sizeof(*square));
	if (!square)
		return (NULL);
	square->side = side;
	square->shape.get_name = get_name;
	square->shape.area = area;
	square->shape.perimeter = perimeter;
	square->shape.destroy = square_destroy;
	return (square);
}

void		square_destroy(t_shape *shape)
{
	t_square	*square;

	square = (t_square *) shape;
	free(square);
}