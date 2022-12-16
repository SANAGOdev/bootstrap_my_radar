/*
** EPITECH PROJECT, 2022
** bootstrap my radar
** File description:
** bootstrap my radar
*/

#include "my.h"

sfCircleShape *create_circle(sfVector2f pos, float radius)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfCircleShape_setPosition(circle, pos);
    sfCircleShape_setRadius(circle, radius);
    return circle;
}
