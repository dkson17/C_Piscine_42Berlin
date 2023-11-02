/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:14:51 by helauren          #+#    #+#             */
/*   Updated: 2023/04/01 21:14:58 by helauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_cpy(char **dest, char *src);
int		ft_realloc(char **str, char sign);
int		ft_word_len(int i);
char	*ft_get_word_in_dict(int fd, int nb_char, char buffer);
void	ft_go_to_next_line(int *fd, int *i);
char	*ft_remove_multiple_space(char *str);
int		ft_open_dict_file1(void);
int		ft_open_dict_file2(char filename);
char	*ft_parse_dict(int fd, char *str);
int		argc2(char **argv, int fd, char **str);
int		argc1(char **argv, int fd);
int		ft_strlen(char *str);
int		valid_input(char *argv);
long	ft_atoi(char *str);
void	ft_putstr(char *str);
int		val_newdic(char **argv);
void	arr_values(char *argv, char **str);
void	ft_go_to_next_line(int *fd, int *i);
long	atoyish(char *str);

#endif
