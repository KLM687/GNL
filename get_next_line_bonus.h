/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:57:37 by flee              #+#    #+#             */
/*   Updated: 2021/07/20 18:41:55 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

int		ft_strlen(const char *str, int state);
size_t	ft_strlcpy(char *dest, const char *src, unsigned int size);
char	*ft_strjoin(char *s1, char const *s2, int read_return);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_substr(char *s, unsigned int start, size_t len, int state);
int		ft_check(char *memory);
char	*ft_fill_memory(char *memory, char buf[BUFFER_SIZE + 1], int fd);
char	*get_next_line(int fd);
#endif
