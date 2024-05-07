#include "definitions.h"
#include "configuration.h"
#include "SDL.h"

static void main_loop(void)
{
    Legato_Tasks();
    GFX_SIM_Update();
    GFX_CANVAS_Task();
    SYS_INP_Tasks();
    APP_Tasks();
}

int main(int argv, char **args)
{
    GFX_SIM_Initialize();
    GFX_CANVAS_Initialize();
    SYS_INP_Init();
    Legato_Initialize();
    APP_Initialize();
    while (1)
    {
        main_loop();
    }

    return -1;
}
