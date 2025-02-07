/* wolfssl.h
 *
 * Copyright (C) 2006-2024 wolfSSL Inc.
 *
 * This file is part of wolfSSL.
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1335, USA
 */

/* Edit with caution. This is an Arduino-library specific header for wolfSSL */

#ifndef WOLFSSL_USER_SETTINGS
    #define WOLFSSL_USER_SETTINGS
#endif

#include <Arduino.h>

/* wolfSSL user_settings.h must be included from settings.h */
#include <wolfssl/wolfcrypt/settings.h>
#include <wolfssl/ssl.h>


int wolfSSL_Arduino_Serial_Print(const char *const s);
// int wolfSSL_Arduino_Serial_Print(const char *const s)
// {
//     /* See wolfssl/wolfcrypt/logging.c */
//     Serial.println(F(s));
//     return 0;

//  };