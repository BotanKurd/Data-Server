#include <stdio.h>
#include "../network/server.h"

#define VERSION "0.0.1"


int main() {
    printf("      ___           ___           ___           ___           ___           ___     \n"
           "     /\\  \\         /\\  \\         /\\  \\         /\\__\\         /\\  \\         /\\__\\    \n"
           "    /::\\  \\       /::\\  \\        \\:\\  \\       /:/  /        /::\\  \\       /:/  /    \n"
           "   /:/\\:\\  \\     /:/\\:\\  \\        \\:\\  \\     /:/  /        /:/\\:\\  \\     /:/__/     \n"
           "  /:/  \\:\\__\\   /::\\~\\:\\  \\       /::\\  \\   /:/  /  ___   /::\\~\\:\\  \\   /::\\__\\____ \n"
           " /:/__/ \\:|__| /:/\\:\\ \\:\\__\\     /:/\\:\\__\\ /:/__/  /\\__\\ /:/\\:\\ \\:\\__\\ /:/\\:::::\\__\\\n"
           " \\:\\  \\ /:/  / \\/__\\:\\/:/  /    /:/  \\/__/ \\:\\  \\ /:/  / \\/__\\:\\/:/  / \\/_|:|~~|~   \n"
           "  \\:\\  /:/  /       \\::/  /    /:/  /       \\:\\  /:/  /       \\::/  /     |:|  |    \n"
           "   \\:\\/:/  /        /:/  /     \\/__/         \\:\\/:/  /        /:/  /      |:|  |    \n"
           "    \\::/__/        /:/  /                     \\::/  /        /:/  /       |:|  |    \n"
           "     ~~            \\/__/                       \\/__/         \\/__/         \\|__|    \n\nServer v %s\n\n\n",
           VERSION);

    load_configuration();
    bind_server();

    return 0;
}