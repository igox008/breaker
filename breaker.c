#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		t;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	t = strlen(s1) + strlen(s2);
	new = (char *)malloc(t + 1);
	if (new == NULL)
		return (NULL);
	while (j < strlen(s1))
		new[i++] = s1[j++];
	j = 0;
	while (j < strlen(s2))
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}

static int	n_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		if (n == 0)
			return (i);
		n *= -1;
	}
	while (n % 10 >= 0 && n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*num;

	i = 0;
	if (n == -2147483648)
		return (strdup("-2147483648"));
	len = n_len(n);
	num = (char *)malloc(len + 1);
	if (num == NULL)
		return (printf("malloc error"), NULL);
	if (n < 0)
	{
		n *= -1;
		num[0] = '-';
		i = 1;
	}
	num[len] = '\0';
	while (len - 1 >= i)
	{
		num[len - 1] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (num);
}

bool is_in(int arr[], int size, int n) {
    for (int j = 0; j < size; j++) {
        if (arr[j] == n) {
            return true;
        }
    }
    return false;
}

char *final;
void    run_command(void)
{
    char    command[10240];
    sprintf(command, "ARG=\"%s\" ; ./push_swap $ARG | wc -l", final);
    system(command);
    // sprintf(command, "ARG="\%s\"; ./push_swap $ARG | ./checker $ARG", final);
    // system(command);
    // sprintf(command, "ARG=\"%s)\" ; ./push_swap $ARG | ./checker_Mac $ARG", final);
    // system(command);
}

int main() {
    const int ARRAY_SIZE = 500;
    int arr[ARRAY_SIZE];
    int size = (13 * ARRAY_SIZE) + 1;

    srand(time(NULL));
    atexit(run_command);
    final = malloc(size);
    if (!final)
        return (printf("malloc error"));
    bzero(final, size);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int newNum;
        do {
            newNum = rand();
            newNum *= (i % 2 == 0 ? -1 : 1);
            char *N = ft_itoa(newNum);
            char *n = ft_strjoin((const char *)N, " ");
            strcat(final, n);
            free(n);
            free(N);
        } while (is_in(arr, i, newNum));
        arr[i] = newNum;
    }
    return 0;
}
