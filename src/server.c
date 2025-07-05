/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:48:18 by scheragh          #+#    #+#             */
/*   Updated: 2025/07/05 17:58:42 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"
#include "ft_printf.h"

void	ft_handle_sig(int sig)
{
	static char	buffer;
	static int	bit;

	buffer <<= 1;
	if (signal == SIGUSR2)
		buffer |= 1;
	bit++;
	if (bit_count == 8)
	{
		write(1, &buffer, 1);
		if (buffer == '\0')
			write(1, "\n", 1);
		buffer = 0;
		bit_count = 0;
	}

}

int	main(void)
{
	int		pid;

	pid = getpid();
	ft_printf("%d\n", pid);
	signal(SIGUSR1, ft_handle_sig);
	signal(SIGUSR2, ft_handle_sig);
	while (1)
		pause();
	return (0);
}
