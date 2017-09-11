/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amansour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 12:52:02 by amansour          #+#    #+#             */
/*   Updated: 2017/06/05 14:21:22 by amansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# define BUFF_SIZE 200

typedef struct  s_r
{
    int         fd;
    char        *s;
    char        *str;
    struct s_r  *nxt;
}               t_r;

int	get_next_line(const int fd, char **line);

#endif
