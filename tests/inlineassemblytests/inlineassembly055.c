int main() {
  unsigned int arg = 0x80000000;
  unsigned int out = 0;
  __asm__("movb $1, %%cl; roll %%cl, %%eax;" : "=a"(out) : "a"(arg));
  return (out == 0x1);
}
