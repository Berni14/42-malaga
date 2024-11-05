/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernier <mbernier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:06:58 by mbernier          #+#    #+#             */
/*   Updated: 2024/10/23 17:06:58 by mbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int ft_isdigit(int c)
{
    while (c >= 0 && c <= 9)
        return (c);
}