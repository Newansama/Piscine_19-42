/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:06:15 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/20 13:35:49 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

//# define ABS(Value) (Value < 0 ? -Value : Value)
# define ABS(Myeuk) (((Myeuk < 0) * (-Myeuk)) + ((Myeuk >= 0) * (Myeuk)))

#endif