/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:02:38 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/17 10:42:35 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strchrnul(const char *s, int c);
char	*ft_strdup(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

void	ft_type_choose(char type, va_list args, int *ptr_sum);
int		ft_printf(const char *str, ...);
void	ft_putchar_c(char c, int *ptr_sum);
void	ft_putnbr_c(int n, int *ptr_sum);
void	ft_putunsnbr(unsigned int n, int *ptr_sum);
void	ft_puthexa(unsigned int n, char hex_base, int *ptr_sum);
void	ft_putpointer(void *ptr, int *ptr_sum);
void	ft_put_ptr_hexa_adress(unsigned long number, int *ptr_sum);
void	ft_putstr_c(char *s, int *ptr_sum);

char	*get_next_line(int fd);

// libft_extended
char	*ft_itoa_e(int n);
char	**ft_split_e(const char *s, char c);
char	*ft_strdup_e(const char *s1);
char	*ft_strjoin_e(const char *s1, const char *s2);
char	*ft_strtrim_e(char const *s1, char const *set);
char	*ft_substr_e(const char *s1, unsigned int start, size_t len);

// ft_array_utils.c
int		ft_len_of_arr(char **arr);
char	*ft_arr_to_str(char **arr_of_strs);
char	**ft_init_array(int size);
void	ft_free_array(char **arr_of_str);
void	ft_print_array(char **arr);
#endif
