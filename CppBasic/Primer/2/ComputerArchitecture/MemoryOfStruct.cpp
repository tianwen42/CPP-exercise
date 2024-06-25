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

struct point {
    int x;
    long y;
};

union un_t {
    long l;
    double d;
};

enum en_t { ENA, ENB, ENC = 114514 };

int main() {
    struct point p = {1234, -5678};
    MAGIC(p);

    union un_t un;
    un.d = 3.14159265358979323;
    // union和struct,枚举类型的区别
    MAGIC(un);

    MAGIC_R(ENA);
    MAGIC_R(ENC);

    MAGIC_PTR(&p.x);
    MAGIC_PTR(&p.y);
    //  union 允许在相同的内存位置存储不同的数据类型，但会导致类型转换问题。
    MAGIC_PTR(&un.l);
    MAGIC_PTR(&un.d);
    return 0;
}