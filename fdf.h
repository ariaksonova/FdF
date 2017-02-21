#ifndef FDF_FDF_H
#define FDF_FDF_H
# define BUFF_SIZE 100

# include <math.h>
# include <mlx.h>
# include <unistd.h>
# include <zconf.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct s_win{
    void       *mlx;
    void       *win;
    void       *img;
}              t_win;

typedef struct s_size{
    int        x;
    int        y;
}              t_size;

int		get_next_line(const int fd, char **line);
int     key_hook(int keycode, t_win *param);
int		strchar(char *tmp);
char	*ft_strndup(char *str);
int     **or_file(char *name, t_size *size);
void    fdf(int **tab, t_size size);

#endif //FDF_FDF_H