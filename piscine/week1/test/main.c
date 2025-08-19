/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:23:58 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/09 15:24:08 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_atoi(char *str)
{
        int     i;
        int     result;
        int     sign;
        i = 0;
        sign = 1;
        result = 0;
                while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
                        i++;
                while(str[i] == 45 || str[i] == 43)
                {
                        if(str[i] == 45)
                            sign *= -1;
                            i++;
                }
                while(str[i]>='0' && str[i]<='9')
                {
                        result = result * 10 + (str[i] - '0');
                        i++;
                }
        return (result * sign);
}