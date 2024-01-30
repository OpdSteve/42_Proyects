/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:23:37 by eleon-go@st       #+#    #+#             */
/*   Updated: 2023/11/26 20:23:28 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indicamos que LIBFT_H no esta definido de serie, para definirlo nosotros*/
#ifndef LIBFT_H
# define LIBFT_H

/*Incluimos las librerias necesarias para nuestras funciones*/
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*Indicamos el tipo de estructura de s_list y que es un valor void*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* -V- Ahora vamos a integrar las funciones que componen esta libreria	-V- */

/* -V-							PRIMERA PARTE 							-V- */

/*Esta funcion devuelve "1" si cumple que el imput sea un caracter alfabetico*/
int		ft_isalpha(int c);

/*Esta funcion devuelve "1" si cumple que el imput sea un numero (0-9)*/
int		ft_isdigit(int c);

/*Esta funcion devuelve "1" si cumple que el imput sea un numero o letra*/
int		ft_isalnum(int c);

/*Esta funcion devuelve "1" si cumple que el imput sea un ASCII*/
int		ft_isascii(int c);

/*Esta funcion devuelve "1" si cumple que el imput sea imprimible*/
int		ft_isprint(int c);

/* Esta función cuenta los caracteres del imput y devuelve la longitud*/
size_t	ft_strlen(const char *s);

/*Este codigo convierte las minusculas en mayuscula*/
int		ft_toupper(int c);

/*Este codigo convierte las mayusculas en minusculas*/
int		ft_tolower(int c);

/*Esta funcion escribe 0 bytes en el espacio n, si n es 0, no hace nada 
utilizamos*/
void	ft_bzero(void *s, size_t n);

/*copia el caracter c (un char sin signo) a los primeros n caracteres de str*/
void	*ft_memset(void *b, int c, size_t len);

/*Se utiliza para copiar una cantidad especificada de bytes de una ubicación de 
memoria a otra*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*se usa para mover un bloque de memoria de una ubicación a otra sin interferir 
con los datos que contiene*/
void	*ft_memmove(void *dst, const void *src, size_t len);

/*se usa para copiar una cadena de caracteres de una ubicación a otra*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/*Se usa para concatenar una cadena de caracteres a otra*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*Devuelve un puntero a la primera ubicacion del string*/
char	*ft_strchr(const char *s, int c);

/*Devuelve un puntero a la ultima ubicacion del string*/
char	*ft_strrchr(const char *s, int c);

/*Compara dos cadenas de string*/
int		ft_strncmp(const char *s1, const char *s2, size_t size);

/*Compara los Bytes de memoria de dos valores de memoria*/
void	*ft_memchr(const void *s, int c, size_t n);

/*Compara los Bytes de memoria de dos strings*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*Busca una subcadena (little) dentro de otra cadena más grande (big) 
con una longitud máxima especificada (len). Devuelve un puntero al 
inicio de la subcadena en big si se encuentra, o un puntero nulo si no 
hay coincidencia.*/
char	*ft_strnstr(const char *big, const char *little, size_t len);

/*Convierte una cadena de caracteres numéricos en un valor entero, manejando 
espacios, caracteres de control y el signo del número. Devuelve el entero 
resultante*/
int		ft_atoi(const char *nptr);

/*Asigna un bloque de memoria para un arreglo de elementos y lo inicializa a 
cero. Devuelve un puntero al bloque de memoria asignado o nulo en caso de 
error.*/
void	*ft_calloc(size_t nmemb, size_t size);

/*Duplica una cadena de caracteres, asignando memoria para la nueva cadena, 
copiando el contenido de la cadena original y devolviendo un puntero a la nueva 
cadena duplicada.*/
char	*ft_strdup(const char *s);

/* -V-							SEGUNDA PARTE 							-V- */

/*Devuelve una subcadena de una cadena dada, comenzando desde una posición 
especificada y con una longitud dada. Maneja casos especiales, asigna memoria, 
copia los caracteres relevantes y devuelve un puntero a la nueva subcadena.*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*Concatena dos cadenas de caracteres (s1 y s2) para formar una nueva cadena y 
devuelve un puntero a la cadena resultante. Maneja la asignación de memoria y la 
copia de caracteres de manera dinámica*/
char	*ft_strjoin(char const *s1, char const *s2);

