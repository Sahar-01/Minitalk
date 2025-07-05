/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:48:34 by scheragh          #+#    #+#             */
/*   Updated: 2025/07/05 17:56:17 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"
#include "ft_printf.h"
#include "libft.h"

void	ft_send_char(int pid, char c)
{
	int		i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
		i--;
	}
}

static	void	ft_send_sig(int pid, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_send_char(pid, s[i]);
		i++;
	}
	ft_send_char(pid, '\0');
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*message;


	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		message = argv[2];
		ft_send_sig(pid, message);
	}
	else
	{
		ft_printf("Please provide the PID and your message.");
		return (0);
	}
	return (EXIT_SUCCESS);
}
