#ifndef MINITALK_H
# define MINITALK_H
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include "../libft/libft.h"

void	init_sig(int sig, void(*handler)(int, siginfo_t *, void *));
#endif
