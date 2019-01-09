
#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_AUSTIN_POWERS "Save"

typedef struct s_perso	t_perso;

struct	s_perso {
	char	*name;
	float	life;
	int		age;
	char	*profession;
};

#endif
