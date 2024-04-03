#ifndef CIRCLE_H
# define CIRCLE_H

# include "shape.h"

typedef struct s_circle
{
	t_shape	shape;
	double	radius;
}	t_circle;

t_circle	*circle_create(double radius);
void		circle_destroy(t_shape *shape);

#endif