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
    sfVector2f vector = {100, 100};
    sfCircleShape *circle = create_circle(vector, 150);
    sfEvent event;

    if (!window)
        return 84;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfWhite);
        sfRenderWindow_drawCircleShape(window, circle, NULL);
        sfCircleShape_setFillColor(circle, sfRed);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
