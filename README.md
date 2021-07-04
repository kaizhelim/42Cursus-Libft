# 42Cursus-Libft
Recoding a few functions of the C standard library as well as some other utility functions that will be used during the whole 42 Cursus.

[//]: # (This page have to be re-organised, I don't like the current pattern!)

### Final Grades
<image src = "https://user-images.githubusercontent.com/76621210/124388123-fb969900-dd13-11eb-8bed-d352d04c653c.png" width=150>

### Files and Libraries
- Makefile: [Makefile](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)
- Headers : [libft.h](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)

### Functions

Libc Functions
| No. | Functions                                                                             | Prototypes                                                            | Description |
| :-: | :------------------------------------------------------------------------------------ | :-------------------------------------------------------------------- | :---------- |
|  1  | [ft_memset](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_memset.c)  | void \*ft_memset(void \*s, int c, size_t n);                          |      |
|  2  | [ft_bzero](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_bzero.c)    | void ft_bzero(void \*s, size_t n);                                    |      |
|  3  | [ft_memcpy](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_memcpy.c)  | void \*ft_memcpy(void \*dst, const void \*src, size_t n);             |      |
|  4  | [ft_memccpy](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_memccpy.c)| void \*ft_memccpy(void \*dst, const void \*src, int c, size_t n);     |      |
|  5  | [ft_memmove](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_memmove.c)| void \*ft_memmove(void \*dst, const void \*src, size_t n);            |      |
|  6  | [ft_memchr](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_memchr.c)  | void \*ft_memchr(const void \*s, int c, size_t n);                    |      |
|  7  | [ft_memcmp](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_memcmp.c)  | int	ft_memcmp(const void \*s1, const void \*s2, size_t n);            |      |
|  8  | [ft_strlen](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_strlen.c)  | size_t	ft_strlen(const char \*s);                                    |      |
|  9  | [ft_strlcpy](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_strlcpy.c)| size_t	ft_strlcpy(char \*dest, const char \*src, size_t size);       |      |
|  10 | [ft_strlcat](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_strlcat.c)| size_t	ft_strlcat(char \*dst, const char \*src, size_t size);        |      |
|  11 | [ft_strchr](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_strchr.c)  | char	\*ft_strchr(const char \*s, int c);                             |      |
|  12 | [ft_strrchr](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_strrchr.c)| char	\*ft_strrchr(const char \*s, int c);                            |      |
|  13 | [ft_strnstr](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_strnstr.c)| char	\*ft_strnstr(const char \*big, const char \*little, size_t len);|      |
|  14 | [ft_strncmp](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_strncmp.c)| int		ft_strncmp(const char \*s1, const char \*s2, size_t n);         |      |
|  15 | [ft_atoi](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_atoi.c)      | int		ft_atoi(const char \*nbr);                                      |      |
|  16 | [ft_isalpha](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_isalpha.c)| int		ft_isalpha(int c);                                              |      |
|  17 | [ft_isdigit](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_isdigit.c)| int		ft_isdigit(int c);                                              |      |
|  18 | [ft_isalnum](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_isalnum.c)| int		ft_isalnum(int c);                                              |      |
|  19 | [ft_isascii](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_isascii.c)| int		ft_isascii(int c);                                              |      |
|  20 | [ft_isprint](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_isprint.c)| int		ft_isprint(int c);                                              |      |
|  21 | [ft_toupper](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_toupper.c)| int		ft_toupper(int c);                                              |      |
|  22 | [ft_tolower](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_tolower.c)| int		ft_tolower(int c);                                              |      |
|  23 | [ft_calloc](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_calloc.c)  | void	\*ft_calloc(size_t count, size_t size);                         |      |
|  24 | [ft_strdup](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/ft_strdup.c)  | char	\*ft_strdup(const char \*s1);                                   |      |

Additional Functions
| No. | Functions                                                                              | Prototypes                                                            | Description |
| :-: | :------------------------------------------------------------------------------------- | :-------------------------------------------------------------------- | :---------- |
|  1  | [ft_substr](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)     | char *ft_substr(char const *s, unsigned int start, size_t len); |      |
|  2  | [ft_strjoin](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)    | char *ft_strjoin(char const *s1, char const *s2);               |      |
|  3  | [ft_strtrim](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)    | char *ft_strtrim(char const *s1, char const *set);              |      |
|  4  | [ft_split](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)      | char **ft_split(char const *s, char c);                         |      |
|  5  | [ft_itoa](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)       | char *ft_itoa(int n);                                           |      |
|  6  | [ft_strmapi](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)    | char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); |      |
|  7  | [ft_putchar_fd](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md) | void ft_putchar_fd(char c, int fd);                             |      |
|  8  | [ft_putstr_fd](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)  | void ft_putstr_fd(char *s, int fd);                             |      |
|  9  | [ft_putendl_fd](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md) | void ft_putendl_fd(char *s, int fd);                            |      |
|  10 | [ft_putnbr_fd](https://github.com/kaizhelim/42Cursus-Libft/blob/main/libft/README.md)  | void ft_putnbr_fd(int n, int fd);                               |      |  
