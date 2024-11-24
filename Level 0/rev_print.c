/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:17:30 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/24 19:17:33 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rev_print(char *str)
{
    int i = 0;

    // Find the length of the string
    while (str[i] != '\0')
    {
        i++;
    }

    // Print characters in reverse order
    while (i > 0)
    {
        i--; // Move to the last valid character
        write(1, &str[i], 1);
    }
}
