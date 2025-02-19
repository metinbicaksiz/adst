#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_print_alphabet(void) {
	char i = 'a';
	while(i <= 'z') {
		ft_putchar(i);
		i++;
	}
}

int main() {
    ft_print_alphabet();
    write(1, "\n", 1);
    return 0;
}

