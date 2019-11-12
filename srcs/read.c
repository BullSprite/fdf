#include "../includes/fdf.h"

int		word_count(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

///TODO: add polygons without double points

void	make_dependences(char *line1, char *line2, int y, t_fdf *fdf)
{
	char			**nums1;
	char			**nums2;
	static int		word_num;
	int 			x;

	nums1 = ft_strsplit(line1, ' ');
	nums2 = ft_strsplit(line2, ' ');
	if (!word_num)
		word_num = word_count(nums1);
	x = 0;
	/*while (x < word_num - 1)
	{
		make_point(nums1[x], x, y, fdf);
		make_point(nums2[x], x, y + 1, fdf);
		if (x)
			make_polygon(fdf);
		free(nums1[x]);
		free(nums2[x]);
		x++;
	}*/
}

void	read_file(char *file_name, t_fdf *fdf)
{
	char	*line[2];
	int		fd;

	if (!(fd = open(file_name, O_RDONLY, 0)))
		ft_putstr("Error");
	get_next_line(fd, &(line[0]));
	while ((get_next_line(fd, &(line[1]))))
	{

	}
}
