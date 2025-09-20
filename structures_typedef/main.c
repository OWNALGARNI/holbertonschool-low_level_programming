#include <stdio.h>
#include "main.h"

/**
 * print_dog - طباعة معلومات الكلب
 * @d: مؤشر إلى هيكل الكلب
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.2f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

/**
 * main - نقطة البداية
 * Return: 0 عند النجاح
 */
int main(void)
{
    struct dog my_dog = {"Max", 4.5, "Ahmed"};

    print_dog(&my_dog);
    return (0);
}

