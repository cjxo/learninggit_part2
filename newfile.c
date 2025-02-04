typedef struct
{
  float x, y;
} v2f;

inline static v2f v2f_add(v2f a, v2f b)
{
  return (v2f)
  {
    a.x + b.x,
    a.y + b.y
  };
}

int main(void)
{
  return 0;
}
