#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
/*
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

char *ft_strstr (const char *str,const char *to_find)
{
  int i;
  int c;
  
  i = 0;
  if (to_find[0] == '\0')
		return (str);
  while (str[i] != '\0')
    {
        c = 0;
        while (str[i + c] != '\0' && str[i + c] == to_find[c])
	       {
	            if (to_find[c + 1] == '\0')
                    return (&str[i]);
	            c++;
    	   }
        i++;
        return (0);
    }
}

char *ft_strnstr(const char *body, const char *to_find, size_t n)
{
    char *str = ft_strstr(body, to_find);
    if (!str)
        return NULL;
    if (str - body + ft_strlen(to_find) <= n)
        return str;
    else
        return NULL;
}
*/




char    *ft_strnstr(const char *body, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!body || !to_find)
		return (NULL);
	if (!to_find || !to_find[0])
		return ((char*)body);
	i = 0;
	while (body[i] && i < len)
	{
		j = 0;
		while (body[i + j] && to_find[j] &&
				i + j < len && body[i + j] == to_find[j])
        {
			j++;
		    if (!to_find[j])
			    return ((char*)(body + i));
        }
		i++;
    }
	return (NULL);
}

int main() {
    const char *haystack = "daje roma";
    const char *needle = "roma";

    // Utilizzo della funzione my_strstr
    char *posizione = ft_strnstr(haystack, needle, 8);

    if (posizione != NULL) {
        printf("Sottostringa trovata alla posizione %ld\n", posizione - haystack);
        printf("Sottostringa trovata alla posizione %s\n", posizione);
    } else {
        printf("Sottostringa non trovata nella stringa\n");
    }

    return 0;
}