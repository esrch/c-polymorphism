#ifndef SHAPE_H
# define SHAPE_H

typedef struct s_shape
{
	char	*(*get_name)(struct s_shape *shape);
	double	(*area)(struct s_shape *shape);
	double	(*perimeter)(struct s_shape *shape);
	void	(*destroy)(struct s_shape *shape);
}	t_shape;

#endif