/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_abs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:41:14 by dakataso          #+#    #+#             */
/*   Updated: 2023/04/05 16:44:16 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"

#include <stdio.h>

int main() {
    int x = -5;
    int y = 10;
    float a = -3.14;
    float b = 2.71828;
    
    printf("Absolute value of %d is %d\n", x, ABS(x));
    printf("Absolute value of %d is %d\n", y, ABS(y));
    printf("Absolute value of %.2f is %.2f\n", a, ABS(a));
    printf("Absolute value of %.2f is %.2f\n", b, ABS(b));
    
    return 0;
}
