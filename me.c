#include <stdio.h>
#include "nvme.h"

int main()
{
	int argc=0;
	char **argv=NULL;
	struct command *cmd=NULL;
	struct plugin *plugin=NULL;

	write_cmd(argc, argv, cmd, plugin);

	return 0;
}
