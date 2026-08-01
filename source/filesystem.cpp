#include <switch.h>

#include <stdio.h>


void loadConfig()
{

FILE* f =
fopen(
"romfs:/config.json",
"r"
);


if(f)
{

printf(
"Config loaded\n"
);


fclose(f);

}

}
