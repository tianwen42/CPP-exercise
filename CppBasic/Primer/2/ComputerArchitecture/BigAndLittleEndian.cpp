// https://ckc-agc.bowling233.top/programming_lecture/lecture2/lecture2/#_5
#include <cstdint>
#include <iostream>
#define _STR0(x) #x
#define _STR(x) _STR0(x)
#define _MAGIC0(name, val, size) \
    _magic_print((name), (const uint8_t*)(val), (size))
#define MAGIC(v) _MAGIC0(_STR(v), (&v), sizeof(v));
#define MAGIC_R(v)                          \
    ({                                      \
        __typeof__(v) _v = v;               \
        _MAGIC0(_STR(v), (&_v), sizeof(v)); \
    });
#define MAGIC_SIZED(v, size) _MAGIC0(_STR(v), (&v), (size));
#define MAGIC_PTR(v) fprintf(stderr, "%s: %p\n", _STR(v), (void*)(v));

static void _magic_print(const char* name, const uint8_t* ptr, size_t size) {
    fprintf(stderr, "=====\n%s: %zu (%#zx) byte%s", name, size, size,
            ("s") + (size == 1));
    for (size_t i = 0; i < size; i++) {
        if (i % 16 == 0)
            fprintf(stderr, "\n%0*zx ", 4, i);
        fprintf(stderr, " %02hhx", ptr[i]);
    }
    fprintf(stderr, "\n");
}

int main() {
    // 大小端问题
    int i = 0x20231203;
    MAGIC(i);
    MAGIC_R(0x20231203);
    // 4bytes | 03 12 23 20 小端序(X86,AMD64,ARM) | 20 23 12 03 大端序(linux)

    long long ll = 0xfedcba9876543210LL;
    MAGIC(ll);
    // 8bytes  | 10 32 54 76 98 ba dc fe 小端序(X86,AMD64,ARM)

    double d = 3.14159265358979323;
    MAGIC(d);
    // 8bytes I:0x400921fb54442d18 | 18 2d 44 54 fb 21 09 40

    float f = d;
    MAGIC(f);
    // 4bytes 0x40490FDB | db 0f 49 40

    char c = 'A';
    MAGIC(c);
    // 1bytes ASCII=65 0x0041 | 41

    MAGIC_R('A');
    // 1bytes ASCII=65 0x0041 | 41

    MAGIC_R((short)ll);
    // 8bytes 10 32 54 76 98 ba dc fe
    // 8bytes->2bytes
    // 0x3210 | 10 32

    MAGIC(
        "Hello world! I am a l"
        "ong string.");
}
