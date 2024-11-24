/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:59:29 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/24 15:02:30 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr(int number)
{
    char c;
    if (number >= 10)
    {
        putnbr(number / 10);  // Recursively handle the number's first digits
    }
    c = (number % 10) + '0';  // Convert the last digit to a character
    write(1, &c, 1);  // Write the digit
}

void ft_fizzbuzz(void)
{
    int number = 1;

    while (number <= 100)
    {
        if (number % 3 == 0 && number % 5 == 0)  // Check for multiples of 3 and 5
        {
            write(1, "FizzBuzz", 8);  // Print "FizzBuzz"
        }
        else if (number % 3 == 0)  // Check for multiples of 3
        {
            write(1, "Fizz", 4);  // Print "Fizz"
        }
        else if (number % 5 == 0)  // Check for multiples of 5
        {
            write(1, "Buzz", 4);  // Print "Buzz"
        }
        else  // If no special condition, print the number
        {
            putnbr(number);  // Call putnbr to print the number
        }
        write(1, "\n", 1);  // Newline after each output
        number++;
    }
}