/*Elimina los caracteres especificados en set del principio y el final de la 
cadena s1 y devuelve una nueva cadena resultante.*/
char	*ft_strtrim(char const *s1, char const *set);

/*Divide una cadena en subcadenas utilizando un delimitador especificado y 
devuelve un arreglo de punteros a las subcadenas resultantes. Maneja la 
asignación de memoria y la división de la cadena en palabras de manera 
dinámica*/
char	**ft_split(char const *s, char c);

/*Convierte un número entero en una cadena de caracteres, manejando casos 
especiales como cero y números negativos. Además, se encarga de la asignación de 
memoria de manera dinámica.*/
char	*ft_itoa(int n);

/*Crea una nueva cadena aplicando una función f a cada caracter de la cadena s 
junto con su índice. Maneja la asignación de memoria y la manipulación de 
caracteres de manera dinámica.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*aplica la función f a cada carácter de la cadena s, proporcionando también 
el índice de ese carácter. La función maneja la verificación de la existencia de 
la cadena y utiliza un bucle para recorrer la cadena y aplicar la función a cada 
carácter.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*Funcion para imprimir en pantalla*/
void	ft_putchar_fd(char c, int fd);

/*imprime un carácter (c) en un descriptor de archivo específico (fd). Utiliza 
la función write para escribir el carácter en el archivo asociado con el 
descriptor de archivo proporcionado.*/
void	ft_putstr_fd(char *s, int fd);

/* imprime la cadena s seguida de un salto de línea en el descriptor de 
archivo especificado. La función se basa en ft_putstr_fd para imprimir la cadena 
y luego utiliza ft_putchar_fd para agregar un salto de línea al final.*/
void	ft_putendl_fd(char *s, int fd);

/*imprime un número entero en un descriptor de archivo especificado. La función 
maneja casos especiales, imprime el signo y luego realiza una división recursiva 
del número para imprimir cada dígito.*/
void	ft_putnbr_fd(int n, int fd);

/* -V-							PARTE DE BONUS 							-V- */

/*crea un nuevo nodo de lista con el contenido especificado y devuelve un 
puntero a ese nodo. Esta función es comúnmente utilizada para inicializar un 
nodo antes de agregarlo a una lista enlazada.*/
t_list	*ft_lstnew(void *content);

/*agrega el nodo new al frente de la lista enlazada especificada por el puntero 
lst. La función verifica si la lista y el nuevo nodo existen antes de realizar 
la operación.*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/*devuelve el número de nodos en una lista enlazada dada, o 0 si la lista es 
nula. La función recorre la lista y cuenta los nodos mediante un bucle while*/
int		ft_lstsize(t_list *lst);

/*devuelve un puntero al último nodo de la lista enlazada dada. Si la lista es 
nula, la función devuelve también un puntero nulo. La función recorre la lista 
hasta encontrar el último nodo.*/
t_list	*ft_lstlast(t_list *lst);

/*agrega el nodo new al final de la lista enlazada especificada por el puntero 
lst. La función verifica si la lista y el nuevo nodo existen antes de realizar 
la operación, maneja el caso de una lista vacía y luego recorre la lista para 
agregar el nuevo nodo al final.*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/*elimina un solo nodo de la lista enlazada. La función verifica si el nodo y 
la función de eliminación existen antes de proceder. Luego, utiliza la función 
de eliminación para liberar la memoria asociada al contenido del nodo y, 
finalmente, libera la memoria del propio nodo.*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/*elimina todos los nodos de la lista enlazada, liberando la memoria asociada 
al contenido de cada nodo y a los nodos mismos. La función verifica si la lista 
y la función de eliminación existen antes de proceder.*/
void	ft_lstclear(t_list **lst, void (*del)(void *));

/*aplica la función f a cada elemento de la lista enlazada. La función verifica 
si la lista y la función existen antes de proceder y luego recorre la lista 
aplicando la función a cada elemento.*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/*crea una nueva lista aplicando una función f a cada elemento de la lista 
original. Maneja errores liberando la memoria en caso de fallo y devuelve un 
puntero a la nueva lista creada.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif