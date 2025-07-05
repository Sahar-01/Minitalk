/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:48:18 by scheragh          #+#    #+#             */
/*   Updated: 2025/07/04 14:26:24 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"
#include "ft_printf.h"
void	ft_handle_sig(int sig)
{

}
int	main(void)
{
	int		pid;

	pid = getpid();
	ft_printf("%d\n", pid);
	if (argc == 1)
	{
		while (argc == 1)
		{
			signal(SIGUSR1, ft_handle_sig);
			signal(SIGUSR2, ft_handle_sig);
		}
	}
	else
	{
		ft_printf("Error\n", pid);
		return (1);
	}
	return (0);
}
