/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 17:33:16 by jguyet            #+#    #+#             */
/*   Updated: 2017/03/07 17:33:17 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nm_otool.h"

int cmpstringp(const void *p1, const void *p2)
{
    return (ft_strcmp((char*)p1 + 19, (char*)p2 + 19));
}