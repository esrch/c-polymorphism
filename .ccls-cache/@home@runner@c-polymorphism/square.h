#ifndef SQUARE_H
# define SQUARE_H

# include "shape.h"

typedef struct s_square
{
	t_shape	shape;
	double	side;
}	t_square;

t_square	*square_create(double side);
void		square_destroy(t_shape *shape);

#endif