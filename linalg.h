#if !defined(LINALG_H)
#define LINALG_H

typedef struct
{
  float x, y;
} v2f;

inline static v2f v2f_add(v2f a, v2f b);

typedef struct
{
  float x, y, z;
} v3f;

typedef struct
{
  float x, y, z, w;
} v4f;

typedef union
{
  v3f r[3];
  float m[3][3];
} m33;

typedef union
{
  v4f r[4];
  float m[4][4];
} m44;

#endif
