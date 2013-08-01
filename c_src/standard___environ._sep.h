/* This C header file is generated by NIT to compile modules and programs that requires ../lib/standard/environ. */
#ifndef standard___environ_sep
#define standard___environ_sep
#include "standard___string._sep.h"
#include <nit_common.h>
#include "environ._nitni.h"
extern const char LOCATE_standard___environ[];
extern const int SFT_standard___environ[];
#define CALL_standard___environ___String___environ(recv) ((standard___environ___String___environ_t)CALL((recv), (SFT_standard___environ[0] + 0)))
#define CALL_standard___environ___String___setenv(recv) ((standard___environ___String___setenv_t)CALL((recv), (SFT_standard___environ[0] + 1)))
#define CALL_standard___environ___NativeString___get_environ(recv) ((standard___environ___NativeString___get_environ_t)CALL((recv), (SFT_standard___environ[1] + 0)))
#define CALL_standard___environ___NativeString___setenv(recv) ((standard___environ___NativeString___setenv_t)CALL((recv), (SFT_standard___environ[1] + 1)))
val_t standard___environ___String___environ(val_t p0);
typedef val_t (*standard___environ___String___environ_t)(val_t p0);
void standard___environ___String___setenv(val_t p0, val_t p1);
typedef void (*standard___environ___String___setenv_t)(val_t p0, val_t p1);
val_t NEW_String_standard___string___String___from_cstring(val_t p0);
val_t NEW_String_standard___string___String___with_native(val_t p0, val_t p1);
val_t NEW_String_standard___string___String___from_substring(val_t p0, val_t p1, val_t p2);
val_t NEW_String_standard___string___String___copy_from_native(val_t p0);
val_t standard___environ___NativeString___get_environ(val_t p0);
typedef val_t (*standard___environ___NativeString___get_environ_t)(val_t p0);
void standard___environ___NativeString___setenv(val_t p0, val_t p1);
typedef void (*standard___environ___NativeString___setenv_t)(val_t p0, val_t p1);
val_t NEW_NativeString_standard___string___NativeString___init();
#endif
