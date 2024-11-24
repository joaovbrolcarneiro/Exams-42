/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:26:19 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/24 20:26:39 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i] != '\0') // Correct indexing
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z') // Check for lowercase
            {
                av[1][i] = av[1][i] - 32; // Convert to uppercase
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z') // Check for uppercase
            {
                av[1][i] = av[1][i] + 32; // Convert to lowercase
            }
            write(1, &av[1][i], 1); // Write the toggled character
            i++;
        }
    }
    write(1, "\n", 1); // Print a newline
    return 0; // Return success
}
