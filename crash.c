int main(void) {
  volatile int *p = (void *)1;
  return *p;
}
