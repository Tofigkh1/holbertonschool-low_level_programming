#include <stdio.h>

int main(int argc, char *argv[])
{
(void)argc;  /* argc'yi kullanmadığımızı belirtmek için */
printf("%s\n", argv[0]);  /* Program adını yazdır */
return 0;
}
