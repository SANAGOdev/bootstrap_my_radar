/*
** EPITECH PROJECT, 2022
** bootstrap my radar
** File description:
** bootstrap my radar
*/

#include "my.h"

sfRenderWindow *create_window(unsigned int x, unsigned int y, unsigned int bpp, char *title)
{
    sfVideoMode mode = {x, y, bpp};
    return (sfRenderWindow_create(mode, title, sfResize | sfClose, NULL));
}
