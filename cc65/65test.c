#include <string.h>
#include <stdint.h>

#define TRUE 1
#define FALSE 0

uint8_t *video_ram = (uint8_t *) 0xF800;
uint8_t *mail_flag = (uint8_t *) 0x0200;
uint8_t *mail_box  = (uint8_t *) 0x0201;

int main()
{
	const char *s = "Hello, World!";
	int i;

	for(i=0;i<strlen(s);i++)
		video_ram[i]=s[i];

	while(TRUE);

	return 0;
}

