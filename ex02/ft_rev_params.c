/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasaha <malasaha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:16:35 by malasaha          #+#    #+#             */
/*   Updated: 2023/02/21 19:57:08 by malasaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if(ac > 1)
	{
		ac--;
		while(ac > 0)
		{
			i = 0;
			while(av[ac][i] != '\0')
			{
				write(1, &av[ac][i], 1);
				i++;
			}
			ac--;
			write(1, "\n", 1);
		}
	}
	return (0);
}