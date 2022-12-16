/*
** EPITECH PROJECT, 2022
** bootstrap my radar
** File description:
** bootstrap my radar
*/

#include "my.h"

int main(int argc, char const *argv[])
{
    sfRenderWindow *window = create_window(800, 600, 32, "ma fenetre");
    sfEvent event;

    if (!window)
        return 84;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfRed);

        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
