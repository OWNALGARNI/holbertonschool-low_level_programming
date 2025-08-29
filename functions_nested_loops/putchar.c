#include <unistd.h>

/**
 * _putchar - يطبع حرفًا واحدًا على الشاشة
 * @c: الحرف المطلوب طباعته
 *
 * Return: 1 عند النجاح، -1 عند الخطأ
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
