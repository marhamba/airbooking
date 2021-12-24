#include "../Includes/include.hpp"

void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}



// int	ft_strlen(char *str)
// {
// 	int	i;
// 	i = 0;
// 	while(str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	size_t	len;
// 	size_t	i;
// 	size_t	j;
// 	char	*join_str;

// 	if (!s1 || !s2)
// 		return (NULL);
// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	i = 0;
// 	j = 0;
// 	while (s1[j])
// 	{
// 		join_str[i++] = s1[j++];
// 	}
// 	j = 0;
// 	while (s2[j])
// 	{
// 		join_str[i++] = s2[j++];
// 	}
// 	join_str[i] = 0;
// 	return (join_str);
// }