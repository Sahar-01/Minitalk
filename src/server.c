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

int	main(void)
{
	int		pid;

	pid = getpid();
	ft_printf("%d\n", pid);
	if (argc == 1)
	{
		while (argc == 1)
		{
			signal(SIGUSR1, ft_btoa);
			signal(SIGUSR2, ft_btoa);
		}
	}
	else
	{
		ft_printf("Error\n", pid);
	}
	return (EXIT_SUCCESS);
}
