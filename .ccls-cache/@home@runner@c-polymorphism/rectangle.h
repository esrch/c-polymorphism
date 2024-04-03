#ifndef RECTANGLE_H
# define RECTANGLE_H

# include "shape.h"

typedef struct s_rectangle
{
	t_shape	shape;
	double	width;
	double	height;
}	t_rectangle;

t_rectangle	*rectangle_create(double width, double height);
void		rectangle_destroy(t_shape *shape);

#endif