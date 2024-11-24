/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:34:37 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/24 14:34:40 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void first_word(char *str)
{
    int i = 0;

    // Skip leading spaces and tabs
    while (str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }

    // Print the first word
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            break;
        }
        write(1, &str[i], 1);
        i++;
    }
}
