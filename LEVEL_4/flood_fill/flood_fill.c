#include "flood_fill.h"

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char c = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = 'F';

	if (begin.x + 1 < size.x && tab[begin.y][begin.x + 1] == c)
		flood_fill(tab, size, (t_point){begin.x + 1, begin.y});
	if (begin.x > 0 && tab[begin.y][begin.x - 1] == c)
		flood_fill(tab, size, (t_point){begin.x - 1, begin.y});
	if (begin.y + 1 < size.y  && tab[begin.y + 1][begin.x] == c)
		flood_fill(tab, size, (t_point){begin.x, begin.y + 1});
	if (begin.y > 0 && tab[begin.y - 1][begin.x] == c)
		flood_fill(tab, size, (t_point){begin.x, begin.y - 1});
}
