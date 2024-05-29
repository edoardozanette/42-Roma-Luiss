#ifndef SO_LONG_STRUCT_H
# define SO_LONG_STRUCT

typedef struct s_map
{
    int coin;
    int port;
    int exit;
}t_map

typedef struct s_start
{
    t_map map;
    int max_x;
    int max_y;
    char **matrix;
} t_start;

#endif