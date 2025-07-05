/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:48:34 by scheragh          #+#    #+#             */
/*   Updated: 2025/07/04 13:21:09 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

static	void	ft_send_sig(int pid, char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '1')
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		usleep(50);
	}
}
int	main(void)
{
	return (EXIT_SUCCESS);
}
